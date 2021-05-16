
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PVIRGULE = 258,
     VIRGULE = 259,
     POINT = 260,
     DPOINT = 261,
     PROGRAM = 262,
     BBEGIN = 263,
     BEND = 264,
     INT = 265,
     REAL = 266,
     CHAR = 267,
     INTEGER = 268,
     VAR = 269,
     ARRAY = 270,
     AFFECT = 271,
     PLUS = 272,
     MINUS = 273,
     MULT = 274,
     DIV = 275,
     EQUAL = 276,
     NOTEQUAL = 277,
     GREATER = 278,
     LESS = 279,
     GREATEREQUAL = 280,
     LESSEQUAL = 281,
     PROCEDURE = 282,
     FUNCTION = 283,
     IF = 284,
     THEN = 285,
     ELSE = 286,
     WHILE = 287,
     DO = 288,
     OF = 289,
     WRITE = 290,
     READ = 291,
     PAROUV = 292,
     PARFER = 293,
     CROOUV = 294,
     CROFER = 295,
     ID = 296,
     NB = 297,
     COMMENTLINE = 298,
     COMMENTBLOCK = 299
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


