%{

    extern char* yytext;
    void yyerror (char *s);
    void successMessage();
    #include <stdio.h>
    #include <stdlib.h>
    #include "header.h"

%}

/*yacc definition*/


%start sqlQuery

%token exit_command
%token INTEGER
%token DECIMAL
%token IDENTIFIER
%token STRING

%token CURRENT_DATE

%token SELECT
%token FROM
%token WHERE
%token DISTINCT
%token ALL
%token ASC
%token DESC
%token LIMIT
%token HAVING
%token GROUP_BY
%token ORDER_BY
%token AS
%token BETWEEN

%token LOW_PRIORITY
%token HIGH_PRIORITY
%token QUICK
%token IGNORE
%token DELETE
%token UPDATE
%token SET
%token INSERT
%token INTO
%token DELAYED
%token VALUE
%token VALUES

%token INNER
%token CROSS
%token STRAIGHT_JOIN
%token ON
%token JOIN
%token NATURAL
%token LEFT
%token RIGHT
%token OUTER
%token USING

%token OR
%token AND
%token XOR

%token DIV
%token MOD
%token EQ
%token LTE
%token GTE

%token SEMI
%token COLON
%token DOT
%token COMMA
%token ASTERISK
%token RPAREN
%token LPAREN
%token RBRACK
%token LBRACK
%token PLUS
%token MINUS
%token NEGATION
%token BITOR
%token BITAND
%token POWER_OP
%token GT
%token LT


%%


 //basic token definition

NOT		: 	'!''=' | '~''='| '^''='	;



sqlQuery			:	sql_statement SEMI            { successMessage();}
            		| 	exit_command SEMI          	{exit(EXIT_SUCCESS);} 
            		| 	sqlQuery SEMI				{;}
            		| 	sqlQuery exit_command SEMI	{exit(EXIT_SUCCESS);}
            		;



/*********************** Select Rules **************************************/

sql_statement		:	select_statement
				|	delete_statement
				|	update_statement
				|	insert_statement				
				|	LPAREN sql_statement RPAREN
				;

select_statement	:	select_expression	
				;
				
select_expression	:	select_keyword  select_list1 		
				;


select_keyword		:	SELECT 
				|	SELECT ALL	
				|	SELECT DISTINCT
				;
				
				
select_list1		:	select_list
				|	select_list  from_clause1
				|	select_list  orderby_clause
				|	select_list  limit_clause
				|	select_list  from_clause1 orderby_clause
				|	select_list  from_clause1 limit_clause
				|	select_list  orderby_clause limit_clause
				|	select_list  from_clause1 orderby_clause limit_clause
				;

from_clause1		:	FROM table_references
				|	FROM table_references  where_clause
				|	FROM table_references  groupby_clause
				|	FROM table_references  having_clause
				|	FROM table_references  where_clause groupby_clause
				|	FROM table_references  where_clause having_clause
				|	FROM table_references  groupby_clause having_clause
				|	FROM table_references  where_clause groupby_clause having_clause
				;
				
//where clause
where_clause		:	WHERE expression
				;


/* Group by Clause */				;
				
groupby_clause		:	GROUP_BY groupby_item_A
				;
				
groupby_item_A		:	groupby_item_B
				|	groupby_item_C
				;
				
groupby_item_C		:	groupby_item_B					
				|	groupby_item_B COMMA groupby_item_C
				;

groupby_item_B		:	groupby_item_B_B
				|	groupby_item_B_C
				;
				
groupby_item_B_C	:	groupby_item_B_B
				|	groupby_item_B_B DOT groupby_item_B_C 
				;

groupby_item_B_B	:	IDENTIFIER
				;
				
/* End Group by Clause */				
				

//having clause				
having_clause		:	HAVING expression
				;



/* orderby clause Begin */				
orderby_clause		:	ORDER_BY orderby_item_A
				;

orderby_item_A		:	orderby_item_B
				|	orderby_item_C
				;
				
