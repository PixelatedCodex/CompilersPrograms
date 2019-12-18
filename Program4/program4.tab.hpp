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

#ifndef YY_YY_PROGRAM4_TAB_HPP_INCLUDED
# define YY_YY_PROGRAM4_TAB_HPP_INCLUDED
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
    NUMBER = 258,
    ID = 259,
    INT = 260,
    VOID = 261,
    CLASS = 262,
    NEW = 263,
    PRINT = 264,
    READ = 265,
    RETURN = 266,
    WHILE = 267,
    IF = 268,
    ELSE = 269,
    THIS = 270,
    NULLT = 271,
    LPAREN = 272,
    RPAREN = 273,
    LBRACK = 274,
    RBRACK = 275,
    LBRACE = 276,
    RBRACE = 277,
    SEMI = 278,
    DOT = 279,
    COMMA = 280,
    ASSIGN = 281,
    EQ = 282,
    NE = 283,
    GE = 284,
    LE = 285,
    GT = 286,
    LT = 287,
    OR = 288,
    TIMES = 289,
    DIV = 290,
    MOD = 291,
    AND = 292,
    PLUS = 293,
    MINUS = 294,
    NOT = 295,
    THEN = 296
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 69 "program4.ypp" /* yacc.c:1909  */

  Node *ttype;

#line 100 "program4.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROGRAM4_TAB_HPP_INCLUDED  */
