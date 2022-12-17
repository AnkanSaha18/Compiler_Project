/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     CHAR = 259,
     VOID = 260,
     DOUBLE = 261,
     DOUBLE_VALUE = 262,
     INTEGER_VALUE = 263,
     CHAR_VALUE = 264,
     VARIABLE_NAME = 265,
     ASSIGN = 266,
     BINARY_AND = 267,
     BINARY_OR = 268,
     MINUS = 269,
     PLUS = 270,
     MOD = 271,
     DIVISION = 272,
     MULTIPLE = 273,
     POW = 274,
     EQUAL = 275,
     NOT_EQUAL = 276,
     GREATER_THAN = 277,
     LESS_THAN = 278,
     GREATER_THAN_AND_EQUAL = 279,
     LESS_THAN_AND_EQUAL = 280,
     AND = 281,
     OR = 282,
     INC_ONE = 283,
     DEC_ONE = 284,
     TRUE = 285,
     FALSE = 286,
     COMMA = 287,
     COLON = 288,
     SEMICOLON = 289,
     THIRD_BRACKET_CLOSE = 290,
     THIRD_BRACKET_OPEN = 291,
     SECOND_BRACKET_CLOSE = 292,
     SECOND_BRACKET_OPEN = 293,
     FIRST_BRACKET_CLOSE = 294,
     FIRST_BRACKET_OPEN = 295,
     IF = 296,
     ELSE_IF = 297,
     ELSE = 298,
     SWITCH = 299,
     CASE = 300,
     DEFAULT = 301,
     FOR = 302,
     WHILE = 303,
     CONTINUE = 304,
     BREAK = 305,
     PRINTF = 306,
     SCANF = 307,
     SIZE_OF = 308,
     RETURN = 309,
     OUTPUTTEXT = 310,
     LIBRARY = 311,
     LCM = 312,
     GCD = 313,
     MAX = 314,
     MIN = 315
   };
#endif
/* Tokens.  */
#define INT 258
#define CHAR 259
#define VOID 260
#define DOUBLE 261
#define DOUBLE_VALUE 262
#define INTEGER_VALUE 263
#define CHAR_VALUE 264
#define VARIABLE_NAME 265
#define ASSIGN 266
#define BINARY_AND 267
#define BINARY_OR 268
#define MINUS 269
#define PLUS 270
#define MOD 271
#define DIVISION 272
#define MULTIPLE 273
#define POW 274
#define EQUAL 275
#define NOT_EQUAL 276
#define GREATER_THAN 277
#define LESS_THAN 278
#define GREATER_THAN_AND_EQUAL 279
#define LESS_THAN_AND_EQUAL 280
#define AND 281
#define OR 282
#define INC_ONE 283
#define DEC_ONE 284
#define TRUE 285
#define FALSE 286
#define COMMA 287
#define COLON 288
#define SEMICOLON 289
#define THIRD_BRACKET_CLOSE 290
#define THIRD_BRACKET_OPEN 291
#define SECOND_BRACKET_CLOSE 292
#define SECOND_BRACKET_OPEN 293
#define FIRST_BRACKET_CLOSE 294
#define FIRST_BRACKET_OPEN 295
#define IF 296
#define ELSE_IF 297
#define ELSE 298
#define SWITCH 299
#define CASE 300
#define DEFAULT 301
#define FOR 302
#define WHILE 303
#define CONTINUE 304
#define BREAK 305
#define PRINTF 306
#define SCANF 307
#define SIZE_OF 308
#define RETURN 309
#define OUTPUTTEXT 310
#define LIBRARY 311
#define LCM 312
#define GCD 313
#define MAX 314
#define MIN 315




