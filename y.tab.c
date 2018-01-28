/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sqlParser.y" /* yacc.c:339  */


    extern char* yytext;
    void yyerror (char *s);
    void successMessage();
    #include <stdio.h>
    #include <stdlib.h>
    #include "header.h"


#line 77 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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

/* Copy the second part of user declarations.  */

#line 264 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   328

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  210
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  304

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    70,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    72,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    71,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    97,    97,    97,    97,   101,   102,   103,   104,   111,
     112,   113,   114,   115,   118,   121,   125,   126,   127,   131,
     132,   133,   134,   135,   136,   137,   138,   141,   142,   143,
     144,   145,   146,   147,   148,   152,   158,   161,   162,   165,
     166,   169,   170,   173,   174,   177,   184,   190,   193,   194,
     197,   198,   201,   202,   203,   206,   207,   210,   211,   214,
     220,   221,   224,   227,   232,   233,   236,   237,   240,   241,
     244,   245,   248,   249,   250,   253,   254,   257,   258,   259,
     262,   268,   269,   272,   273,   274,   275,   276,   277,   280,
     281,   284,   284,   284,   284,   284,   284,   287,   288,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   302,   303,
     306,   307,   310,   311,   314,   317,   318,   319,   324,   325,
     328,   329,   332,   333,   336,   337,   338,   339,   340,   341,
     344,   347,   348,   349,   350,   351,   352,   353,   354,   357,
     358,   361,   362,   363,   364,   367,   368,   371,   382,   385,
     388,   389,   390,   391,   394,   395,   396,   397,   398,   399,
     400,   401,   404,   405,   413,   416,   419,   420,   421,   425,
     426,   427,   428,   429,   430,   431,   432,   435,   438,   439,
     442,   443,   446,   449,   452,   462,   465,   468,   469,   470,
     471,   474,   475,   476,   479,   480,   483,   486,   487,   490,
     491,   494,   495,   498,   501,   502,   505,   506,   509,   510,
     511
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "exit_command", "INTEGER", "DECIMAL",
  "IDENTIFIER", "STRING", "CURRENT_DATE", "SELECT", "FROM", "WHERE",
  "DISTINCT", "ALL", "ASC", "DESC", "LIMIT", "HAVING", "GROUP_BY",
  "ORDER_BY", "AS", "BETWEEN", "LOW_PRIORITY", "HIGH_PRIORITY", "QUICK",
  "IGNORE", "DELETE", "UPDATE", "SET", "INSERT", "INTO", "DELAYED",
  "VALUE", "VALUES", "INNER", "CROSS", "STRAIGHT_JOIN", "ON", "JOIN",
  "NATURAL", "LEFT", "RIGHT", "OUTER", "USING", "OR", "AND", "XOR", "DIV",
  "MOD", "EQ", "LTE", "GTE", "SEMI", "COLON", "DOT", "COMMA", "ASTERISK",
  "RPAREN", "LPAREN", "RBRACK", "LBRACK", "PLUS", "MINUS", "NEGATION",
  "BITOR", "BITAND", "POWER_OP", "GT", "LT", "'!'", "'='", "'~'", "'^'",
  "$accept", "NOT", "sqlQuery", "sql_statement", "select_statement",
  "select_expression", "select_keyword", "select_list1", "from_clause1",
  "where_clause", "groupby_clause", "groupby_item_A", "groupby_item_C",
  "groupby_item_B", "groupby_item_B_C", "groupby_item_B_B",
  "having_clause", "orderby_clause", "orderby_item_A", "orderby_item_C",
  "orderby_item_B", "orderby_item_B1", "orderby_item_B_C",
  "orderby_item_B_B", "limit_clause", "offset", "row_count", "select_list",
  "mul_attributes", "withcomma_attribute", "displayed_column",
  "displayed_column2", "displayed_column1", "column_spec", "alias",
  "expression", "expr", "boolean_primary", "comparison_operator",
  "predicate", "bit_expr", "simple_expr", "variable", "variable_B",
  "variable_A", "literal", "table_references", "escaped_table_B",
  "escaped_table_A", "table_factor", "table_subquery", "join_table",
  "join_table_factor", "left_right_outer", "join_condition",
  "conditional_expr", "delete_statement", "delete_expression",
  "delete_keyword", "delete_list1", "table_name", "update_statement",
  "update_expression", "update_keyword", "update_list1", "set_clause",
  "assignment_list", "assignment_list_B", "assignment_list_A", "value",
  "col_name", "insert_statement", "insert_expression", "insert_keyword",
  "low_delay_keyword", "insert_list1", "column_name_list", "value_list",
  "value_list1", "value_list_B", "value_list_A", "column_list",
  "column_list_C", "column_list_B", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,    33,
      61,   126,    94
};
# endif

