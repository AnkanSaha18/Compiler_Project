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
     AND = 281,
     OR = 282,
     INC_ONE = 283,
     DEC_ONE = 284,
     TRUE = 285,
     FALSE = 286,
     FIRST_BRACKET_OPEN = 287,
     FIRST_BRACKET_CLOSE = 288,
     SECOND_BRACKET_OPEN = 289,
     SECOND_BRACKET_CLOSE = 290,
     THIRD_BRACKET_OPEN = 291,
     THIRD_BRACKET_CLOSE = 292,
     SEMICOLON = 293,
     COMMA = 294,
     IF = 295,
     ELSE_IF = 296,
     ELSE = 297,
     SWITCH = 298,
     CASE = 299,
     FOR = 300,
     WHILE = 301,
     CONTINUE = 302,
     BREAK = 303,
     PRINTF = 304,
     SCANF = 305,
     SIZE_OF = 306,
     RETURN = 307,
     OUTPUTTEXT = 308,
     LIBRARY = 309,
     LCM = 310,
     GCD = 311
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
#define AND 281
#define OR 282
#define INC_ONE 283
#define DEC_ONE 284
#define TRUE 285
#define FALSE 286
#define FIRST_BRACKET_OPEN 287
#define FIRST_BRACKET_CLOSE 288
#define SECOND_BRACKET_OPEN 289
#define SECOND_BRACKET_CLOSE 290
#define THIRD_BRACKET_OPEN 291
#define THIRD_BRACKET_CLOSE 292
#define SEMICOLON 293
#define COMMA 294
#define IF 295
#define ELSE_IF 296
#define ELSE 297
#define SWITCH 298
#define CASE 299
#define FOR 300
#define WHILE 301
#define CONTINUE 302
#define BREAK 303
#define PRINTF 304
#define SCANF 305
#define SIZE_OF 306
#define RETURN 307
#define OUTPUTTEXT 308
#define LIBRARY 309
#define LCM 310
#define GCD 311




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 58 "project.y"
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
/* Line 1529 of yacc.c.  */
#line 172 "project.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