orderby_item_C		:	orderby_item_B					
				|	orderby_item_B COMMA orderby_item_C
				;

orderby_item_B		:	orderby_item_B1
				|	orderby_item_B1 ASC
				|	orderby_item_B1 DESC
				;

orderby_item_B1	:	orderby_item_B_B
				|	orderby_item_B_C
				;
				
orderby_item_B_C	:	orderby_item_B_B
				|	orderby_item_B_B DOT orderby_item_B_C 
				;

orderby_item_B_B	:	IDENTIFIER
				;
/* Order by Clause End*/


//limit clause				
limit_clause		:	LIMIT offset  COMMA  row_count
				|	LIMIT  row_count
				;
				
offset			:	INTEGER
				;
				
row_count			:	INTEGER
				;


//select list rules
select_list		:	mul_attributes
				|	ASTERISK
				;
				
mul_attributes		:	displayed_column
				|	withcomma_attribute
				;
				
withcomma_attribute	:	displayed_column					
				|	displayed_column COMMA withcomma_attribute
				;

displayed_column	:	displayed_column1
				|	displayed_column2
				;
				
displayed_column2	:	displayed_column1
				|	displayed_column1 DOT displayed_column2 
				|	displayed_column1 DOT ASTERISK
				;

displayed_column1	:	column_spec
				|	column_spec alias
				;
				
column_spec		:	IDENTIFIER
				|	CURRENT_DATE	
				|	expression
				;
				
alias			:	AS IDENTIFIER
				;


//Expression in WHERE clause

expression		:	expr
				|	LPAREN expression RPAREN
				;

expr				:	LPAREN expr RPAREN	
				|	expr OR expr
  				|	expr XOR expr
  				| 	expr AND expr
  				| 	NOT expr
  				| 	boolean_primary
  				;

boolean_primary	:	boolean_primary comparison_operator predicate
  				|	predicate
  				;

comparison_operator	: 	EQ | GTE | GT | LTE | LT | NOT
				;

predicate			:	bit_expr [NOT] BETWEEN bit_expr AND predicate
  				| 	bit_expr
  				;

bit_expr			:	bit_expr		BITOR		bit_expr
  				|	bit_expr 		BITAND		bit_expr
  				| 	bit_expr 		PLUS 		bit_expr
  				| 	bit_expr 		MINUS 		bit_expr
  				| 	bit_expr 		ASTERISK 		bit_expr
  				| 	bit_expr 		DIV	 		bit_expr
  				| 	bit_expr 		MOD 			bit_expr
  				| 	bit_expr 		POWER_OP 		bit_expr
 				| 	simple_expr
 				;

simple_expr		:	literal
  				| 	variable
  				;
  				
variable			:	variable_A
				|	variable_B
				;
				
variable_B		:	variable_A
				|	variable_A DOT variable_B
				;
				
variable_A		:	IDENTIFIER
				;
  				
literal			:	INTEGER
				|	DECIMAL
				|	STRING
				;


/* join operation */
table_references	:	escaped_table_A
				|	escaped_table_B
				;
				
escaped_table_B	:	escaped_table_A
				|	escaped_table_A COMMA escaped_table_B
				;
				
escaped_table_A	:	table_factor
				|	join_table
				;
				
table_factor		:	table_name 
				|	table_name  IDENTIFIER
				|	table_name  alias
				|	table_subquery IDENTIFIER
				|	table_subquery  alias
				|	LPAREN table_references RPAREN
				;
				
table_subquery		:	LPAREN select_statement RPAREN 
				;
				
join_table		:	escaped_table_A  join_table_factor
				|	escaped_table_A  INNER join_table_factor
				|	escaped_table_A  CROSS join_table_factor
				|	escaped_table_A  STRAIGHT_JOIN table_factor
				|	escaped_table_A  STRAIGHT_JOIN table_factor ON conditional_expr
				|	escaped_table_A  left_right_outer JOIN escaped_table_A join_condition
				|	escaped_table_A  NATURAL JOIN table_factor
				|	escaped_table_A  NATURAL left_right_outer JOIN table_factor
				;
				
