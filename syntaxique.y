%{

#include "semantique.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char name[256];
int yyerror(char const *msg);

int yylex(void);

extern int yylineno;

%}

%token PVIRGULE
%token VIRGULE
%token POINT
%token DPOINT

%token PROGRAM
%token BBEGIN
%token BEND

%token INT
%token REAL
%token CHAR
%token INTEGER
%token VAR
%token ARRAY

%token AFFECT
%token PLUS
%token MINUS
%token MULT
%token DIV

%token EQUAL
%token NOTEQUAL
%token GREATER
%token LESS
%token GREATEREQUAL
%token LESSEQUAL

%token PROCEDURE
%token FUNCTION

%token IF
%token THEN
%token ELSE
%token WHILE
%token DO
%token OF

%token WRITE
%token READ 

%token PAROUV
%token PARFER

%token CROOUV
%token CROFER

%token ID
%token NB

%token COMMENTLINE
%token COMMENTBLOCK


%start program

%%                     
                        
program 			    : comment header comment body {endProgram(yylineno);}
						;
                
body                    : methods instructions_body
                        | declarations instructions_body
                        | instructions_body
                        | methods declarations instructions_body
                        | declarations methods instructions_body
                        | comment body comment
                        ;

header					: PROGRAM ID { table = createNode(name, TYPE_UNKNOWN, CLASS_UNKNOWN, NULL);} PVIRGULE
            			| error ID PVIRGULE     {yyerror ("keyword program missing"); }
                		| PROGRAM error PVIRGULE        {yyerror ("invalid program name"); } 
                		| PROGRAM ID error           {yyerror ("expected semicolon"); }
                		;

declarations  	        : declaration declarations 
						| declaration
						;
 
declaration 			: VAR declaration_details PVIRGULE 
						| error declaration_details PVIRGULE      {yyerror ("keyword var missing"); }
						| VAR declaration_details error				 {yyerror ("expected semicolon"); }
                        | VAR array PVIRGULE
						;
 
declaration_details   	: identifiers DPOINT type
                        ;

 
identifiers             : ID { table = addNode(createNode(name, TYPE_UNKNOWN, VARIABLE, NULL), table); } VIRGULE identifiers 
						| ID { table = addNode(createNode(name, TYPE_UNKNOWN, VARIABLE, NULL), table); }
                        ;
 
type 					: standard_type 
                        | array
						;
                        
array                   : ARRAY CROOUV NB POINT POINT NB CROFER OF standard_type
                        | ARRAY CROOUV NB POINT POINT NB CROFER OF error          {yyerror ("array element's type not specified"); }
                        | ARRAY error NB POINT POINT NB CROFER OF standard_type          {yyerror ("open bracket missing"); }
                        | ARRAY CROOUV NB POINT POINT NB error OF standard_type          {yyerror ("close bracket missing"); }
                        | ARRAY CROOUV NB POINT POINT NB CROFER error standard_type          {yyerror ("keyword of missing"); }
                        ;

standard_type 			: INTEGER { gType = TYPE_INT; }
                        | INT  { gType = TYPE_INT; }
						| REAL { gType = TYPE_REAL; }
						| CHAR { gType = TYPE_STRING; }
						| error {yyerror("invalid type");}
						;
 
methods 	            : method PVIRGULE comment 
						| method PVIRGULE methods
						;
 
method               	: comment method_header { gIfProc = 1; } PVIRGULE declarations instructions_body
						| comment method_header { gIfProc = 1; } PVIRGULE instructions_body
                        | comment method_header { gIfProc = 1; } 
						;
 
method_header 			: comment PROCEDURE ID { table = addNode(createNode(name, TYPE_UNKNOWN, PROCEDUREE, NULL), table); } comment
                        | comment PROCEDURE { if( findNode(name, table) ) yyerror("Procedure already defined");
                                            else table = addNode(createNode(name, TYPE_UNKNOWN, PROCEDUREE, NULL), table);
                                            gIfProcParameters = 1;
                                            } ID arguments { gProcNode->paramCount = gNbParam; gNbParam = 0;} comment
						;
 
arguments 				: PAROUV parameters { gIfProcParameters = 0; } PARFER
						| PAROUV PARFER
						;
 
parameters       		: declaration_details PVIRGULE parameters 	
						| declaration_details 
						| declaration_details error parameters   {yyerror ("expected semicolon"); }
						;
 
instructions_body       : comment BBEGIN comment BEND
						| comment BBEGIN comment instructions comment BEND
						;
 
instructions 	      	: comment instruction PVIRGULE comment instructions 
						| comment instruction PVIRGULE comment 
						| comment instruction error  {yyerror ("expected semicolon"); }
						;

instruction  			: lvalue AFFECT expression 
						| method_call
						| instructions_body 
						| IF PAROUV expression PARFER THEN instruction PVIRGULE ELSE instruction 
						| WHILE PAROUV expression PARFER DO instruction 
						| WRITE PAROUV expressions PARFER {gNbParam = 0;}
						| READ PAROUV identifiers PARFER {gNbParam = 0;}
						;
 
lvalue 					: ID { checkIdentifierOnInit(name, yylineno); }
						| ID { checkIdentifierOnInit(name, yylineno); } CROOUV expression CROFER
						;
 
method_call 			: ID { checkIdentifierOnInit(name, yylineno); gNode = findNode(name, table); } PAROUV expressions PARFER { 
                                                                                                    if ( gNode->paramCount != gNbParam)
                                                                                                        yyerror("invalid number of parameters ");
                                                                                				    gNbParam = 0;
                                                                                				}
						| ID error {yyerror("missing parenthesis");}
						;
 
expressions      		: expression { gNbParam ++; } VIRGULE expressions
						| expression { gNbParam ++; }
						|
						;
 
expression 				: factor 
						| factor operation factor 
                        | factor compare factor
                        | factor operation expression
                        | factor error factor {yyerror("operator or semicolon expected");}
						;
 
operation 				: MULT
						| DIV 
                        | PLUS
                        | MINUS
						;
                        
compare                 : EQUAL
                        | NOTEQUAL
                        | GREATER
                        | LESS
                        | GREATEREQUAL
                        | LESSEQUAL
                        ;
 
factor   				: ID { checkID(name, yylineno); }
						| ID { checkID(name, yylineno); } CROOUV expression CROFER
						| NB 
						| PAROUV expression PARFER
						;
                        
comment                 : COMMENTLINE
                        | COMMENTBLOCK
                        | 
                        ;


%% 

int yyerror(char const *msg) {
	fprintf(stderr, "%s %d\n", msg,yylineno);
	return 0;
}

extern FILE *yyin;



main()
{
	// Initializing variables
    gNode = NULL;
    gNbParam = 0;
    gType = TYPE_UNKNOWN;
    gIndex = 0;
	table = NULL;
	localTable = NULL;
    gIfProc = 0 ;
    gIfProcParameters = 0 ;
	
	yyparse();
    
	freeMemory(table);
}

yywrap()
{
	return(1);
}
  
                   
