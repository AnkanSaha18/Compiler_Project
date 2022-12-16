/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
     PLUS = 267,
     MINUS = 268,
     MULTIPLE = 269,
     DIVISION = 270,
     MOD = 271,
     BINARY_OR = 272,
     BINARY_AND = 273,
     POW = 274,
     EQUAL = 275,
     NOT_EQUAL = 276,
     GREATER_THAN = 277,
     LESS_THAN = 278,
     GREATER_THAN_AND_EQUAL = 279,
     LESS_THAN_AND_EQUAL = 280,
     INC_ONE = 281,
     DEC_ONE = 282,
     AND = 283,
     OR = 284,
     NOT = 285,
     TRUE = 286,
     FALSE = 287,
     FIRST_BRACKET_OPEN = 288,
     FIRST_BRACKET_CLOSE = 289,
     SECOND_BRACKET_OPEN = 290,
     SECOND_BRACKET_CLOSE = 291,
     THIRD_BRACKET_OPEN = 292,
     THIRD_BRACKET_CLOSE = 293,
     SEMICOLON = 294,
     COMMA = 295,
     IF = 296,
     ELSE_IF = 297,
     ELSE = 298,
     SWITCH = 299,
     CASE = 300,
     FOR = 301,
     WHILE = 302,
     CONTINUE = 303,
     BREAK = 304,
     PRINTF = 305,
     SCANF = 306,
     SIZE_OF = 307,
     RETURN = 308
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
#define PLUS 267
#define MINUS 268
#define MULTIPLE 269
#define DIVISION 270
#define MOD 271
#define BINARY_OR 272
#define BINARY_AND 273
#define POW 274
#define EQUAL 275
#define NOT_EQUAL 276
#define GREATER_THAN 277
#define LESS_THAN 278
#define GREATER_THAN_AND_EQUAL 279
#define LESS_THAN_AND_EQUAL 280
#define INC_ONE 281
#define DEC_ONE 282
#define AND 283
#define OR 284
#define NOT 285
#define TRUE 286
#define FALSE 287
#define FIRST_BRACKET_OPEN 288
#define FIRST_BRACKET_CLOSE 289
#define SECOND_BRACKET_OPEN 290
#define SECOND_BRACKET_CLOSE 291
#define THIRD_BRACKET_OPEN 292
#define THIRD_BRACKET_CLOSE 293
#define SEMICOLON 294
#define COMMA 295
#define IF 296
#define ELSE_IF 297
#define ELSE 298
#define SWITCH 299
#define CASE 300
#define FOR 301
#define WHILE 302
#define CONTINUE 303
#define BREAK 304
#define PRINTF 305
#define SCANF 306
#define SIZE_OF 307
#define RETURN 308




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 19 "project.y"
{
    char text[1000];
    struct datatype {
        int type;
        char* str_value;
        int int_value;
        double double_value;
        char char_value;
    }union_variable;
}
/* Line 1529 of yacc.c.  */
#line 166 "project.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