join_table_factor	:	JOIN table_factor
				|	JOIN table_factor join_condition
				;
				
left_right_outer	:	LEFT 
				| 	RIGHT
				|	LEFT OUTER 
				| 	RIGHT OUTER
				;
				
join_condition		:	ON conditional_expr
				|	USING LPAREN groupby_item_A RPAREN
				;
				
conditional_expr	:	expression
				;
				


/************************* End Select Rules *******************************/


/************************ Start Delete Rules ******************************/
//Single-Table Syntax
           
delete_statement	:	delete_expression
				;
				
delete_expression	:	delete_keyword	 delete_list1
				;
				
delete_keyword		:	DELETE FROM
				|	DELETE LOW_PRIORITY FROM
				|	DELETE QUICK FROM
				|	DELETE IGNORE	FROM
				;
				
delete_list1		:	table_name
				|	table_name  where_clause
				|	table_name  orderby_clause
				|	table_name  limit_clause
				|	table_name  where_clause orderby_clause
				|	table_name  where_clause limit_clause
				|	table_name  orderby_clause limit_clause
				|	table_name  where_clause orderby_clause limit_clause
				;
				
table_name		:	IDENTIFIER
				|	IDENTIFIER DOT IDENTIFIER
				;

/************************ End Delete Rules  *******************************/


/************************ Begin update Rules ******************************/

update_statement	:	update_expression
				;
					
update_expression	:	update_keyword  update_list1
				;
					
update_keyword		:	UPDATE table_references
				|	UPDATE LOW_PRIORITY table_references
				|	UPDATE IGNORE table_references
				;


update_list1		:	set_clause
				|	set_clause  where_clause
				|	set_clause  orderby_clause
				|	set_clause  limit_clause
				|	set_clause  where_clause orderby_clause
				|	set_clause  where_clause limit_clause
				|	set_clause  orderby_clause limit_clause
				|	set_clause  where_clause orderby_clause limit_clause
				;
				
set_clause		:	SET assignment_list
				;

assignment_list	:	assignment_list_A
				|	assignment_list_B
				;
				
assignment_list_B	:	assignment_list_A
				|	assignment_list_A COMMA assignment_list_B
				;

assignment_list_A	:	col_name EQ value
				;
				
value			:	expr
				;
				
col_name			:	IDENTIFIER
				;



/************************ End update Rules ********************************/ 


/************************ Begin Insert Rules *****************************/

insert_statement	:	insert_expression
				;
				
insert_expression	:	insert_keyword  insert_list1
				;
				
insert_keyword		:	INSERT
				|	INSERT low_delay_keyword 
				|	INSERT INTO
				|	INSERT low_delay_keyword INTO
				;
				
low_delay_keyword	:	LOW_PRIORITY
				|	DELAYED
				|	HIGH_PRIORITY
				;
				
insert_list1		:	table_name  value_list
				|	table_name LPAREN column_name_list RPAREN value_list
				;
				
column_name_list	:	groupby_item_A
				;	

value_list		:	VALUES value_list1
				|	VALUE value_list1
				;
				
value_list1		:	value_list_A
				|	value_list_B
				;
				
value_list_B		:	value_list_A
				|	value_list_A COMMA	value_list_B
				;
				
value_list_A		:	LPAREN column_list RPAREN
				;

column_list		:	column_list_B
				|	column_list_C
				;
				
column_list_C		:	column_list_B					
				|	column_list_B COMMA column_list_C
				;

column_list_B		:	INTEGER
				|	DECIMAL
				|	STRING
				;

/************************ End Insert Rules *******************************/



%%


int main(void) {

    return yyparse();

}

void yyerror (char *s) {

    char *s1 = "Syntax Error";
    
    printf("%s at line:%d near token '%s'", s1, lineno, yytext);
    printf("\n%s\n\n", linebuf);

}

void successMessage() {
	printf("\nSuccessfully Compiled\n");
}
