
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syntaxique.y"


#include "semantique.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char name[256];
int yyerror(char const *msg);

int yylex(void);

extern int yylineno;



/* Line 189 of yacc.c  */
#line 91 "syntaxique.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 177 "syntaxique.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   241

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNRULES -- Number of states.  */
#define YYNSTATES  195

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,    11,    14,    16,    20,    24,    28,
      29,    34,    38,    42,    46,    49,    51,    55,    59,    63,
      67,    71,    72,    77,    79,    81,    83,    93,   103,   113,
     123,   133,   135,   137,   139,   141,   143,   147,   151,   152,
     159,   160,   166,   169,   170,   176,   177,   178,   186,   187,
     192,   195,   199,   201,   205,   210,   217,   223,   228,   232,
     236,   238,   240,   250,   257,   262,   267,   269,   270,   276,
     277,   283,   286,   287,   292,   294,   295,   297,   301,   305,
     309,   313,   315,   317,   319,   321,   323,   325,   327,   329,
     331,   333,   335,   336,   342,   344,   348,   350,   352
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    83,    48,    83,    47,    -1,    58,    69,
      -1,    50,    69,    -1,    69,    -1,    58,    50,    69,    -1,
      50,    58,    69,    -1,    83,    47,    83,    -1,    -1,     7,
      41,    49,     3,    -1,     1,    41,     3,    -1,     7,     1,
       3,    -1,     7,    41,     1,    -1,    51,    50,    -1,    51,
      -1,    14,    52,     3,    -1,     1,    52,     3,    -1,    14,
      52,     1,    -1,    14,    56,     3,    -1,    53,     6,    55,
      -1,    -1,    41,    54,     4,    53,    -1,    41,    -1,    57,
      -1,    56,    -1,    15,    39,    42,     5,     5,    42,    40,
      34,    57,    -1,    15,    39,    42,     5,     5,    42,    40,
      34,     1,    -1,    15,     1,    42,     5,     5,    42,    40,
      34,    57,    -1,    15,    39,    42,     5,     5,    42,     1,
      34,    57,    -1,    15,    39,    42,     5,     5,    42,    40,
       1,    57,    -1,    13,    -1,    10,    -1,    11,    -1,    12,
      -1,     1,    -1,    59,     3,    83,    -1,    59,     3,    58,
      -1,    -1,    83,    62,    60,     3,    50,    69,    -1,    -1,
      83,    62,    61,     3,    69,    -1,    83,    62,    -1,    -1,
      83,    27,    41,    63,    83,    -1,    -1,    -1,    83,    27,
      64,    41,    66,    65,    83,    -1,    -1,    37,    68,    67,
      38,    -1,    37,    38,    -1,    52,     3,    68,    -1,    52,
      -1,    52,     1,    68,    -1,    83,     8,    83,     9,    -1,
      83,     8,    83,    70,    83,     9,    -1,    83,    71,     3,
      83,    70,    -1,    83,    71,     3,    83,    -1,    83,    71,
       1,    -1,    72,    16,    78,    -1,    74,    -1,    69,    -1,
      29,    37,    78,    38,    30,    71,     3,    31,    71,    -1,
      32,    37,    78,    38,    33,    71,    -1,    35,    37,    76,
      38,    -1,    36,    37,    53,    38,    -1,    41,    -1,    -1,
      41,    73,    39,    78,    40,    -1,    -1,    41,    75,    37,
      76,    38,    -1,    41,     1,    -1,    -1,    78,    77,     4,
      76,    -1,    78,    -1,    -1,    81,    -1,    81,    79,    81,
      -1,    81,    80,    81,    -1,    81,    79,    78,    -1,    81,
       1,    81,    -1,    19,    -1,    20,    -1,    17,    -1,    18,
      -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,    25,
      -1,    26,    -1,    41,    -1,    -1,    41,    82,    39,    78,
      40,    -1,    42,    -1,    37,    78,    38,    -1,    43,    -1,
      44,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    77,    77,    80,    81,    82,    83,    84,    85,    88,
      88,    89,    90,    91,    94,    95,    98,    99,   100,   101,
     104,   108,   108,   109,   112,   113,   116,   117,   118,   119,
     120,   123,   124,   125,   126,   127,   130,   131,   134,   134,
     135,   135,   136,   139,   139,   140,   143,   140,   146,   146,
     147,   150,   151,   152,   155,   156,   159,   160,   161,   164,
     165,   166,   167,   168,   169,   170,   173,   174,   174,   177,
     177,   182,   185,   185,   186,   187,   190,   191,   192,   193,
     194,   197,   198,   199,   200,   203,   204,   205,   206,   207,
     208,   211,   212,   212,   213,   214,   217,   218,   219
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PVIRGULE", "VIRGULE", "POINT", "DPOINT",
  "PROGRAM", "BBEGIN", "BEND", "INT", "REAL", "CHAR", "INTEGER", "VAR",
  "ARRAY", "AFFECT", "PLUS", "MINUS", "MULT", "DIV", "EQUAL", "NOTEQUAL",
  "GREATER", "LESS", "GREATEREQUAL", "LESSEQUAL", "PROCEDURE", "FUNCTION",
  "IF", "THEN", "ELSE", "WHILE", "DO", "OF", "WRITE", "READ", "PAROUV",
  "PARFER", "CROOUV", "CROFER", "ID", "NB", "COMMENTLINE", "COMMENTBLOCK",
  "$accept", "program", "body", "header", "$@1", "declarations",
  "declaration", "declaration_details", "identifiers", "$@2", "type",
  "array", "standard_type", "methods", "method", "$@3", "$@4",
  "method_header", "$@5", "$@6", "$@7", "arguments", "$@8", "parameters",
  "instructions_body", "instructions", "instruction", "lvalue", "$@9",
  "method_call", "$@10", "expressions", "$@11", "expression", "operation",
  "compare", "factor", "$@12", "comment", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    47,    47,    47,    47,    47,    49,
      48,    48,    48,    48,    50,    50,    51,    51,    51,    51,
      52,    54,    53,    53,    55,    55,    56,    56,    56,    56,
      56,    57,    57,    57,    57,    57,    58,    58,    60,    59,
      61,    59,    59,    63,    62,    64,    65,    62,    67,    66,
      66,    68,    68,    68,    69,    69,    70,    70,    70,    71,
      71,    71,    71,    71,    71,    71,    72,    73,    72,    75,
      74,    74,    77,    76,    76,    76,    78,    78,    78,    78,
      78,    79,    79,    79,    79,    80,    80,    80,    80,    80,
      80,    81,    82,    81,    81,    81,    83,    83,    83
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     2,     1,     3,     3,     3,     0,
       4,     3,     3,     3,     2,     1,     3,     3,     3,     3,
       3,     0,     4,     1,     1,     1,     9,     9,     9,     9,
       9,     1,     1,     1,     1,     1,     3,     3,     0,     6,
       0,     5,     2,     0,     5,     0,     0,     7,     0,     4,
       2,     3,     1,     3,     4,     6,     5,     4,     3,     3,
       1,     1,     9,     6,     4,     4,     1,     0,     5,     0,
       5,     2,     0,     4,     1,     0,     1,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     1,     3,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      98,    96,    97,     0,     0,     1,     0,     0,    98,     0,
       0,     0,     0,    11,    12,    13,     0,     0,     0,     2,
      98,     0,     0,     0,     5,     0,    10,    23,     0,     0,
       0,     0,     0,    98,     4,    98,    14,    98,     3,     0,
      98,    98,    98,    38,     0,     0,    17,     0,     0,     0,
      18,    16,    19,     7,     0,     6,    37,    36,    98,     8,
       0,     0,     0,     0,    35,    32,    33,    34,    31,    20,
      25,    24,     0,     0,    54,    98,    98,     0,    98,    43,
       0,    22,     0,     0,     0,     0,     0,     0,     0,     0,
      61,     0,     0,    60,    98,    41,    98,     0,     0,     0,
      55,     0,     0,    75,     0,    71,     0,     0,    58,    98,
       0,    39,    44,     0,    46,     0,     0,     0,    91,    94,
       0,     0,     0,     0,    72,     0,     0,    75,    98,    59,
      50,     0,    48,    98,     0,     0,     0,     0,     0,     0,
       0,    83,    84,    81,    82,    85,    86,    87,    88,    89,
      90,     0,     0,     0,    64,     0,    65,     0,     0,    56,
       0,     0,     0,    47,     0,     0,     0,     0,    95,     0,
      98,    80,    79,     0,    78,    98,    75,    68,    70,    53,
      51,    49,    28,    29,    30,    27,    26,     0,     0,    63,
      73,    93,     0,    98,    62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    42,     8,    16,    20,    21,   131,    29,    45,
      69,    32,    71,    22,    23,    60,    61,    43,    96,    80,
     133,   114,   162,   132,    90,    75,    91,    92,   106,    93,
     107,   123,   155,   124,   151,   152,   121,   138,    39
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -126
static const yytype_int16 yypact[] =
{
     104,  -126,  -126,     7,    63,  -126,   -25,    14,   104,    29,
      45,   100,     9,  -126,  -126,  -126,    68,    38,    -2,  -126,
     104,    46,    73,    85,  -126,    55,  -126,    96,   103,   129,
      23,   111,   135,   104,  -126,    41,  -126,   104,  -126,   134,
     104,   104,   104,  -126,    64,   141,  -126,   145,   142,   143,
    -126,  -126,  -126,  -126,   123,  -126,  -126,    -6,    67,  -126,
     174,   183,   146,    38,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,   184,   185,  -126,   104,   108,    79,   104,  -126,
     147,  -126,   186,   187,   188,   156,   157,   159,   161,    76,
    -126,   131,   179,  -126,   104,  -126,   104,   162,   160,   163,
    -126,   137,   137,   137,    38,  -126,   164,   167,  -126,   104,
     137,  -126,  -126,    56,  -126,   166,     5,   137,   168,  -126,
     170,   101,   171,   172,   173,   175,   137,   137,    86,  -126,
    -126,    28,  -126,   104,   178,   180,    27,   177,   181,   189,
     137,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,   137,   137,   190,  -126,   196,  -126,   176,   191,  -126,
      38,    38,   192,  -126,   152,   152,   152,   158,  -126,   137,
     108,  -126,  -126,   101,  -126,   108,   137,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,   182,   198,  -126,
    -126,  -126,   193,   108,  -126
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,   205,  -126,  -126,   -18,  -126,   149,   -58,  -126,
    -126,   194,    16,    10,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,    15,   -11,    90,   -39,  -126,  -126,  -126,
    -126,  -125,  -126,   -83,  -126,  -126,    21,  -126,     0
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -99
static const yytype_int16 yytable[] =
{
       4,    24,   158,    36,    37,    81,   135,     5,    12,    34,
      17,    38,    25,    30,    24,    10,     9,   -98,   120,   122,
      35,   -98,    53,    18,    48,    44,    55,   129,   166,   160,
      33,   161,    13,    24,   137,    54,   -98,     1,     2,    27,
      57,    58,    59,   157,    44,   136,   125,    17,    14,    41,
      56,   190,     1,     2,   -15,    11,    17,    54,    76,    94,
      18,   167,    49,    41,     6,    17,   -52,    95,   172,    18,
       7,    26,    41,   -15,    17,    84,    74,   105,    18,    27,
      17,   -98,   -98,   111,     1,     2,   187,    18,    40,   -15,
     -15,    62,   -66,    18,   130,   -57,   112,    27,     1,     2,
     -21,    15,   140,    -9,   -76,   -76,    46,     1,     2,   128,
       1,     2,    50,   -69,    51,   -67,     1,     2,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,    76,     1,
       2,   188,   108,   163,   109,    47,   189,    85,    52,   -76,
      86,   -76,    41,    87,    88,    63,    64,     1,     2,    89,
      62,     1,     2,    64,   194,    65,    66,    67,    68,   185,
      30,   171,    65,    66,    67,    68,    28,    31,    65,    66,
      67,    68,   173,   174,   117,   179,   180,    77,   118,   119,
     182,   183,   184,   186,    72,    73,    78,    79,    97,    82,
      83,    98,    99,   101,   102,   110,   103,   100,   104,   113,
     176,   192,   115,   126,   127,   116,   134,   -92,   139,   153,
     154,   -74,   164,   156,   165,   168,   177,    19,   159,   170,
     169,     0,   191,   175,   193,     0,     0,     0,     0,   178,
     181,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70
};

static const yytype_int16 yycheck[] =
{
       0,    12,   127,    21,    22,    63,     1,     0,     8,    20,
       1,    22,    12,    15,    25,     1,    41,     8,   101,   102,
      20,    27,    33,    14,     1,    25,    37,   110,     1,     1,
      20,     3,     3,    44,   117,    35,    27,    43,    44,    41,
      40,    41,    42,   126,    44,    40,   104,     1,     3,     8,
      40,   176,    43,    44,     8,    41,     1,    57,    58,    77,
      14,    34,    39,     8,     1,     1,    38,    78,   151,    14,
       7,     3,     8,    27,     1,    75,     9,     1,    14,    41,
       1,     8,    27,    94,    43,    44,   169,    14,     3,    43,
      44,    27,    16,    14,    38,     9,    96,    41,    43,    44,
       4,     1,     1,     3,     3,     4,     3,    43,    44,   109,
      43,    44,     1,    37,     3,    39,    43,    44,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,   128,    43,
      44,   170,     1,   133,     3,     6,   175,    29,     3,    38,
      32,    40,     8,    35,    36,     4,     1,    43,    44,    41,
      27,    43,    44,     1,   193,    10,    11,    12,    13,     1,
      15,   140,    10,    11,    12,    13,    17,    18,    10,    11,
      12,    13,   151,   152,    37,   160,   161,     3,    41,    42,
     164,   165,   166,   167,    42,    42,     3,    41,    41,     5,
       5,     5,     5,    37,    37,    16,    37,     9,    37,    37,
       4,     3,    42,    39,    37,    42,    40,    39,    38,    38,
      38,    38,    34,    38,    34,    38,    40,    12,   128,    30,
      39,    -1,    40,    33,    31,    -1,    -1,    -1,    -1,    38,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    43,    44,    46,    83,     0,     1,     7,    48,    41,
       1,    41,    83,     3,     3,     1,    49,     1,    14,    47,
      50,    51,    58,    59,    69,    83,     3,    41,    52,    53,
      15,    52,    56,    58,    69,    83,    50,    50,    69,    83,
       3,     8,    47,    62,    83,    54,     3,     6,     1,    39,
       1,     3,     3,    69,    83,    69,    58,    83,    83,    83,
      60,    61,    27,     4,     1,    10,    11,    12,    13,    55,
      56,    57,    42,    42,     9,    70,    83,     3,     3,    41,
      64,    53,     5,     5,    83,    29,    32,    35,    36,    41,
      69,    71,    72,    74,    50,    69,    63,    41,     5,     5,
       9,    37,    37,    37,    37,     1,    73,    75,     1,     3,
      16,    69,    83,    37,    66,    42,    42,    37,    41,    42,
      78,    81,    78,    76,    78,    53,    39,    37,    83,    78,
      38,    52,    68,    65,    40,     1,    40,    78,    82,    38,
       1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    79,    80,    38,    38,    77,    38,    78,    76,    70,
       1,     3,    67,    83,    34,    34,     1,    34,    38,    39,
      30,    81,    78,    81,    81,    33,     4,    40,    38,    68,
      68,    38,    57,    57,    57,     1,    57,    78,    71,    71,
      76,    40,     3,    31,    71
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 77 "syntaxique.y"
    {endProgram(yylineno);;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 88 "syntaxique.y"
    { table = createNode(name, TYPE_UNKNOWN, CLASS_UNKNOWN, NULL);;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 89 "syntaxique.y"
    {yyerror ("keyword program missing"); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 90 "syntaxique.y"
    {yyerror ("invalid program name"); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 91 "syntaxique.y"
    {yyerror ("expected semicolon"); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 99 "syntaxique.y"
    {yyerror ("keyword var missing"); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 100 "syntaxique.y"
    {yyerror ("expected semicolon"); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 108 "syntaxique.y"
    { table = addNode(createNode(name, TYPE_UNKNOWN, VARIABLE, NULL), table); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 109 "syntaxique.y"
    { table = addNode(createNode(name, TYPE_UNKNOWN, VARIABLE, NULL), table); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 117 "syntaxique.y"
    {yyerror ("array element's type not specified"); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 118 "syntaxique.y"
    {yyerror ("open bracket missing"); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 119 "syntaxique.y"
    {yyerror ("close bracket missing"); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 120 "syntaxique.y"
    {yyerror ("keyword of missing"); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 123 "syntaxique.y"
    { gType = TYPE_INT; ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 124 "syntaxique.y"
    { gType = TYPE_INT; ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 125 "syntaxique.y"
    { gType = TYPE_REAL; ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 126 "syntaxique.y"
    { gType = TYPE_STRING; ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 127 "syntaxique.y"
    {yyerror("invalid type");;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 134 "syntaxique.y"
    { gIfProc = 1; ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 135 "syntaxique.y"
    { gIfProc = 1; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 136 "syntaxique.y"
    { gIfProc = 1; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 139 "syntaxique.y"
    { table = addNode(createNode(name, TYPE_UNKNOWN, PROCEDUREE, NULL), table); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 140 "syntaxique.y"
    { if( findNode(name, table) ) yyerror("Procedure already defined");
                                            else table = addNode(createNode(name, TYPE_UNKNOWN, PROCEDUREE, NULL), table);
                                            gIfProcParameters = 1;
                                            ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 143 "syntaxique.y"
    { gProcNode->paramCount = gNbParam; gNbParam = 0;;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 146 "syntaxique.y"
    { gIfProcParameters = 0; ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 152 "syntaxique.y"
    {yyerror ("expected semicolon"); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 161 "syntaxique.y"
    {yyerror ("expected semicolon"); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 169 "syntaxique.y"
    {gNbParam = 0;;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 170 "syntaxique.y"
    {gNbParam = 0;;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 173 "syntaxique.y"
    { checkIdentifierOnInit(name, yylineno); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 174 "syntaxique.y"
    { checkIdentifierOnInit(name, yylineno); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 177 "syntaxique.y"
    { checkIdentifierOnInit(name, yylineno); gNode = findNode(name, table); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 177 "syntaxique.y"
    { 
                                                                                                    if ( gNode->paramCount != gNbParam)
                                                                                                        yyerror("invalid number of parameters ");
                                                                                				    gNbParam = 0;
                                                                                				;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 182 "syntaxique.y"
    {yyerror("missing parenthesis");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 185 "syntaxique.y"
    { gNbParam ++; ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 186 "syntaxique.y"
    { gNbParam ++; ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 194 "syntaxique.y"
    {yyerror("operator or semicolon expected");;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 211 "syntaxique.y"
    { checkID(name, yylineno); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 212 "syntaxique.y"
    { checkID(name, yylineno); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1835 "syntaxique.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 223 "syntaxique.y"
 

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
  
                   

