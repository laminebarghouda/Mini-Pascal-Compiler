#ifndef TP3_SEMANTIQUE_H
#define TP3_SEMANTIQUE_H

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

// This enum provides possible identifier types
typedef enum {
    TYPE_UNKNOWN,
    TYPE_INT,
    TYPE_REAL,
    TYPE_STRING
} IDENTIFIER_TYPE;

// This enum provides possible class types
typedef enum {
    CLASS_UNKNOWN,
    VARIABLE,
    PROCEDUREE,
    PARAMETER
} CLASS;

// This struct represents an identifier node
struct NODE
{
    char* name;
    IDENTIFIER_TYPE type;
    CLASS class;
    int isInit;
    int isUsed;
    int paramCount;
    struct NODE * next;
};

// Class variables
typedef struct NODE* NODE;
typedef NODE HEAD; // Nodes list handled from it's head node

// Creates a new node
NODE createNode (const char* name, IDENTIFIER_TYPE type, CLASS class, NODE next);

// Adds a node to nodes list
NODE AddNode (NODE node, HEAD head);

// finds if a node, identified by its name, belongs to nodes list
NODE findNode (const char* name, HEAD head);

// Checks whether an identifier is already declared
void checkIdentifier(char* name, int line);

// Checks if the ID is declared and initialized
void checkID(char* name, int line);

// Marks a variable as initialized
void initializeVar (char* name);

// Marks a variable as declared
int declareVariable(char* name, int line);

// Chekcs whether an ID is defined
void checkIdentifierOnInit(char* name, int line);

// Chekcs whether an ID is initialized
void checkVarInitialized(char * name, int line);

// Frees memory allocated by the program
void freeMemory(HEAD symbolsTable);

// Ends the analyse and checks whether there are any unused variables
void endProgram(int line);



#endif //TP3_SEMANTIQUE_H
