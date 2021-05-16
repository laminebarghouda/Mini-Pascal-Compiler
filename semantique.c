#include "semantique.h"

// Variables
NODE gNode, gProcNode;
NODE gIDs[100];
HEAD table, localTable;
IDENTIFIER_TYPE gType;
int gIndex;
int gIfProc;
int gIfProcParameters;
int gNbParam;

// Creates a new node
NODE createNode (const char* name, IDENTIFIER_TYPE type, CLASS class, NODE next){
    NODE node = (NODE)malloc(sizeof(struct NODE));
    node->name = (char *)malloc(strlen(name)+1);
    strcpy(node->name, name);
    node->type = type;
    node->class = class;
    node->next = next;
    node->paramCount = 0;
    node->isInit = 0;
    node->isUsed = 0;
    return node;
}

// Adds a node to nodes list
NODE addNode(NODE node, HEAD table) {
    NODE tail = table;
    if(findNode(node->name, table))
        printf("Variable %s is already defined\n", node->name);
    else{
        while( tail->next ) {
            tail = tail->next;
        }
        tail->next = node;
    }
    return table;
    
}

// finds if a node, identified by its name, belongs to nodes list
NODE findNode(const char* name, HEAD table) {
    NODE node = table;
    while( node && ( strcmp(name, node->name) != 0 ) )
        node = node->next;
    return node;
}


// Checks whether an identifier is already declared
void checkIdentifier(char* name, int line){
    CLASS class;
    if (gIfProc){
        if (gIfProcParameters){
            class = PARAMETER;
            gNbParam ++;
        }else{
            class = VARIABLE;
        }
        if(findNode(name, localTable)){
            printf("error ligne %d | Identifier already declared : %s\n", line, name);
        }else{
            NODE node = createNode(name, gType, class ,NULL);
            localTable = addNode(node, localTable);
            gIDs[gIndex] = node;
            gIndex++;
        }
    }else{
        if(findNode(name, table)){
            printf("error ligne %d | Identifier already declared : %s\n", line, name);
        }else{
            NODE node = createNode(name, gType, VARIABLE ,NULL);
            table = addNode(node, table);
            gIDs[gIndex] = node;
            gIndex++;
        }
    }
}


// Checks if the ID is declared and initialized
void checkID(char* name, int line){
    if(declareVariable(name, line)) {
        checkVarInitialized(name, line);
    }
}

// Marks a variable as initialized
void initializeVar(char* name){
    NODE node;
    if (gIfProc){
        node = findNode(name, localTable);
        if (!node)
            node = findNode(name,table);
        }else{
            node = findNode(name,table);
    }
    node->isInit = 1;
}


// Marks a variable as declared
int declareVariable (char* name, int line){
    NODE node;
    if (gIfProc){
        node = findNode(name,localTable);
        if (!node){
            node = findNode(name,table);
            if( !node ){
                printf("error ligne %d | Variable not declared : %s\n", line, name);
                return 0;
            }else
            {
                node->isUsed = 1;
            }
        }else
        {
            node->isUsed = 1;
        }
    }else{
        node = findNode(name,table);
        if( !node ){
            printf("error ligne %d | Variable not declared : %s\n", line, name);
            return 0;
        }else
        {
            node->isUsed = 1;
        }
    }
    return 1;
}

// Chekcs whether an ID is defined
void checkIdentifierOnInit(char* name, int line){
    if(declareVariable(name, line)) {
        initializeVar(name);
    }
}

// Chekcs whether an ID is initialized
void checkVarInitialized (char* name,int line){
    NODE node;
    if (gIfProc){
        node = findNode(name,localTable);
        if ( !node )
            node = findNode(name,table);
    }else{
        node = findNode(name,table);
    }
    if(node && node->class == VARIABLE && !node->isInit)
        printf("error ligne %d | Variable not initialized : %s\n", line, name);
}


// Frees memory allocated by the program
void freeMemory(HEAD table)
{
    NODE node = table;
    while( node ){
        free(node->name);
        free(node);
        node = node->next;
    }
}

// Ends the analyse and checks whether there are any unused variables
void endProgram(int line){
    NODE tmpTable = table;
    while( tmpTable ){
        if (tmpTable->class == VARIABLE && !tmpTable->isUsed)
            printf("error ligne %d | Variable declared not used : %s\n", line, tmpTable->name);
        tmpTable = tmpTable->next;
    }
}


