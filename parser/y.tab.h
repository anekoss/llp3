/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    DB = 258,                      /* DB  */
    FIND = 259,                    /* FIND  */
    INSERT = 260,                  /* INSERT  */
    DELETE = 261,                  /* DELETE  */
    UPDATE = 262,                  /* UPDATE  */
    PARENT = 263,                  /* PARENT  */
    STRING = 264,                  /* STRING  */
    SET = 265,                     /* SET  */
    OR = 266,                      /* OR  */
    LT = 267,                      /* LT  */
    LET = 268,                     /* LET  */
    GT = 269,                      /* GT  */
    GET = 270,                     /* GET  */
    NE = 271,                      /* NE  */
    OPBRACE = 272,                 /* OPBRACE  */
    CLBRACE = 273,                 /* CLBRACE  */
    OPCBRACE = 274,                /* OPCBRACE  */
    CLCBRACE = 275,                /* CLCBRACE  */
    OPSQBRACE = 276,               /* OPSQBRACE  */
    CLSQBRACE = 277,               /* CLSQBRACE  */
    COLON = 278,                   /* COLON  */
    DOLLAR = 279,                  /* DOLLAR  */
    COMMA = 280,                   /* COMMA  */
    QUOTE = 281,                   /* QUOTE  */
    FALSE = 282,                   /* FALSE  */
    TRUE = 283,                    /* TRUE  */
    INT_NUMBER = 284,              /* INT_NUMBER  */
    FLOAT_NUMBER = 285             /* FLOAT_NUMBER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define DB 258
#define FIND 259
#define INSERT 260
#define DELETE 261
#define UPDATE 262
#define PARENT 263
#define STRING 264
#define SET 265
#define OR 266
#define LT 267
#define LET 268
#define GT 269
#define GET 270
#define NE 271
#define OPBRACE 272
#define CLBRACE 273
#define OPCBRACE 274
#define CLCBRACE 275
#define OPSQBRACE 276
#define CLSQBRACE 277
#define COLON 278
#define DOLLAR 279
#define COMMA 280
#define QUOTE 281
#define FALSE 282
#define TRUE 283
#define INT_NUMBER 284
#define FLOAT_NUMBER 285

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "mongo.y"
uint64_t num; char *string; float fnum;

#line 130 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