#define YYPACT_NINF -225

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-225)))

#define YYTABLE_NINF -78

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     108,   -41,   223,    90,   114,   133,    -1,    16,   -25,  -225,
    -225,    26,  -225,  -225,    30,  -225,  -225,    23,  -225,  -225,
      30,  -225,  -225,  -225,  -225,    61,    71,    73,    36,    14,
      14,    12,  -225,  -225,   177,  -225,    29,  -225,    49,  -225,
    -225,  -225,  -225,    69,    44,  -225,    56,  -225,  -225,  -225,
    -225,   138,  -225,  -225,  -225,    55,    46,    51,    75,    60,
    -225,   109,  -225,  -225,   106,  -225,    76,   131,  -225,   125,
     130,  -225,   112,  -225,  -225,  -225,   121,  -225,  -225,   127,
     182,  -225,   127,    15,  -225,  -225,  -225,  -225,   185,  -225,
    -225,   137,   139,   162,   162,    14,    14,   169,   166,   187,
      14,  -225,   203,  -225,   198,  -225,  -225,  -225,  -225,  -225,
    -225,  -225,   196,    96,  -225,  -225,  -225,    60,   125,    14,
     266,   265,   146,   256,  -225,    38,    33,  -225,    60,    60,
      60,  -225,  -225,  -225,  -225,  -225,  -225,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   267,    55,   146,
     256,  -225,  -225,  -225,  -225,   219,   227,   146,   256,  -225,
     217,   217,   271,  -225,  -225,  -225,  -225,  -225,  -225,   241,
     107,    14,   242,  -225,  -225,  -225,   177,    14,  -225,  -225,
    -225,    96,   210,   224,   228,  -225,  -225,  -225,  -225,   229,
     250,  -225,   231,   256,  -225,  -225,  -225,   106,  -225,  -225,
      76,   125,   125,   125,  -225,   158,   178,   178,   178,   178,
     178,   178,   178,   178,  -225,   121,  -225,   256,  -225,  -225,
     182,    60,   256,  -225,  -225,   226,  -225,  -225,   232,  -225,
    -225,  -225,  -225,   233,  -225,   235,   225,    55,    55,   236,
    -225,  -225,    14,   211,    55,   271,   220,   264,  -225,   282,
     265,  -225,  -225,   265,  -225,   180,  -225,  -225,   219,   125,
    -225,  -225,  -225,  -225,  -225,   238,  -225,   237,   217,   271,
     271,   234,  -225,  -225,  -225,   271,  -225,  -225,  -225,  -225,
     264,  -225,  -225,  -225,  -225,  -225,   229,  -225,   231,  -225,
    -225,   226,  -225,   232,  -225,   233,  -225,   235,  -225,   239,
    -225,  -225,   237,  -225
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    16,     0,     0,   187,     0,     0,     0,     9,
      14,     0,    10,   148,     0,    11,   164,     0,    12,   185,
       0,     6,    18,    17,   150,     0,     0,     0,   162,     0,
       0,     0,   166,   119,   118,   122,     0,   123,   124,   191,
     193,   189,   192,   188,     0,     1,     0,     7,     5,   115,
     116,   114,   117,    78,    65,     0,     0,     0,     0,     0,
      15,    19,    64,    67,    66,    71,    70,    75,    79,    81,
      88,    90,    98,   107,   109,   111,   110,   108,   149,   154,
       0,   165,   169,     0,   186,   151,   152,   153,     0,   167,
     168,     0,     0,     0,     0,     0,     0,     0,   141,   142,
       0,   131,     0,   127,     0,   128,   125,   126,   190,    13,
       8,   114,     0,     0,     2,     3,     4,     0,    87,     0,
       0,     0,    20,    21,    22,     0,     0,    76,     0,     0,
       0,    91,    94,    92,    93,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   155,
     156,   157,   184,   177,   179,   178,     0,   170,   171,   172,
       0,     0,     0,   194,   163,   130,   129,   132,   133,   134,
     139,     0,     0,   143,   144,   121,   120,     0,    80,    82,
      83,     0,    27,    63,     0,    61,    59,    47,    49,    48,
      52,    56,    55,    23,    24,    25,    69,    68,    74,    73,
      72,    84,    86,    85,    89,     0,   104,   105,   103,   101,
     102,    99,   100,   106,   113,   112,    35,   158,   159,   160,
       0,     0,   173,   174,   175,     0,   198,   200,   199,   197,
      45,   196,    38,    37,    42,    41,     0,     0,     0,     0,
     140,   137,     0,     0,     0,     0,    28,    29,    30,     0,
       0,    53,    54,     0,    26,     0,   161,   181,   180,   183,
     182,   176,   208,   209,   210,     0,   205,   204,     0,     0,
       0,     0,   147,   135,   145,     0,   138,   136,    46,    36,
      31,    32,    33,    63,    60,    51,    50,    58,    57,    97,
     203,     0,   202,   201,    40,    39,    44,    43,   195,     0,
      34,   207,   206,   146
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -225,   221,  -225,   284,   262,  -225,  -225,  -225,  -225,   -76,
      52,  -221,    28,    31,    32,    34,  -224,   -72,  -225,    53,
      57,  -225,    48,    58,   -70,  -225,    50,  -225,  -225,   181,
     183,   179,   184,  -225,    -9,   -55,   -54,  -225,  -225,  -133,
     117,  -225,  -225,   165,   167,  -225,   -16,   209,   -83,   -93,
    -225,  -225,   175,   216,    74,    77,  -225,  -225,  -225,  -225,
      72,  -225,  -225,  -225,  -225,  -225,  -225,    98,    99,  -225,
    -225,  -225,  -225,  -225,  -225,  -225,  -225,    45,   159,    54,
      59,  -225,    35,    37
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,     7,     8,     9,    10,    11,    60,   122,   149,
     247,   231,   232,   233,   234,   235,   248,   123,   187,   188,
     189,   190,   191,   192,   124,   184,   185,    61,    62,    63,
      64,    65,    66,    67,   105,    68,    69,    70,   137,    71,
      72,    73,    74,    75,    76,    77,    32,    33,    34,    35,
      36,    37,   101,   102,   240,   273,    12,    13,    14,    78,
      38,    15,    16,    17,    81,    82,   153,   154,   155,   260,
     156,    18,    19,    20,    43,    84,   236,   163,   226,   227,
     228,   265,   266,   267
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     112,   113,   169,   170,   204,   118,   157,   150,     2,   151,
     158,    21,   159,    89,    90,    92,    45,   176,    28,    46,
      28,     2,   281,   282,   279,     3,     4,    48,     5,   107,
      49,    50,    51,    52,    53,   103,    28,    49,    50,    51,
      52,    53,    49,    50,    51,    52,    53,   160,   161,   104,
     193,    80,   194,   195,   299,   106,   300,     6,   127,    49,
      50,   111,    52,   181,    49,    50,   111,    52,    47,   104,
      31,    85,    31,   162,   201,   202,   203,   217,   241,   218,
     219,    86,    54,    87,    55,   222,    79,   223,   224,   198,
      88,    55,    83,   216,   243,    56,    55,    57,    58,   108,
      24,   109,    56,   182,    57,    58,   246,    56,   110,    57,
      58,     1,    25,    55,    26,    27,   114,     2,   117,   119,
      28,   115,   289,   254,    56,   120,    57,    58,   121,    56,
     126,    57,    58,   138,     3,     4,    29,     5,   148,    30,
     128,   129,   130,   120,   238,   116,   121,   256,   -77,   276,
     239,   104,   261,   180,   -77,    39,    40,   -77,   -77,   139,
     140,   125,   120,    41,    42,   121,     6,   259,   141,   128,
     129,   130,    31,   142,   143,   147,   144,   145,   146,   131,
     132,   133,   272,   272,    49,    50,   111,    52,   152,   278,
     -77,   164,   -77,   -77,   165,   -77,   166,   134,   135,    56,
      96,    57,    58,   255,   178,   139,   140,   171,   173,    98,
      99,    93,    94,    95,   141,    96,    97,    98,    99,   142,
     143,   148,   144,   145,   146,   139,   140,   244,   245,   174,
     262,   263,   100,   264,   141,    22,    23,   244,   245,   142,
     143,   177,   144,   145,   146,    93,    94,    95,   238,    96,
      97,    98,    99,   179,   239,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   251,   252,   160,   161,   167,   168,
     183,   186,   120,   111,   220,   225,   221,   230,   237,   -62,
     242,   244,   271,   249,   250,   253,   283,   268,   269,   270,
      44,   136,   291,    91,   275,   290,   303,   294,   280,   284,
     295,   287,   296,   285,   297,   199,   196,   286,   197,   175,
     200,   288,   214,   172,   215,   274,   298,   277,   257,   258,
     229,     0,   292,     0,     0,     0,   301,   293,   302
};