/* Copy the first part of user declarations.  */
#line 1 "project.y"

    #include<stdio.h>
    #include<string.h>
    #include<math.h>
    void yyerror(char *s);
    extern int yylex();
    extern int yyparse();

    struct symbol_table_structure{
        char *name;
        char *data_type;
        int int_value;
        double double_value;
        char char_value;
    };
    struct symbol_table_structure symbol_table[1000];
    int symbol_table_index = 0;
    int switch_value = 0;
    int switch_check = 0;


    int find_symbol_table_index(char *var)
    {
        for (int i = 0; i < symbol_table_index; i++) {
            if (strcmp(symbol_table[i].name, var) == 0) return i;
        }
        return symbol_table_index;
    }

    void assignment(char *name, char *type, int int_value, double double_value, char char_value)
    {
        int i = find_symbol_table_index(name);
        symbol_table[i].name = name;
        symbol_table[i].data_type = type;
        symbol_table[i].int_value = int_value;
        symbol_table[i].double_value = double_value;
        symbol_table[i].char_value = char_value;
        if (i == symbol_table_index) 
        {
            symbol_table_index++;
        }
        // printf("%s %d value is: %d\t",type, i, symbol_table[i].int_value);
    }

    int gcd(int x, int y)
    {
        if (y == 0)
        {
            return x;
        }
        else 
        {
            return gcd(y, x % y);
        }
    }
    int min(int a, int b)
    {
        return (a>b)?b:a;
    }
    int max(int a, int b)
    {
        return (a>b)?a:b;
    }



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 68 "project.y"
{
    char text[1000];
    struct datatype {
        char* name;
        char* data_type;
        int int_value;
        double double_value;
        char char_value;
    }union_variable;
}
/* Line 193 of yacc.c.  */
#line 293 "project.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 306 "project.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   618

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNRULES -- Number of states.  */
#define YYNSTATES  177

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    50,    54,    56,    57,    60,    65,    69,    72,
      74,    76,    78,    80,    84,    86,    90,    95,   100,   102,
     104,   106,   108,   112,   116,   120,   124,   128,   132,   136,
     140,   144,   148,   152,   156,   160,   164,   168,   172,   176,
     181,   186,   191,   198,   209,   216,   226,   229,   232,   237,
     239,   247,   255,   261,   268,   275,   282
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    -1,    62,    63,    -1,    69,    -1,    71,
      -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,    78,
      -1,    64,    -1,    65,    -1,    68,    -1,    80,    -1,    81,
      -1,    84,    -1,    85,    -1,    86,    -1,    87,    -1,    56,
      -1,    70,    10,    40,    66,    39,    38,    63,    79,    -1,
      66,    32,    67,    -1,    67,    -1,    -1,    70,    72,    -1,
      10,    40,    71,    39,    -1,    10,    40,    39,    -1,    70,
      71,    -1,     3,    -1,     6,    -1,     4,    -1,     5,    -1,
      71,    32,    72,    -1,    72,    -1,    10,    11,    73,    -1,
      28,    40,    10,    39,    -1,    29,    40,    10,    39,    -1,
       8,    -1,     7,    -1,     9,    -1,    10,    -1,    73,    26,
      73,    -1,    73,    27,    73,    -1,    73,    23,    73,    -1,
      73,    22,    73,    -1,    73,    25,    73,    -1,    73,    24,
      73,    -1,    73,    20,    73,    -1,    73,    21,    73,    -1,
      73,    15,    73,    -1,    73,    14,    73,    -1,    73,    12,
      73,    -1,    73,    13,    73,    -1,    73,    18,    73,    -1,
      73,    17,    73,    -1,    73,    16,    73,    -1,    73,    19,
      73,    -1,    40,    73,    39,    -1,    51,    40,    73,    39,
      -1,    51,    40,    55,    39,    -1,    52,    40,    10,    39,
      -1,    48,    40,    73,    39,    38,    79,    -1,    47,    40,
      72,    34,    73,    34,    72,    39,    38,    79,    -1,    41,
      40,    73,    39,    38,    79,    -1,    41,    40,    73,    39,
      38,    79,    43,    38,    79,    -1,    63,    79,    -1,    63,
      37,    -1,    44,    40,    73,    39,    -1,    82,    -1,    45,
      73,    33,    38,    63,    37,    82,    -1,    45,    73,    33,
      38,    63,    37,    83,    -1,    46,    33,    38,    63,    37,
      -1,    58,    40,    73,    32,    73,    39,    -1,    57,    40,
      73,    32,    73,    39,    -1,    60,    40,    73,    32,    73,
      39,    -1,    59,    40,    73,    32,    73,    39,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   103,   103,   104,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     127,   132,   138,   139,   142,   143,   147,   148,   155,   159,
     160,   161,   162,   166,   167,   171,   172,   178,   187,   188,
     189,   190,   200,   207,   214,   221,   228,   235,   242,   249,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   270,
     278,   282,   302,   308,   314,   320,   332,   333,   337,   345,
     355,   362,   371,   375,   378,   381,   384
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "CHAR", "VOID", "DOUBLE",
  "DOUBLE_VALUE", "INTEGER_VALUE", "CHAR_VALUE", "VARIABLE_NAME", "ASSIGN",
  "BINARY_AND", "BINARY_OR", "MINUS", "PLUS", "MOD", "DIVISION",
  "MULTIPLE", "POW", "EQUAL", "NOT_EQUAL", "GREATER_THAN", "LESS_THAN",
  "GREATER_THAN_AND_EQUAL", "LESS_THAN_AND_EQUAL", "AND", "OR", "INC_ONE",
  "DEC_ONE", "TRUE", "FALSE", "COMMA", "COLON", "SEMICOLON",
  "THIRD_BRACKET_CLOSE", "THIRD_BRACKET_OPEN", "SECOND_BRACKET_CLOSE",
  "SECOND_BRACKET_OPEN", "FIRST_BRACKET_CLOSE", "FIRST_BRACKET_OPEN", "IF",
  "ELSE_IF", "ELSE", "SWITCH", "CASE", "DEFAULT", "FOR", "WHILE",
  "CONTINUE", "BREAK", "PRINTF", "SCANF", "SIZE_OF", "RETURN",
  "OUTPUTTEXT", "LIBRARY", "LCM", "GCD", "MAX", "MIN", "$accept",
  "program", "statement", "library", "function", "params",
  "declaration_for_function", "function_call", "declaration", "TYPE",
  "expressions", "expression", "assign_value", "print", "scan", "while",
  "for", "if", "block", "switch", "case", "cases", "default_function",
  "gcd", "lcm", "min", "max", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      64,    65,    66,    66,    67,    67,    68,    68,    69,    70,
      70,    70,    70,    71,    71,    72,    72,    72,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    74,
      74,    75,    76,    77,    78,    78,    79,    79,    80,    81,
      82,    82,    83,    84,    85,    86,    87
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     8,     3,     1,     0,     2,     4,     3,     2,     1,
       1,     1,     1,     3,     1,     3,     4,     4,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     4,
       4,     4,     6,    10,     6,     9,     2,     2,     4,     1,
       7,     7,     5,     6,     6,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    29,    31,    32,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     3,    11,    12,    13,     4,     0,     5,    34,
       6,     7,     8,     9,    10,    14,    15,    69,    16,    17,
      18,    19,     0,     0,     0,     0,     0,     0,    39,    38,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,    35,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,    33,    26,    36,    37,     0,    68,    58,    52,    53,
      51,    50,    56,    55,    54,    57,    48,    49,    45,    44,
      47,    46,    42,    43,     0,     0,     0,    60,    59,    61,
       0,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,    25,     0,    64,
       0,     0,    62,    74,    73,    76,    75,    22,     0,    67,
      66,     0,     0,    70,    71,     0,     0,     0,     0,     0,
      21,    65,     0,     0,     0,    63,    72
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   148,    23,    24,   134,   135,    25,    26,    27,
      28,    29,    53,    30,    31,    32,    33,    34,   149,    35,
      36,    37,   164,    38,    39,    40,    41
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -93
static const yytype_int16 yypact[] =
{
     -93,    22,   -93,   -93,   -93,   -93,   -93,    -7,   -35,   -31,
     -26,   -10,    97,    -9,    28,    31,    32,   -93,    35,    44,
      46,    49,   -93,   -93,   -93,   -93,   -93,    48,    68,   -93,
     -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,   -93,
     -93,   -93,    97,   101,    78,    93,    97,    97,   -93,   -93,
     -93,   -93,    97,   473,    89,    97,    47,    98,    97,    97,
      97,    97,    12,    68,    89,   579,    99,   -93,   -29,    70,
      73,   198,   226,   254,    97,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
      75,    80,   282,    76,   310,    77,   495,   516,   537,   558,
      56,   -93,   -93,   -93,   -93,    83,   -93,   -93,   591,   591,
     591,   591,   207,   207,   207,   234,   579,   579,   579,   579,
     579,   579,   579,   579,   149,    97,    84,   -93,   -93,   -93,
      97,    97,    97,    97,   -15,   -93,    89,   149,    87,   450,
     149,   338,   366,   394,   422,    56,    88,   -93,    91,    82,
      19,    89,   -93,   -93,   -93,   -93,   -93,   -93,   149,   -93,
     -93,    95,    94,   -93,   -93,    92,   149,   149,    96,   103,
     -93,   -93,   149,   149,   107,   -93,   -93
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -93,   -93,    -1,   -93,   -93,   -93,     0,   -93,   -93,   -92,
     -14,   -53,   -40,   -93,   -93,   -93,   -93,   -93,    16,   -93,
     -93,    -4,   -93,   -93,   -93,   -93,   -93
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      22,    91,    65,    64,    42,    44,    71,    72,   136,    45,
     102,   101,    73,    63,    46,    92,    94,   145,    96,    97,
      98,    99,     2,    42,   146,     3,     4,     5,     6,    68,
      47,    54,     7,    43,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
       8,     9,   100,   136,    48,    49,    50,    51,    62,     3,
       4,     5,     6,    10,    12,   162,    11,    12,    55,    13,
      14,    56,    57,    15,    16,    58,     8,     9,    17,    18,
      19,    20,    21,   147,    59,   139,    60,    52,    69,    61,
     141,   142,   143,   144,     3,     4,     5,     6,   165,    66,
      64,     7,    93,    70,    48,    49,    50,    51,    95,   103,
      42,    66,   104,   124,   125,   127,   129,     8,     9,     8,
       9,   137,   140,   138,   150,   161,   158,   168,   159,     8,
       9,   169,    10,   167,   172,    11,    12,    52,    13,    14,
      67,   173,    15,    16,   176,   157,   163,    17,    18,    19,
      20,    21,     3,     4,     5,     6,   152,   166,     0,     7,
       0,     0,     0,     0,   160,     0,     0,     0,     0,     0,
       0,   174,     0,     0,     0,     0,     0,     8,     9,     0,
       0,     0,   170,   171,     0,     0,     0,     0,     0,   175,
      10,     0,     0,    11,    12,     0,    13,    14,     0,     0,
      15,    16,     0,     0,     0,    17,    18,    19,    20,    21,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    81,    82,    83,    84,
      85,    86,    87,    88,    89,     0,     0,   105,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    82,    83,    84,    85,    86,    87,
      88,    89,     0,     0,     0,   106,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   126,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   128,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   153,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   154,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   155,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   156,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,     0,     0,
       0,     0,     0,     0,   151,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,     0,     0,     0,     0,     0,    90,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,     0,     0,     0,     0,   130,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,     0,     0,     0,     0,   131,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,     0,     0,     0,     0,   132,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,     0,     0,     0,     0,
     133,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89
};

