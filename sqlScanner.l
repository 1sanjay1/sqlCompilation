%{
    #include "y.tab.h" 
    #include "header.h"
    lineno = 1;
 
%}

 /* var1 :--> starts with digit and has at least one character from { a-zA-Z$_ } 
    var2 :--> starts without digit
    var3 :--> quoted by backtick(`)
 */
letter 			[a-zA-Z]
digit			[0-9]
var1				[0-9]+[a-zA-Z$_]([0-9a-zA-Z$_])*
var2				[a-zA-Z$_][0-9a-zA-Z$_]*
var3				[`][^`]+[`]
sign				[+|-]

%%

 /* Ignore comments in sql file <<EOF>> */


 /* Begin Reserved Key words */
 
[s|S][e|E][l|L][e|E][c|C][t|T]										{ return SELECT;}		
[f|F][r|R][o|O][m|M]												{ return FROM;}
[w|W][h|H][e|E][r|R][e|E]											{ return WHERE;}
[d|D][i|I][s|S][t|T][i|I][n|N][c|C][t|T]								{ return DISTINCT;}
[a|A][l|L][l|L]													{ return ALL;}
[a|A][s|S][c|C]													{ return ASC;}
[d|D][e|E][s|S][c|C]												{ return DESC;}
[l|L][i|I][m|M][i|I][t|T]											{ return LIMIT;}
[h|H][a|A][v|V][i|I][n|N][g|G]										{ return HAVING;}
[g|G][r|R][o|O][u|U][p|P][ ]+[b|B][y|Y]									{ return GROUP_BY;}
[o|O][r|R][d|D][e|E][r|R][ ]+[b|B][y|Y]									{ return ORDER_BY;}
[a|A][s|S]														{ return AS;}
[b|B][e|E][t|T][w|W][e|E][e|E][n|N]									{ return BETWEEN;}
([O|o][R|r])														{ return OR;}
[\X|][\X|]														{ return OR;}
([a|A][n|N][d|D])|([&][&])											{ return AND;}
[x|X][o|O][r|R]													{ return XOR;}
[c|C][u|U][r|R][r|R][e|E][n|N][t|T][_][d|D][a|A][t|T][e|E]					{ return CURRENT_DATE;}

[u|U][p|P][d|D][a|A][t|T][e|E]										{ return UPDATE;}
[d|D][e|E][l|L][e|E][t|T][e|E]										{ return DELETE;}
[s|S][e|E][t|T]													{ return SET;}
[l|L][o|O][w|W][_][p|P][r|R][i|I][o|O][r|R][i|I][t|T][y|Y]					{ return LOW_PRIORITY;}
[q|Q][u|U][i|I][c|C][k|K]											{ return QUICK;}
[i|I][g|G][n|N][o|O][r|R][e|E]										{ return IGNORE;}

[i|I][n|N][s|S][e|E][r|R][t|T]										{ return INSERT;}
[i|I][n|N][t|T][o|O]												{ return INTO;}
[d|D][e|E][l|L][a|A][y|Y][e|E][d|D]									{ return DELAYED;}
[h|H][i|I][g|G][h|H][_][p|P][r|R][i|I][o|O][r|R][i|I][t|T][y|Y]				{ return HIGH_PRIORITY;}
[v][a][l][u][e][s]													{ return VALUES;}
[v][a][l][u][e]													{ return VALUE;}

[i|I][n|N][n|N][e|E][r|R]											{ return INNER;}
[c|C][r|R][o|O][s|S][s|S]											{ return CROSS;}
[s|S][t|T][r|R][a|A][i|I][g|G][h|H][t|T][_][j|J][o|O][i|I][n|N]				{ return STRAIGHT_JOIN;}
[o|O][n|N]														{ return ON;}
[j|J][o|O][i|I][n|N]												{ return JOIN;}
[n|N][a|A][t|T][u|U][r|R][a|A][l|L]									{ return NATURAL;}
[l|L][e|E][f|F][t|T]												{ return LEFT;}
[r|R][i|I][g|G][h|H][t|T]											{ return RIGHT;}
[o|O][u|U][t|T][e|E][r|R]											{ return OUTER;}
[u|U][s|S][i|I][n|N][g|G]											{ return USING;}

[n|][u|U][l|L][l|L]													{ return NULL;}

 /* End Reserved Key words */




 /* Start Identifiers */

({var1}|{var2}|{var3})												{ return IDENTIFIER;}


 /* Start Literal Constant */

["][^"]*?["]														{ return STRING;}
['][^']*?[']														{ return STRING;}
 
{sign}?{digit}+([e|E]{sign}?{digit}+)?									{ return INTEGER;}
{sign}?({digit}*[.]{digit}+|{digit}+[.]{digit}*)([e|E]{sign}?{digit}+)?		{ return DECIMAL;}

 
 /* Start Operator */
 
([D|d][I|i][V|v])|([/])												{ return DIV;}
([m|M][o|O][d|D])|([%])												{ return MOD;}
[=]																{ return EQ;}
[<][=]															{ return LTE;}
[>][=]															{ return GTE;}
[>]																{ return GT;}
[<]																{ return LT;}


[;]																{ return SEMI;}
[:]																{ return COLON;}
[.]																{ return DOT;}
[,]																{ return COMMA;}
[*]																{ return ASTERISK;}
[)]																{ return RPAREN;}
[(]																{ return LPAREN;}
[\]]																{ return RBRACK;}
[\[]																{ return LBRACK;}
[+]																{ return PLUS;}
[-]																{ return MINUS;}
[~]																{ return NEGATION;}
[|]																{ return BITOR;}
[&]																{ return BITAND;}
[\^]																{ return POWER_OP;}
 
 
[ /t]															{;}  

\n.*  															{ strncpy(linebuf, yytext+1, sizeof(linebuf));
																  lineno++;
            														  yyless(1);      /* give back all but the \n to rescan */
            														  
          														}
          														
.																{ return(yytext[0]);}	
 
%%


int yywrap(void) {

    return 1;

}