static const yytype_int16 yycheck[] =
{
      55,    55,    95,    96,   137,    59,    82,    79,     9,    79,
      82,    52,    82,    29,    30,    31,     0,   100,     6,     3,
       6,     9,   246,   247,   245,    26,    27,    52,    29,    38,
       4,     5,     6,     7,     8,     6,     6,     4,     5,     6,
       7,     8,     4,     5,     6,     7,     8,    32,    33,    20,
     122,    28,   122,   123,   275,     6,   280,    58,    67,     4,
       5,     6,     7,   117,     4,     5,     6,     7,    52,    20,
      58,    10,    58,    58,   128,   129,   130,   149,   171,   149,
     150,    10,    56,    10,    58,   157,    14,   157,   158,    56,
      54,    58,    20,   148,   177,    69,    58,    71,    72,    30,
      10,    57,    69,   119,    71,    72,   182,    69,    52,    71,
      72,     3,    22,    58,    24,    25,    70,     9,    58,    10,
       6,    70,   255,   193,    69,    16,    71,    72,    19,    69,
      54,    71,    72,    21,    26,    27,    22,    29,    11,    25,
      44,    45,    46,    16,    37,    70,    19,   217,    10,   242,
      43,    20,   222,    57,    16,    22,    23,    19,    20,    47,
      48,    55,    16,    30,    31,    19,    58,   221,    56,    44,
      45,    46,    58,    61,    62,    54,    64,    65,    66,    49,
      50,    51,   237,   238,     4,     5,     6,     7,     6,   244,
      52,     6,    54,    55,    57,    57,    57,    67,    68,    69,
      38,    71,    72,    45,     6,    47,    48,    38,    42,    40,
      41,    34,    35,    36,    56,    38,    39,    40,    41,    61,
      62,    11,    64,    65,    66,    47,    48,    17,    18,    42,
       4,     5,    55,     7,    56,    12,    13,    17,    18,    61,
      62,    38,    64,    65,    66,    34,    35,    36,    37,    38,
      39,    40,    41,    57,    43,   138,   139,   140,   141,   142,
     143,   144,   145,   146,    14,    15,    32,    33,    93,    94,
       4,     6,    16,     6,    55,    58,    49,     6,    37,    55,
      38,    17,    57,    55,    55,    54,     4,    55,    55,    54,
       6,    70,    55,    31,    58,    57,    57,   269,   246,   249,
     269,   253,   270,   250,   270,   126,   125,   250,   125,   100,
     126,   253,   147,    97,   147,   238,   271,   243,   220,   220,
     161,    -1,   268,    -1,    -1,    -1,   291,   268,   291
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     9,    26,    27,    29,    58,    75,    76,    77,
      78,    79,   129,   130,   131,   134,   135,   136,   144,   145,
     146,    52,    12,    13,    10,    22,    24,    25,     6,    22,
      25,    58,   119,   120,   121,   122,   123,   124,   133,    22,
      23,    30,    31,   147,    76,     0,     3,    52,    52,     4,
       5,     6,     7,     8,    56,    58,    69,    71,    72,    74,
      80,   100,   101,   102,   103,   104,   105,   106,   108,   109,
     110,   112,   113,   114,   115,   116,   117,   118,   132,   133,
      28,   137,   138,   133,   148,    10,    10,    10,    54,   119,
     119,    77,   119,    34,    35,    36,    38,    39,    40,    41,
      55,   125,   126,     6,    20,   107,     6,   107,    30,    57,
      52,     6,   108,   109,    70,    70,    70,    58,   109,    10,
      16,    19,    81,    90,    97,    55,    54,   107,    44,    45,
      46,    49,    50,    51,    67,    68,    74,   111,    21,    47,
      48,    56,    61,    62,    64,    65,    66,    54,    11,    82,
      90,    97,     6,   139,   140,   141,   143,    82,    90,    97,
      32,    33,    58,   150,     6,    57,    57,   125,   125,   122,
     122,    38,   126,    42,    42,   120,   121,    38,     6,    57,
      57,   109,   119,     4,    98,    99,     6,    91,    92,    93,
      94,    95,    96,    90,    97,    97,   102,   103,    56,   104,
     105,   109,   109,   109,   112,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   116,   117,   108,    90,    97,    97,
      55,    49,    90,    97,    97,    58,   151,   152,   153,   151,
       6,    84,    85,    86,    87,    88,   149,    37,    37,    43,
     127,   122,    38,   121,    17,    18,    82,    83,    89,    55,
      55,    14,    15,    54,    97,    45,    97,   140,   141,   109,
     142,    97,     4,     5,     7,   154,   155,   156,    55,    55,
      54,    57,   108,   128,   128,    58,   122,   127,   108,    84,
      83,    89,    89,     4,    99,    92,    93,    95,    96,   112,
      57,    55,   152,   153,    85,    86,    87,    88,   150,    84,
      89,   155,   156,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    74,    75,    75,    75,    75,    76,
      76,    76,    76,    76,    77,    78,    79,    79,    79,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    81,    81,
      81,    81,    81,    81,    81,    82,    83,    84,    84,    85,
      85,    86,    86,    87,    87,    88,    89,    90,    91,    91,
      92,    92,    93,    93,    93,    94,    94,    95,    95,    96,
      97,    97,    98,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   104,   105,   105,   106,   106,   106,
     107,   108,   108,   109,   109,   109,   109,   109,   109,   110,
     110,   111,   111,   111,   111,   111,   111,   112,   112,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   114,   114,
     115,   115,   116,   116,   117,   118,   118,   118,   119,   119,
     120,   120,   121,   121,   122,   122,   122,   122,   122,   122,
     123,   124,   124,   124,   124,   124,   124,   124,   124,   125,
     125,   126,   126,   126,   126,   127,   127,   128,   129,   130,
     131,   131,   131,   131,   132,   132,   132,   132,   132,   132,
     132,   132,   133,   133,   134,   135,   136,   136,   136,   137,
     137,   137,   137,   137,   137,   137,   137,   138,   139,   139,
     140,   140,   141,   142,   143,   144,   145,   146,   146,   146,
     146,   147,   147,   147,   148,   148,   149,   150,   150,   151,
     151,   152,   152,   153,   154,   154,   155,   155,   156,   156,
     156
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     3,     1,
       1,     1,     1,     3,     1,     2,     1,     2,     2,     1,
       2,     2,     2,     3,     3,     3,     4,     2,     3,     3,
       3,     4,     4,     4,     5,     2,     2,     1,     1,     1,
       3,     1,     1,     1,     3,     1,     2,     2,     1,     1,
       1,     3,     1,     2,     2,     1,     1,     1,     3,     1,
       4,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     3,     1,     2,     1,     1,     1,
       2,     1,     3,     3,     3,     3,     3,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     5,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     2,     2,     2,     2,     3,
       3,     2,     3,     3,     3,     5,     5,     4,     5,     2,
       3,     1,     1,     2,     2,     2,     4,     1,     1,     2,
       2,     3,     3,     3,     1,     2,     2,     2,     3,     3,
       3,     4,     1,     3,     1,     2,     2,     3,     3,     1,
       2,     2,     2,     3,     3,     3,     4,     2,     1,     1,
       1,     3,     3,     1,     1,     1,     2,     1,     2,     2,
       3,     1,     1,     1,     2,     5,     1,     2,     2,     1,
       1,     1,     3,     3,     1,     1,     1,     3,     1,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:
#line 101 "sqlParser.y" /* yacc.c:1646  */
    { successMessage();}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 102 "sqlParser.y" /* yacc.c:1646  */
    {exit(EXIT_SUCCESS);}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 103 "sqlParser.y" /* yacc.c:1646  */
    {;}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 104 "sqlParser.y" /* yacc.c:1646  */
    {exit(EXIT_SUCCESS);}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1628 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 518 "sqlParser.y" /* yacc.c:1906  */



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
