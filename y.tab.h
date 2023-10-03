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
    VALUEINT = 258,                /* VALUEINT  */
    VALUESTR = 259,                /* VALUESTR  */
    WIDTH = 260,                   /* WIDTH  */
    HEIGHT = 261,                  /* HEIGHT  */
    ID = 262,                      /* ID  */
    ORIENTATION = 263,             /* ORIENTATION  */
    COLOR = 264,                   /* COLOR  */
    SRC = 265,                     /* SRC  */
    PADDING = 266,                 /* PADDING  */
    MAX = 267,                     /* MAX  */
    PROGRESSMADE = 268,            /* PROGRESSMADE  */
    CHECKEDBTN = 269,              /* CHECKEDBTN  */
    TEXT = 270,                    /* TEXT  */
    CHILDAMOUNT = 271,             /* CHILDAMOUNT  */
    TEXTVIEW = 272,                /* TEXTVIEW  */
    IMAGE = 273,                   /* IMAGE  */
    BUTTON = 274,                  /* BUTTON  */
    PROGRESS = 275,                /* PROGRESS  */
    RADIOBTN = 276,                /* RADIOBTN  */
    S_RADIOGRP = 277,              /* S_RADIOGRP  */
    E_RADIOGRP = 278,              /* E_RADIOGRP  */
    E_LINEAR = 279,                /* E_LINEAR  */
    E_RELATIVE = 280,              /* E_RELATIVE  */
    S_LINEAR = 281,                /* S_LINEAR  */
    S_RELATIVE = 282               /* S_RELATIVE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define VALUEINT 258
#define VALUESTR 259
#define WIDTH 260
#define HEIGHT 261
#define ID 262
#define ORIENTATION 263
#define COLOR 264
#define SRC 265
#define PADDING 266
#define MAX 267
#define PROGRESSMADE 268
#define CHECKEDBTN 269
#define TEXT 270
#define CHILDAMOUNT 271
#define TEXTVIEW 272
#define IMAGE 273
#define BUTTON 274
#define PROGRESS 275
#define RADIOBTN 276
#define S_RADIOGRP 277
#define E_RADIOGRP 278
#define E_LINEAR 279
#define E_RELATIVE 280
#define S_LINEAR 281
#define S_RELATIVE 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "parse.y"

	int lineno;

	struct intLineno {
		int valueInt;
		int lineno;
	}intLineno;

	struct stringLineno {
		char *valueStr;
		int lineno;
	}stringLineno;

#line 135 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
