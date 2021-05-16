%{
#include <stdio.h>
#include <stdlib.h>
#include "syntaxique.tab.h"
#include <math.h>

extern char name[];
%}

%option yylineno
delim     [ \t]
bl        {delim}+
chiffre   [0-9]
lettre    [a-zA-Z]
id        {lettre}({lettre}|{chiffre})*
nb        ("-")?{chiffre}+("."{chiffre}+)?(("E"|"e")"-"?{chiffre}+)?
iderrone  {chiffre}({lettre}|{chiffre})*
COMMENT_LINE        "//"(.*)
COMMENT_BLOCK	  "/*"([^*]|\*+[^*/])*\*+"/"
comment_errone		"/*"([^*]|\*+[^*/])*

p_ouvrante  (\()
p_fermante  (\))
c_ouvrante  (\[)
c_fermante  (\])

pvirgule (";")
virgule (",")
point (".")
dpoint (":")

%%

{bl}                                             /* pas d'actions */
"\n" 			                                 ++yylineno;

{pvirgule} 									     return PVIRGULE;
{virgule} 									     return VIRGULE;
{point} 									     return POINT;
{dpoint} 									     return DPOINT;

"program"                                        return PROGRAM;
"begin"                                          return BBEGIN;
"end"                                            return BEND;

"int"  										     { strcpy(name, yytext); return INT; }
"real"  									     return REAL;
"char"  									     return CHAR;
"integer"  									     { strcpy(name, yytext); return INTEGER; }
"var"  										     return VAR;
"array"  									     return ARRAY;

":="	                                         return AFFECT;
"+"										         return PLUS;
"-"										         return MINUS;
"*"										         return MULT;
"/"										         return DIV;

"=="                                             return EQUAL;
"!="                                             return NOTEQUAL;
">"                                              return GREATER;
"<"                                              return LESS;
">="                                             return GREATEREQUAL;
"<="                                             return LESSEQUAL;

"procedure"  									 return PROCEDURE;
"function"  									 return FUNCTION;

"if"  										     return IF;
"then"  									     return THEN;
"else"  									     return ELSE;
"while"  									     return WHILE;
"do"  										     return DO;
"of"  										     return OF;

"write"  									     return WRITE;
"read"  									     return READ;   

{p_ouvrante}                                     return PAROUV;
{p_fermante}                                     return PARFER;

{c_ouvrante}                                     return CROOUV;
{c_fermante}                                     return CROFER;

{id}                                             { strcpy(name, yytext); return ID; }
{nb}                                             return NB;

{COMMENT_LINE}         						     return COMMENTLINE;
{COMMENT_BLOCK}         						 return COMMENTBLOCK;

{iderrone}                                       {fprintf(stderr,"illegal identifier \'%s\' on line :%d\n",yytext,yylineno);}
.                                                {fprintf(stderr,"illegal character \'%s\' on line :%d\n",yytext,yylineno);}
	

%%
