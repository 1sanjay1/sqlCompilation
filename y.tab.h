/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    exit_command = 258,
    INTEGER = 259,
    DECIMAL = 260,
    IDENTIFIER = 261,
    STRING = 262,
    CURRENT_DATE = 263,
    SELECT = 264,
    FROM = 265,
    WHERE = 266,
    DISTINCT = 267,
    ALL = 268,
    ASC = 269,
    DESC = 270,
    LIMIT = 271,
    HAVING = 272,
    GROUP_BY = 273,
    ORDER_BY = 274,
    AS = 275,
    BETWEEN = 276,
    LOW_PRIORITY = 277,
    HIGH_PRIORITY = 278,
    QUICK = 279,
    IGNORE = 280,
    DELETE = 281,
    UPDATE = 282,
    SET = 283,
    INSERT = 284,
    INTO = 285,
    DELAYED = 286,
    VALUE = 287,
    VALUES = 288,
    INNER = 289,
    CROSS = 290,
    STRAIGHT_JOIN = 291,
    ON = 292,
    JOIN = 293,
    NATURAL = 294,
    LEFT = 295,
    RIGHT = 296,
    OUTER = 297,
    USING = 298,
    OR = 299,
    AND = 300,
    XOR = 301,
    DIV = 302,
    MOD = 303,
    EQ = 304,
    LTE = 305,
    GTE = 306,
    SEMI = 307,
    COLON = 308,
    DOT = 309,
    COMMA = 310,
    ASTERISK = 311,
    RPAREN = 312,
    LPAREN = 313,
    RBRACK = 314,
    LBRACK = 315,
    PLUS = 316,
    MINUS = 317,
    NEGATION = 318,
    BITOR = 319,
    BITAND = 320,
    POWER_OP = 321,
    GT = 322,
    LT = 323
  };
#endif
/* Tokens.  */
#define exit_command 258
#define INTEGER 259
#define DECIMAL 260
#define IDENTIFIER 261
#define STRING 262
#define CURRENT_DATE 263
#define SELECT 264
#define FROM 265
#define WHERE 266
#define DISTINCT 267
#define ALL 268
#define ASC 269
#define DESC 270
#define LIMIT 271
#define HAVING 272
#define GROUP_BY 273
#define ORDER_BY 274
#define AS 275
#define BETWEEN 276
#define LOW_PRIORITY 277
#define HIGH_PRIORITY 278
#define QUICK 279
#define IGNORE 280
#define DELETE 281
#define UPDATE 282
#define SET 283
#define INSERT 284
#define INTO 285
#define DELAYED 286
#define VALUE 287
#define VALUES 288
#define INNER 289
#define CROSS 290
#define STRAIGHT_JOIN 291
#define ON 292
#define JOIN 293
#define NATURAL 294
#define LEFT 295
#define RIGHT 296
#define OUTER 297
#define USING 298
#define OR 299
#define AND 300
#define XOR 301
#define DIV 302
#define MOD 303
#define EQ 304
#define LTE 305
#define GTE 306
#define SEMI 307
#define COLON 308
#define DOT 309
#define COMMA 310
#define ASTERISK 311
#define RPAREN 312
#define LPAREN 313
#define RBRACK 314
#define LBRACK 315
#define PLUS 316
#define MINUS 317
#define NEGATION 318
#define BITOR 319
#define BITAND 320
#define POWER_OP 321
#define GT 322
#define LT 323

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