static const yytype_int16 yycheck[] =
{
       1,    54,    42,    32,    11,    40,    46,    47,   100,    40,
      39,    64,    52,    27,    40,    55,    56,    32,    58,    59,
      60,    61,     0,    11,    39,     3,     4,     5,     6,    43,
      40,    40,    10,    40,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      28,    29,    40,   145,     7,     8,     9,    10,    10,     3,
       4,     5,     6,    41,    45,    46,    44,    45,    40,    47,
      48,    40,    40,    51,    52,    40,    28,    29,    56,    57,
      58,    59,    60,   136,    40,   125,    40,    40,    10,    40,
     130,   131,   132,   133,     3,     4,     5,     6,   151,    10,
      32,    10,    55,    10,     7,     8,     9,    10,    10,    39,
      11,    10,    39,    38,    34,    39,    39,    28,    29,    28,
      29,    38,    38,   124,    37,    43,    38,    33,    37,    28,
      29,    39,    41,    38,    38,    44,    45,    40,    47,    48,
      39,    38,    51,    52,    37,   145,   150,    56,    57,    58,
      59,    60,     3,     4,     5,     6,   140,   158,    -1,    10,
      -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,   172,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,
      -1,    -1,   166,   167,    -1,    -1,    -1,    -1,    -1,   173,
      41,    -1,    -1,    44,    45,    -1,    47,    48,    -1,    -1,
      51,    52,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    -1,    -1,    39,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    39,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    33,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    -1,    32,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    32,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    32,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      32,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    62,     0,     3,     4,     5,     6,    10,    28,    29,
      41,    44,    45,    47,    48,    51,    52,    56,    57,    58,
      59,    60,    63,    64,    65,    68,    69,    70,    71,    72,
      74,    75,    76,    77,    78,    80,    81,    82,    84,    85,
      86,    87,    11,    40,    40,    40,    40,    40,     7,     8,
       9,    10,    40,    73,    40,    40,    40,    40,    40,    40,
      40,    40,    10,    71,    32,    73,    10,    39,    71,    10,
      10,    73,    73,    73,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      33,    72,    73,    55,    73,    10,    73,    73,    73,    73,
      40,    72,    39,    39,    39,    39,    39,    39,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    38,    34,    39,    39,    39,    39,
      32,    32,    32,    32,    66,    67,    70,    38,    63,    73,
      38,    73,    73,    73,    73,    32,    39,    72,    63,    79,
      37,    34,    79,    39,    39,    39,    39,    67,    38,    37,
      79,    43,    46,    82,    83,    72,    63,    38,    33,    39,
      79,    79,    38,    38,    63,    79,    37
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 20:
#line 127 "project.y"
    { printf("%s is included.\n", (yyvsp[(1) - (1)].union_variable).name);;}
    break;

  case 21:
#line 132 "project.y"
    {
                                                                                                                            printf("User defined function.\n");
                                                                                                                        ;}
    break;

  case 23:
#line 139 "project.y"
    {printf("Function declared\n");;}
    break;

  case 35:
#line 171 "project.y"
    {assignment((yyvsp[(1) - (3)].union_variable).name, (yyvsp[(3) - (3)].union_variable).data_type, (yyvsp[(3) - (3)].union_variable).int_value, (yyvsp[(3) - (3)].union_variable).double_value, (yyvsp[(3) - (3)].union_variable).char_value);;}
    break;

  case 36:
#line 172 "project.y"
    {
                                                                                int i = find_symbol_table_index((yyvsp[(3) - (4)].union_variable).name);
                                                                                if (i != symbol_table_index) {
                                                                                    symbol_table[i].int_value = symbol_table[i].int_value + 1;
                                                                                }
                                                                            ;}
    break;

  case 37:
#line 178 "project.y"
    {
                                                                                int i = find_symbol_table_index((yyvsp[(3) - (4)].union_variable).name);
                                                                                if (i != symbol_table_index) {
                                                                                    symbol_table[i].int_value = symbol_table[i].int_value - 1;
                                                                                }
                                                                            ;}
    break;

  case 38:
#line 187 "project.y"
    {(yyval.union_variable).data_type=(yyvsp[(1) - (1)].union_variable).data_type; (yyval.union_variable).int_value=(yyvsp[(1) - (1)].union_variable).int_value; (yyval.union_variable).double_value=(yyvsp[(1) - (1)].union_variable).double_value; (yyval.union_variable).char_value=(yyvsp[(1) - (1)].union_variable).char_value;;}
    break;

  case 39:
#line 188 "project.y"
    {(yyval.union_variable).data_type=(yyvsp[(1) - (1)].union_variable).data_type; (yyval.union_variable).int_value=(yyvsp[(1) - (1)].union_variable).int_value; (yyval.union_variable).double_value=(yyvsp[(1) - (1)].union_variable).double_value; (yyval.union_variable).char_value=(yyvsp[(1) - (1)].union_variable).char_value;;}
    break;

  case 40:
#line 189 "project.y"
    {(yyval.union_variable).data_type=(yyvsp[(1) - (1)].union_variable).data_type; (yyval.union_variable).int_value=(yyvsp[(1) - (1)].union_variable).int_value; (yyval.union_variable).double_value=(yyvsp[(1) - (1)].union_variable).double_value; (yyval.union_variable).char_value=(yyvsp[(1) - (1)].union_variable).char_value;;}
    break;

  case 41:
#line 190 "project.y"
    {
                                                    for (int i = 0; i < symbol_table_index; i++) 
                                                    {
                                                        if(strcmp((yyvsp[(1) - (1)].union_variable).name, symbol_table[i].name)==0)
                                                        {
                                                            (yyval.union_variable).int_value = symbol_table[i].int_value, (yyval.union_variable).double_value = symbol_table[i].double_value, (yyval.union_variable).data_type = symbol_table[i].data_type;
                                                            break;
                                                        }
                                                    }
                                                ;}
    break;

  case 42:
#line 200 "project.y"
    {
                                                    if (strcmp((yyvsp[(1) - (3)].union_variable).data_type, "int")==0) 
                                                    {
                                                        (yyval.union_variable).int_value = ((yyvsp[(1) - (3)].union_variable).int_value && (yyvsp[(3) - (3)].union_variable).int_value);
                                                        (yyval.union_variable).data_type = (yyvsp[(1) - (3)].union_variable).data_type;
                                                    }
                                                ;}
    break;

  case 43:
#line 207 "project.y"
    {
                                                    if (strcmp((yyvsp[(1) - (3)].union_variable).data_type, "int")==0) 
                                                    {
                                                        (yyval.union_variable).int_value = ((yyvsp[(1) - (3)].union_variable).int_value || (yyvsp[(3) - (3)].union_variable).int_value);
                                                        (yyval.union_variable).data_type = (yyvsp[(1) - (3)].union_variable).data_type;
                                                    }
                                                ;}
    break;

  case 44:
#line 214 "project.y"
    {
                                                    if (strcmp((yyvsp[(1) - (3)].union_variable).data_type, "int")==0) 
                                                    {
                                                        (yyval.union_variable).int_value = ((yyvsp[(1) - (3)].union_variable).int_value < (yyvsp[(3) - (3)].union_variable).int_value);
                                                        (yyval.union_variable).data_type = (yyvsp[(1) - (3)].union_variable).data_type;
                                                    }
                                                ;}
    break;

  case 45:
#line 221 "project.y"
    {
                                                            if (strcmp((yyvsp[(1) - (3)].union_variable).data_type, "int")==0) 
                                                            {
                                                                (yyval.union_variable).int_value = ((yyvsp[(1) - (3)].union_variable).int_value > (yyvsp[(3) - (3)].union_variable).int_value);
                                                                (yyval.union_variable).data_type = (yyvsp[(1) - (3)].union_variable).data_type;
                                                            }
                                                        ;}
    break;

  case 46:
#line 228 "project.y"
    {
                                                                    if (strcmp((yyvsp[(1) - (3)].union_variable).data_type, "int")==0) 
                                                                    {
                                                                        (yyval.union_variable).int_value = ((yyvsp[(1) - (3)].union_variable).int_value <= (yyvsp[(3) - (3)].union_variable).int_value);
                                                                        (yyval.union_variable).data_type = (yyvsp[(1) - (3)].union_variable).data_type;
                                                                    }
                                                                ;}
    break;

  case 47:
#line 235 "project.y"
    {
                                                                    if (strcmp((yyvsp[(1) - (3)].union_variable).data_type, "int")==0) 
                                                                    {
                                                                        (yyval.union_variable).int_value = ((yyvsp[(1) - (3)].union_variable).int_value >= (yyvsp[(3) - (3)].union_variable).int_value);
                                                                        (yyval.union_variable).data_type = (yyvsp[(1) - (3)].union_variable).data_type;
                                                                    }
                                                                ;}
    break;

  case 48:
#line 242 "project.y"
    {
                                                                    if (strcmp((yyvsp[(1) - (3)].union_variable).data_type, "int")==0) 
                                                                    {
                                                                        (yyval.union_variable).int_value = ((yyvsp[(1) - (3)].union_variable).int_value == (yyvsp[(3) - (3)].union_variable).int_value);
                                                                        (yyval.union_variable).data_type = (yyvsp[(1) - (3)].union_variable).data_type;
                                                                    }
                                                                ;}
    break;

  case 49:
#line 249 "project.y"
    {
                                                                    if (strcmp((yyvsp[(1) - (3)].union_variable).data_type, "int")==0) 
                                                                    {
                                                                        (yyval.union_variable).int_value = ((yyvsp[(1) - (3)].union_variable).int_value != (yyvsp[(3) - (3)].union_variable).int_value);
                                                                        (yyval.union_variable).data_type = (yyvsp[(1) - (3)].union_variable).data_type;
                                                                    }
                                                                ;}
    break;

  case 50:
#line 257 "project.y"
    { (yyval.union_variable).data_type = (yyvsp[(1) - (3)].union_variable).data_type,  (yyval.union_variable).int_value = (yyvsp[(1) - (3)].union_variable).int_value + (yyvsp[(3) - (3)].union_variable).int_value, (yyval.union_variable).double_value = (yyvsp[(1) - (3)].union_variable).double_value + (yyvsp[(3) - (3)].union_variable).double_value, (yyval.union_variable).char_value = (yyvsp[(1) - (3)].union_variable).char_value + (yyvsp[(1) - (3)].union_variable).char_value;;}
    break;

  case 51:
#line 258 "project.y"
    { (yyval.union_variable).data_type = (yyvsp[(1) - (3)].union_variable).data_type,  (yyval.union_variable).int_value = (yyvsp[(1) - (3)].union_variable).int_value - (yyvsp[(3) - (3)].union_variable).int_value, (yyval.union_variable).double_value = (yyvsp[(1) - (3)].union_variable).double_value - (yyvsp[(3) - (3)].union_variable).double_value, (yyval.union_variable).char_value = (yyvsp[(1) - (3)].union_variable).char_value - (yyvsp[(1) - (3)].union_variable).char_value;;}
    break;

  case 52:
#line 259 "project.y"
    { (yyval.union_variable).data_type = (yyvsp[(1) - (3)].union_variable).data_type,  (yyval.union_variable).int_value = (yyvsp[(1) - (3)].union_variable).int_value & (yyvsp[(3) - (3)].union_variable).int_value;;}
    break;

  case 53:
#line 260 "project.y"
    { (yyval.union_variable).data_type = (yyvsp[(1) - (3)].union_variable).data_type,  (yyval.union_variable).int_value = (yyvsp[(1) - (3)].union_variable).int_value | (yyvsp[(3) - (3)].union_variable).int_value;;}
    break;

  case 54:
#line 261 "project.y"
    { (yyval.union_variable).data_type = (yyvsp[(1) - (3)].union_variable).data_type,  (yyval.union_variable).int_value = (yyvsp[(1) - (3)].union_variable).int_value * (yyvsp[(3) - (3)].union_variable).int_value, (yyval.union_variable).double_value = (yyvsp[(1) - (3)].union_variable).double_value * (yyvsp[(3) - (3)].union_variable).double_value, (yyval.union_variable).char_value = (yyvsp[(1) - (3)].union_variable).char_value * (yyvsp[(1) - (3)].union_variable).char_value;;}
    break;

  case 55:
#line 262 "project.y"
    { (yyval.union_variable).data_type = (yyvsp[(1) - (3)].union_variable).data_type,  (yyval.union_variable).int_value = (yyvsp[(1) - (3)].union_variable).int_value / (yyvsp[(3) - (3)].union_variable).int_value, (yyval.union_variable).double_value = (yyvsp[(1) - (3)].union_variable).double_value / (yyvsp[(3) - (3)].union_variable).double_value, (yyval.union_variable).char_value = (yyvsp[(1) - (3)].union_variable).char_value / (yyvsp[(1) - (3)].union_variable).char_value;;}
    break;

  case 56:
#line 263 "project.y"
    { (yyval.union_variable).data_type = (yyvsp[(1) - (3)].union_variable).data_type,  (yyval.union_variable).int_value = (yyvsp[(1) - (3)].union_variable).int_value % (yyvsp[(3) - (3)].union_variable).int_value;;}
    break;

  case 57:
#line 264 "project.y"
    { (yyval.union_variable).data_type = (yyvsp[(1) - (3)].union_variable).data_type,  (yyval.union_variable).int_value = pow((yyvsp[(1) - (3)].union_variable).int_value, (yyvsp[(3) - (3)].union_variable).int_value), (yyval.union_variable).double_value = pow((yyvsp[(1) - (3)].union_variable).double_value, (yyvsp[(3) - (3)].union_variable).double_value), (yyval.union_variable).char_value = pow((yyvsp[(1) - (3)].union_variable).char_value, (yyvsp[(1) - (3)].union_variable).char_value);;}
    break;

  case 59:
#line 270 "project.y"
    {
                                                                        if (strcmp((yyvsp[(3) - (4)].union_variable).data_type, "int") == 0)
                                                                            printf("%d\n", (yyvsp[(3) - (4)].union_variable).int_value);
                                                                        else if (strcmp((yyvsp[(3) - (4)].union_variable).data_type, "double") == 0)
                                                                            printf("%lf\n", (yyvsp[(3) - (4)].union_variable).double_value);
                                                                        else if(strcmp((yyvsp[(3) - (4)].union_variable).data_type, "char") == 0)
                                                                            printf("%c\n", (yyvsp[(3) - (4)].union_variable).char_value);
                                                                    ;}
    break;

  case 60:
#line 278 "project.y"
    { printf("%s\n", (yyvsp[(3) - (4)].union_variable).name);;}
    break;

  case 61:
#line 282 "project.y"
    {
                                                                    int i = find_symbol_table_index((yyvsp[(3) - (4)].union_variable).name);
                                                                    if (i != symbol_table_index) {
                                                                        printf("Enter value for %s := ", symbol_table[i].name);
                                                                        if (strcmp(symbol_table[i].data_type, "int") == 0) {
                                                                            scanf("%d", &symbol_table[i].int_value);
                                                                        }
                                                                        else if (strcmp(symbol_table[i].data_type, "double") == 0) {
                                                                            scanf("%lf", &symbol_table[i].double_value);
                                                                        }
                                                                        else if (strcmp(symbol_table[i].data_type, "char") == 0){
                                                                            scanf("%c", &symbol_table[i].char_value);
                                                                        }
                                                                    }
                                                                    else {
                                                                        printf("Variable not declared\n");
                                                                    }
                                                                ;}
    break;

  case 62:
#line 302 "project.y"
    {
                                                                                                                            if((yyvsp[(3) - (6)].union_variable).int_value)
                                                                                                                            {
                                                                                                                                printf("while loop is running");
                                                                                                                            }
                                                                                                                        ;}
    break;

  case 63:
#line 308 "project.y"
    {
                                                                                                                                                                if((yyvsp[(5) - (10)].union_variable).int_value)
                                                                                                                                                                {
                                                                                                                                                                    printf("for loop running");
                                                                                                                                                                }
                                                                                                                                                            ;}
    break;

  case 64:
#line 314 "project.y"
    {
                                                                                                                    if((yyvsp[(3) - (6)].union_variable).int_value)
                                                                                                                    {
                                                                                                                        printf("If statement will be executed.\n");
                                                                                                                    }
                                                                                                                ;}
    break;

  case 65:
#line 320 "project.y"
    {
                                                                                                                                                                            if((yyvsp[(3) - (9)].union_variable).int_value)
                                                                                                                                                                            {
                                                                                                                                                                                printf("If statement will be executed.\n");
                                                                                                                                                                            }
                                                                                                                                                                            else
                                                                                                                                                                            {
                                                                                                                                                                                printf("Else statement will be executed.\n");
                                                                                                                                                                            }
                                                                                                                                                                        ;}
    break;

  case 67:
#line 333 "project.y"
    {(yyval.union_variable).int_value=(yyvsp[(1) - (2)].union_variable).int_value;;}
    break;

  case 68:
#line 337 "project.y"
    {
        switch_value = (yyvsp[(3) - (4)].union_variable).int_value;
        switch_check = 0;
        printf("Switch statement check\n");
    ;}
    break;

  case 69:
#line 346 "project.y"
    {
        if(switch_check == 0)
        {
            printf("default\n");
        }
    ;}
    break;

  case 70:
#line 355 "project.y"
    {
                                                                                            if(switch_value==(yyvsp[(2) - (7)].union_variable).int_value)
                                                                                            {
                                                                                                printf("%d\n",(yyvsp[(2) - (7)].union_variable).int_value);
                                                                                                switch_check = 1;
                                                                                            }
                                                                                        ;}
    break;

  case 71:
#line 362 "project.y"
    {
                                                                                                            if(switch_value==(yyvsp[(2) - (7)].union_variable).int_value)
                                                                                                            {
                                                                                                                printf("%d\n",(yyvsp[(2) - (7)].union_variable).int_value);
                                                                                                                switch_check = 1;
                                                                                                            }
                                                                                                        ;}
    break;

  case 72:
#line 371 "project.y"
    {;}
    break;

  case 73:
#line 375 "project.y"
    {
                                                                                        printf("%d %d GCD is %d\n",(yyvsp[(3) - (6)].union_variable).int_value, (yyvsp[(5) - (6)].union_variable).int_value, gcd((yyvsp[(3) - (6)].union_variable).int_value, (yyvsp[(5) - (6)].union_variable).int_value));
                                                                                    ;}
    break;

  case 74:
#line 378 "project.y"
    {
                                                                                        printf("%d %d LCM is %d\n",(yyvsp[(3) - (6)].union_variable).int_value, (yyvsp[(5) - (6)].union_variable).int_value, (yyvsp[(3) - (6)].union_variable).int_value * (yyvsp[(5) - (6)].union_variable).int_value / gcd((yyvsp[(3) - (6)].union_variable).int_value, (yyvsp[(5) - (6)].union_variable).int_value));
                                                                                    ;}
    break;

  case 75:
#line 381 "project.y"
    {
                                                                                        printf("%d %d Min is %d\n",(yyvsp[(3) - (6)].union_variable).int_value, (yyvsp[(5) - (6)].union_variable).int_value, min((yyvsp[(3) - (6)].union_variable).int_value, (yyvsp[(5) - (6)].union_variable).int_value));
                                                                                    ;}
    break;

  case 76:
#line 384 "project.y"
    {
                                                                                        printf("%d %d Max is %d\n",(yyvsp[(3) - (6)].union_variable).int_value, (yyvsp[(5) - (6)].union_variable).int_value, max((yyvsp[(3) - (6)].union_variable).int_value, (yyvsp[(5) - (6)].union_variable).int_value));
                                                                                    ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2105 "project.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 389 "project.y"











void yyerror(char *s) 
{
    fprintf(stderr, "%s\n", s);
}


int main(void) 
{
    yyparse();
}

