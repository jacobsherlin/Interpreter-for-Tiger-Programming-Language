/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

/* Line 371 of yacc.c  */
#line 68 "tiger.tab.cc"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "tiger.tab.hh".  */
#ifndef YY_YY_TIGER_TAB_HH_INCLUDED
# define YY_YY_TIGER_TAB_HH_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
/* Line 387 of yacc.c  */
#line 5 "tiger.yy"

#include <iostream>
#include <string>
#include "ErrorMsg.h"

#include "Absyn.h"

int yylex(void); /* function prototype */
void yyerror(char *s);	//called by the parser whenever an eror occurs
void yyerror(int, int, char *s);	//called by the parser whenever an eror occurs



/* Line 387 of yacc.c  */
#line 114 "tiger.tab.cc"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     STRING = 259,
     INT = 260,
     COMMA = 261,
     COLON = 262,
     SEMICOLON = 263,
     LPAREN = 264,
     RPAREN = 265,
     LBRACK = 266,
     RBRACK = 267,
     LBRACE = 268,
     RBRACE = 269,
     DOT = 270,
     ARRAY = 271,
     IF = 272,
     THEN = 273,
     ELSE = 274,
     WHILE = 275,
     FOR = 276,
     TO = 277,
     DO = 278,
     LET = 279,
     IN = 280,
     END = 281,
     OF = 282,
     BREAK = 283,
     NIL = 284,
     FUNCTION = 285,
     VAR = 286,
     TYPE = 287,
     ASSIGN = 288,
     OR = 289,
     AND = 290,
     GE = 291,
     GT = 292,
     LE = 293,
     LT = 294,
     NEQ = 295,
     EQ = 296,
     MINUS = 297,
     PLUS = 298,
     DIVIDE = 299,
     TIMES = 300,
     UMINUS = 301
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 18 "tiger.yy"

	int			ival;	//integer value of INT token
	std::string*		sval;	//pointer to name of IDENTIFIER or value of STRING	
					//I have to use pointers since C++ does not support 
					//string object as the union member
	absyn::Exp*				exp;
	absyn::Var*				var;
	absyn::Ty*				ty;
	absyn::Dec*				dec;
	absyn::DecList*			declist;
	absyn::FieldList*		fieldlist;
	absyn::ExpList*			explist;
	absyn::FieldExpList*	fieldexplist;


/* Line 387 of yacc.c  */
#line 191 "tiger.tab.cc"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;
extern YYLTYPE yylloc;
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

#endif /* !YY_YY_TIGER_TAB_HH_INCLUDED  */

/* Copy the second part of user declarations.  */
/* Line 390 of yacc.c  */
#line 33 "tiger.yy"

void yyerror(YYLTYPE loc, char *s);
absyn::Exp*		root;	//pointer to the root of abstract syntax tree

/* Line 390 of yacc.c  */
#line 237 "tiger.tab.cc"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   276

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  137

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     6,     8,    11,    13,    15,    17,
      19,    24,    26,    30,    34,    35,    37,    41,    47,    52,
      59,    67,    77,    79,    83,    88,    93,    95,    99,   103,
     107,   111,   114,   116,   118,   120,   125,   129,   133,   137,
     141,   145,   149,   153,   157,   162,   169,   173,   180,   185,
     190,   199,   201,   207,   209,   213,   214,   216,   218,   222,
     223,   225,   229,   235,   236,   238,   240
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    59,    -1,    -1,    50,    -1,    51,    50,
      -1,    51,    -1,    52,    -1,    56,    -1,    57,    -1,    32,
       3,    41,    53,    -1,     3,    -1,    13,    54,    14,    -1,
      16,    27,     3,    -1,    -1,    55,    -1,     3,     7,     3,
      -1,     3,     7,     3,     6,    55,    -1,    31,     3,    33,
      59,    -1,    31,     3,     7,     3,    33,    59,    -1,    30,
       3,     9,    54,    10,    41,    59,    -1,    30,     3,     9,
      54,    10,     7,     3,    41,    59,    -1,     3,    -1,    58,
      15,     3,    -1,    58,    11,    59,    12,    -1,     3,    11,
      59,    12,    -1,    58,    -1,    59,    43,    59,    -1,    59,
      42,    59,    -1,    59,    45,    59,    -1,    59,    44,    59,
      -1,    42,    59,    -1,    60,    -1,     5,    -1,     4,    -1,
       3,     9,    65,    10,    -1,    59,    41,    59,    -1,    59,
      40,    59,    -1,    59,    39,    59,    -1,    59,    38,    59,
      -1,    59,    37,    59,    -1,    59,    36,    59,    -1,    59,
      35,    59,    -1,    59,    34,    59,    -1,     3,    13,    63,
      14,    -1,     3,    11,    59,    12,    27,    59,    -1,    58,
      33,    59,    -1,    17,    59,    18,    59,    19,    59,    -1,
      17,    59,    18,    59,    -1,    20,    59,    23,    59,    -1,
      21,     3,    33,    59,    22,    59,    23,    59,    -1,    28,
      -1,    24,    49,    25,    61,    26,    -1,    29,    -1,     9,
      61,    10,    -1,    -1,    62,    -1,    59,    -1,    59,     8,
      62,    -1,    -1,    64,    -1,     3,    41,    59,    -1,     3,
      41,    59,     6,    64,    -1,    -1,    66,    -1,    59,    -1,
      59,     6,    66,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    77,    77,    82,    83,    87,   110,   113,   115,   117,
     121,   127,   129,   131,   136,   137,   140,   142,   146,   148,
     155,   163,   173,   175,   177,   179,   186,   188,   190,   192,
     194,   196,   202,   204,   206,   208,   210,   212,   214,   216,
     218,   220,   222,   225,   228,   231,   233,   235,   237,   239,
     241,   250,   252,   267,   271,   276,   277,   281,   283,   288,
     289,   293,   299,   308,   309,   313,   315
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "STRING", "INT", "COMMA", "COLON",
  "SEMICOLON", "LPAREN", "RPAREN", "LBRACK", "RBRACK", "LBRACE", "RBRACE",
  "DOT", "ARRAY", "IF", "THEN", "ELSE", "WHILE", "FOR", "TO", "DO", "LET",
  "IN", "END", "OF", "BREAK", "NIL", "FUNCTION", "VAR", "TYPE", "ASSIGN",
  "OR", "AND", "GE", "GT", "LE", "LT", "NEQ", "EQ", "MINUS", "PLUS",
  "DIVIDE", "TIMES", "UMINUS", "$accept", "program", "decs", "t_decs",
  "dec", "typedec", "tpinfo", "fields", "t_fields", "vardec", "fundec",
  "lvalue", "exp", "expseq", "explist", "t_explist", "fieldlist",
  "t_fieldlist", "paramlist", "t_paramlist", YY_NULL
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
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    51,    51,    51,
      52,    53,    53,    53,    54,    54,    55,    55,    56,    56,
      57,    57,    58,    58,    58,    58,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    65,    65,    66,    66
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       4,     1,     3,     3,     0,     1,     3,     5,     4,     6,
       7,     9,     1,     3,     4,     4,     1,     3,     3,     3,
       3,     2,     1,     1,     1,     4,     3,     3,     3,     3,
       3,     3,     3,     3,     4,     6,     3,     6,     4,     4,
       8,     1,     5,     1,     3,     0,     1,     1,     3,     0,
       1,     3,     5,     0,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    22,    34,    33,    55,     0,     0,     0,     3,    51,
      53,     0,     0,    26,     2,    32,    63,     0,    59,    57,
       0,    56,     0,     0,     0,     0,     0,     0,     0,     4,
       6,     7,     8,     9,    31,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,     0,    64,     0,     0,     0,    60,     0,    54,
       0,     0,     0,     0,     0,     0,    55,     5,     0,    23,
      46,    43,    42,    41,    40,    39,    38,    37,    36,    28,
      27,    30,    29,     0,    35,    25,     0,    44,    58,    48,
      49,     0,    14,     0,     0,     0,     0,    24,    66,     0,
      61,     0,     0,     0,     0,    15,     0,    18,    11,    14,
       0,    10,    52,    45,     0,    47,     0,     0,     0,     0,
       0,     0,    62,     0,    16,     0,     0,    19,    12,    13,
      50,     0,     0,    20,    17,     0,    21
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    12,    28,    29,    30,    31,   111,   104,   105,    32,
      33,    13,    19,    15,    20,    21,    56,    57,    52,    53
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -32
static const yytype_int16 yypact[] =
{
     112,     9,   -32,   -32,   112,   112,   112,     1,   -23,   -32,
     -32,   112,    10,    43,   231,   -32,   112,   112,    16,   122,
      11,   -32,   137,   196,    19,    50,    52,    53,    32,   -32,
     -23,   -32,   -32,   -32,   -32,   -32,   112,    56,   112,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
     112,    29,    68,   -32,   -11,    38,    66,   -32,   112,   -32,
     112,   112,   112,    72,    44,    41,   112,   -32,   108,   -32,
     231,   161,   184,   207,   207,   207,   207,   207,   207,   -31,
     -31,   -32,   -32,   112,   -32,    57,   112,   -32,   -32,   149,
     231,   173,    82,    84,   112,    -1,    62,   -32,   -32,   112,
      69,   112,   112,    83,    79,   -32,    58,   231,   -32,    82,
      65,   -32,   -32,   231,    16,   231,   219,    90,    -4,   112,
      81,    93,   -32,   112,    91,    95,   112,   231,   -32,   -32,
     231,    82,    59,   231,   -32,   112,   231
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -32,   -32,   -32,    88,   -32,   -32,   -32,    13,    -7,   -32,
     -32,   -32,     0,   -32,    61,    67,   -32,    14,   -32,    48
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_int16 yytable[] =
{
      14,    85,   108,   125,    24,    22,    23,    25,    26,    27,
      35,    34,   109,    49,    50,   110,    51,    54,    16,    55,
      17,    59,    18,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    83,    68,   126,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    93,    62,    63,    36,    64,    65,    66,    37,    69,
      89,    90,    91,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,   114,    38,    94,    84,    86,
      87,    92,    95,    51,    99,   103,   100,   106,   112,   118,
     117,   119,   121,   124,   107,   128,   129,   131,   132,   113,
     135,   115,   116,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     1,     2,     3,    67,   127,
      97,     4,   120,   130,   134,    88,   133,    96,   122,     5,
      58,    98,     6,     7,     0,   136,     8,     0,     0,     0,
       9,    10,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    11,    60,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,   101,     0,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,   102,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    61,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   123,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    49,    50,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-32)))

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-1)))

static const yytype_int16 yycheck[] =
{
       0,    12,     3,     7,     3,     5,     6,    30,    31,    32,
       0,    11,    13,    44,    45,    16,    16,    17,     9,     3,
      11,    10,    13,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     6,    36,    41,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,     7,    33,     3,    11,     3,     3,    25,    15,     3,
      60,    61,    62,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     6,    33,    33,    10,    41,
      14,     9,    41,    83,    27,     3,    86,     3,    26,    10,
       7,    33,    27,     3,    94,    14,     3,     6,     3,    99,
      41,   101,   102,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,     3,     4,     5,    30,   119,
      12,     9,   109,   123,   131,    58,   126,    66,   114,    17,
       8,    83,    20,    21,    -1,   135,    24,    -1,    -1,    -1,
      28,    29,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    42,    18,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    19,    -1,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    22,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    23,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    23,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     9,    17,    20,    21,    24,    28,
      29,    42,    48,    58,    59,    60,     9,    11,    13,    59,
      61,    62,    59,    59,     3,    30,    31,    32,    49,    50,
      51,    52,    56,    57,    59,     0,    11,    15,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    59,    65,    66,    59,     3,    63,    64,     8,    10,
      18,    23,    33,     3,     3,     3,    25,    50,    59,     3,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,     6,    10,    12,    41,    14,    62,    59,
      59,    59,     9,     7,    33,    41,    61,    12,    66,    27,
      59,    19,    22,     3,    54,    55,     3,    59,     3,    13,
      16,    53,    26,    59,     6,    59,    59,     7,    10,    33,
      54,    27,    64,    23,     3,     7,    41,    59,    14,     3,
      59,     6,     3,    59,    55,    41,    59
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

__attribute__((__unused__))
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
#else
static unsigned
yy_location_print_ (yyo, yylocp)
    FILE *yyo;
    YYLTYPE const * const yylocp;
#endif
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += fprintf (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += fprintf (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += fprintf (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += fprintf (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += fprintf (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {
      case 3: /* ID */
/* Line 1398 of yacc.c  */
#line 68 "tiger.yy"
        { delete (((*yyvaluep).sval)); };
/* Line 1398 of yacc.c  */
#line 1379 "tiger.tab.cc"
        break;
      case 4: /* STRING */
/* Line 1398 of yacc.c  */
#line 68 "tiger.yy"
        { delete (((*yyvaluep).sval)); };
/* Line 1398 of yacc.c  */
#line 1386 "tiger.tab.cc"
        break;

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;


/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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
       `yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1792 of yacc.c  */
#line 78 "tiger.yy"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); root=(yyval.exp); }
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 82 "tiger.yy"
    { (yyval.declist) = NULL; }
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 84 "tiger.yy"
    { (yyval.declist) = (yyvsp[(1) - (1)].declist); }
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 88 "tiger.yy"
    {	
				if ( dynamic_cast<absyn::TypeDec *>((yyvsp[(1) - (2)].dec)) != NULL ) {
					absyn::TypeDec		*t = (absyn::TypeDec *)(yyvsp[(1) - (2)].dec);
					if ( dynamic_cast<const absyn::TypeDec *>((yyvsp[(2) - (2)].declist)->getHead()) != NULL ) {
						t->setNext( (absyn::TypeDec *)((yyvsp[(2) - (2)].declist)->getHead()) );
						(yyval.declist) = new absyn::DecList(t, (absyn::DecList *)(yyvsp[(2) - (2)].declist)->getRest());
					}
					else
						(yyval.declist) = new absyn::DecList((yyvsp[(1) - (2)].dec), (yyvsp[(2) - (2)].declist));		
				}
				else if ( dynamic_cast<absyn::FunctionDec *>((yyvsp[(1) - (2)].dec)) != NULL ) { 
					absyn::FunctionDec*		f = (absyn::FunctionDec *)(yyvsp[(1) - (2)].dec);
					if ( dynamic_cast<const absyn::FunctionDec *>((yyvsp[(2) - (2)].declist)->getHead()) != NULL ) {
						f->setNext( (absyn::FunctionDec *)((yyvsp[(2) - (2)].declist)->getHead()) );
						(yyval.declist) = new absyn::DecList(f, (absyn::DecList *)(yyvsp[(2) - (2)].declist)->getRest());
					}
					else
						(yyval.declist) = new absyn::DecList((yyvsp[(1) - (2)].dec), (yyvsp[(2) - (2)].declist));		
				} 
				else 
					(yyval.declist) = new absyn::DecList((yyvsp[(1) - (2)].dec), (yyvsp[(2) - (2)].declist));		
			}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 111 "tiger.yy"
    { (yyval.declist) = new absyn::DecList((yyvsp[(1) - (1)].dec), NULL); }
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 114 "tiger.yy"
    { (yyval.dec) = (yyvsp[(1) - (1)].dec); }
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 116 "tiger.yy"
    { (yyval.dec) = (yyvsp[(1) - (1)].dec); }
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 118 "tiger.yy"
    { (yyval.dec) = (yyvsp[(1) - (1)].dec); }
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 122 "tiger.yy"
    {	
				(yyval.dec) = new absyn::TypeDec((yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, *(yyvsp[(2) - (4)].sval), (yyvsp[(4) - (4)].ty), NULL);
			}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 128 "tiger.yy"
    {	(yyval.ty) = new absyn::NameTy((yylsp[(1) - (1)]).first_line, (yylsp[(1) - (1)]).first_column, *(yyvsp[(1) - (1)].sval));	}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 130 "tiger.yy"
    {	(yyval.ty) = new absyn::RecordTy((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(2) - (3)].fieldlist));	}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 132 "tiger.yy"
    {	(yyval.ty) = new absyn::ArrayTy((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, *(yyvsp[(3) - (3)].sval));
			}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 136 "tiger.yy"
    {	(yyval.fieldlist) = NULL;	}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 138 "tiger.yy"
    {	(yyval.fieldlist) = (yyvsp[(1) - (1)].fieldlist);	}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 141 "tiger.yy"
    {	(yyval.fieldlist) = new absyn::FieldList((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, *(yyvsp[(1) - (3)].sval), *(yyvsp[(3) - (3)].sval), NULL);	}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 143 "tiger.yy"
    {	(yyval.fieldlist) = new absyn::FieldList((yylsp[(1) - (5)]).first_line, (yylsp[(1) - (5)]).first_column, *(yyvsp[(1) - (5)].sval), *(yyvsp[(3) - (5)].sval), (yyvsp[(5) - (5)].fieldlist));	}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 147 "tiger.yy"
    {	(yyval.dec) = new absyn::VarDec((yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, *(yyvsp[(2) - (4)].sval), NULL, (yyvsp[(4) - (4)].exp));	}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 149 "tiger.yy"
    {	(yyval.dec) = new absyn::VarDec(	(yylsp[(1) - (6)]).first_line, (yylsp[(1) - (6)]).first_column, 
									*(yyvsp[(2) - (6)].sval), 
									new absyn::NameTy((yylsp[(4) - (6)]).first_line, (yylsp[(4) - (6)]).first_column, *(yyvsp[(4) - (6)].sval)),
									(yyvsp[(6) - (6)].exp));
			}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 156 "tiger.yy"
    {	(yyval.dec) = new absyn::FunctionDec((yylsp[(1) - (7)]).first_line, (yylsp[(1) - (7)]).first_column,
										*(yyvsp[(2) - (7)].sval),
										(yyvsp[(4) - (7)].fieldlist),
										NULL,
										(yyvsp[(7) - (7)].exp),
										NULL);
			}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 164 "tiger.yy"
    {	(yyval.dec) = new absyn::FunctionDec((yylsp[(1) - (9)]).first_line, (yylsp[(1) - (9)]).first_column,
										*((yyvsp[(2) - (9)].sval)),
										(yyvsp[(4) - (9)].fieldlist),
										new absyn::NameTy((yylsp[(7) - (9)]).first_line, (yylsp[(7) - (9)]).first_column, *(yyvsp[(7) - (9)].sval)),
										(yyvsp[(9) - (9)].exp),
										NULL);
			}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 174 "tiger.yy"
    {	(yyval.var) = new absyn::SimpleVar((yylsp[(1) - (1)]).first_line, (yylsp[(1) - (1)]).first_column, *(yyvsp[(1) - (1)].sval));	}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 176 "tiger.yy"
    {	(yyval.var) = new absyn::FieldVar((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].var), *(yyvsp[(3) - (3)].sval));	}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 178 "tiger.yy"
    {	(yyval.var) = new absyn::SubscriptVar((yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, (yyvsp[(1) - (4)].var), (yyvsp[(3) - (4)].exp));	}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 180 "tiger.yy"
    {	(yyval.var) = new absyn::SubscriptVar((yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, 
											new absyn::SimpleVar((yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, *(yyvsp[(1) - (4)].sval)), 
											(yyvsp[(3) - (4)].exp));	
			}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 187 "tiger.yy"
    {	(yyval.exp) = new absyn::VarExp( (yylsp[(1) - (1)]).first_line, (yylsp[(1) - (1)]).first_column, (yyvsp[(1) - (1)].var) );	}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 189 "tiger.yy"
    {	(yyval.exp) = new absyn::OpExp( (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::PLUS, (yyvsp[(3) - (3)].exp) );	}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 191 "tiger.yy"
    {	(yyval.exp) = new absyn::OpExp( (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::MINUS, (yyvsp[(3) - (3)].exp) );	}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 193 "tiger.yy"
    {	(yyval.exp) = new absyn::OpExp( (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::MUL, (yyvsp[(3) - (3)].exp) );	}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 195 "tiger.yy"
    {	(yyval.exp) = new absyn::OpExp( (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::DIV, (yyvsp[(3) - (3)].exp) );	}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 197 "tiger.yy"
    {	(yyval.exp)= new absyn::OpExp(	(yylsp[(1) - (2)]).first_line, (yylsp[(1) - (2)]).first_column,
										new absyn::IntExp((yylsp[(1) - (2)]).first_line, (yylsp[(1) - (2)]).first_column, 0), 
										absyn::OpExp::MINUS,
										(yyvsp[(2) - (2)].exp) );	
			}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 203 "tiger.yy"
    {	(yyval.exp) = (yyvsp[(1) - (1)].exp);	}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 205 "tiger.yy"
    {	(yyval.exp) = new absyn::IntExp((yylsp[(1) - (1)]).first_line, (yylsp[(1) - (1)]).first_column, (yyvsp[(1) - (1)].ival));	}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 207 "tiger.yy"
    {	(yyval.exp) = new absyn::StringExp((yylsp[(1) - (1)]).first_line, (yylsp[(1) - (1)]).first_column, *(yyvsp[(1) - (1)].sval));	}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 209 "tiger.yy"
    {	(yyval.exp) = new absyn::CallExp((yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, *(yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].explist));	}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 211 "tiger.yy"
    {	(yyval.exp) = new absyn::OpExp( (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::EQ, (yyvsp[(3) - (3)].exp) );	}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 213 "tiger.yy"
    {	(yyval.exp) = new absyn::OpExp( (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::NE, (yyvsp[(3) - (3)].exp) );	}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 215 "tiger.yy"
    {	(yyval.exp) = new absyn::OpExp( (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::LT, (yyvsp[(3) - (3)].exp) );	}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 217 "tiger.yy"
    {	(yyval.exp) = new absyn::OpExp( (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::LE, (yyvsp[(3) - (3)].exp) );	}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 219 "tiger.yy"
    {	(yyval.exp) = new absyn::OpExp( (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::GT, (yyvsp[(3) - (3)].exp) );	}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 221 "tiger.yy"
    {	(yyval.exp) = new absyn::OpExp( (yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), absyn::OpExp::GE, (yyvsp[(3) - (3)].exp) );	}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 223 "tiger.yy"
    {	(yyval.exp) = new absyn::IfExp((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].exp), 
										new absyn::IntExp((yylsp[(3) - (3)]).last_line, (yylsp[(3) - (3)]).last_column, 0));	}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 226 "tiger.yy"
    {	(yyval.exp) = new absyn::IfExp((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].exp),  
										new absyn::IntExp((yylsp[(1) - (3)]).last_line, (yylsp[(1) - (3)]).last_column, 1), (yyvsp[(3) - (3)].exp));	}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 229 "tiger.yy"
    {	(yyval.exp) = new absyn::RecordExp((yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, *(yyvsp[(1) - (4)].sval), (yyvsp[(3) - (4)].fieldexplist));	}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 232 "tiger.yy"
    {	(yyval.exp) = new absyn::ArrayExp((yylsp[(1) - (6)]).first_line, (yylsp[(1) - (6)]).first_column, *(yyvsp[(1) - (6)].sval), (yyvsp[(3) - (6)].exp), (yyvsp[(6) - (6)].exp));	}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 234 "tiger.yy"
    {	(yyval.exp) = new absyn::AssignExp((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(1) - (3)].var), (yyvsp[(3) - (3)].exp));	}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 236 "tiger.yy"
    {	(yyval.exp) = new absyn::IfExp((yylsp[(1) - (6)]).first_line, (yylsp[(1) - (6)]).first_column, (yyvsp[(2) - (6)].exp), (yyvsp[(4) - (6)].exp), (yyvsp[(6) - (6)].exp));	}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 238 "tiger.yy"
    {	(yyval.exp) = new absyn::IfExp((yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, (yyvsp[(2) - (4)].exp), (yyvsp[(4) - (4)].exp));	}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 240 "tiger.yy"
    {	(yyval.exp) = new absyn::WhileExp((yylsp[(1) - (4)]).first_line, (yylsp[(1) - (4)]).first_column, (yyvsp[(2) - (4)].exp), (yyvsp[(4) - (4)].exp));	}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 242 "tiger.yy"
    {	(yyval.exp) = new absyn::ForExp(	(yylsp[(1) - (8)]).first_line, (yylsp[(1) - (8)]).first_column,
										new absyn::VarDec(	(yylsp[(2) - (8)]).first_line, (yylsp[(2) - (8)]).first_column,
															*(yyvsp[(2) - (8)].sval),
															NULL,
															(yyvsp[(4) - (8)].exp) ),
										(yyvsp[(6) - (8)].exp),
										(yyvsp[(8) - (8)].exp) );	
			}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 251 "tiger.yy"
    {	(yyval.exp) = new absyn::BreakExp((yylsp[(1) - (1)]).first_line, (yylsp[(1) - (1)]).first_column);	}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 253 "tiger.yy"
    {	
				if ( (yyvsp[(4) - (5)].explist) == NULL )
					(yyval.exp) = new absyn::LetExp(	(yylsp[(1) - (5)]).first_line, (yylsp[(1) - (5)]).first_column, 
											(yyvsp[(2) - (5)].declist), 
											new absyn::SeqExp((yylsp[(4) - (5)]).first_line, (yylsp[(4) - (5)]).first_column, NULL) );
				else if ( (yyvsp[(4) - (5)].explist)->getRest() == NULL )
					(yyval.exp) = new absyn::LetExp(	(yylsp[(1) - (5)]).first_line, (yylsp[(1) - (5)]).first_column, 
											(yyvsp[(2) - (5)].declist), 
											(absyn::Exp *)(yyvsp[(4) - (5)].explist)->getHead());
				else
					(yyval.exp) = new absyn::LetExp(	(yylsp[(1) - (5)]).first_line, (yylsp[(1) - (5)]).first_column, 
											(yyvsp[(2) - (5)].declist), 
											new absyn::SeqExp((yylsp[(4) - (5)]).first_line, (yylsp[(4) - (5)]).first_column,(yyvsp[(4) - (5)].explist)));	
			}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 268 "tiger.yy"
    {	(yyval.exp) = new absyn::NilExp((yylsp[(1) - (1)]).first_line, (yylsp[(1) - (1)]).first_column);	}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 272 "tiger.yy"
    {	(yyval.exp) = new absyn::SeqExp((yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column, (yyvsp[(2) - (3)].explist));	}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 276 "tiger.yy"
    {	(yyval.explist) = NULL;	}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 278 "tiger.yy"
    {	(yyval.explist) = (yyvsp[(1) - (1)].explist);	}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 282 "tiger.yy"
    {	(yyval.explist) = new absyn::ExpList((yyvsp[(1) - (1)].exp), NULL);	}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 284 "tiger.yy"
    {	(yyval.explist) = new absyn::ExpList((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].explist));	}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 288 "tiger.yy"
    {	(yyval.fieldexplist) = NULL;	}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 290 "tiger.yy"
    {	(yyval.fieldexplist) = (yyvsp[(1) - (1)].fieldexplist);	}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 294 "tiger.yy"
    {	(yyval.fieldexplist) = new absyn::FieldExpList(	(yylsp[(1) - (3)]).first_line, (yylsp[(1) - (3)]).first_column,
													*(yyvsp[(1) - (3)].sval),
													(yyvsp[(3) - (3)].exp),
													NULL );	
				}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 300 "tiger.yy"
    {	(yyval.fieldexplist) = new absyn::FieldExpList(	(yylsp[(1) - (5)]).first_line, (yylsp[(1) - (5)]).first_column,
													*(yyvsp[(1) - (5)].sval),
													(yyvsp[(3) - (5)].exp),
													(yyvsp[(5) - (5)].fieldexplist) );	
				}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 308 "tiger.yy"
    {	(yyval.explist) = NULL;	}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 310 "tiger.yy"
    {	(yyval.explist) = (yyvsp[(1) - (1)].explist);	}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 314 "tiger.yy"
    {	(yyval.explist) = new absyn::ExpList((yyvsp[(1) - (1)].exp), NULL);	}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 316 "tiger.yy"
    {	(yyval.explist) = new absyn::ExpList((yyvsp[(1) - (3)].exp), (yyvsp[(3) - (3)].explist));	}
    break;


/* Line 1792 of yacc.c  */
#line 2169 "tiger.tab.cc"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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
      if (!yypact_value_is_default (yyn))
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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


/* Line 2055 of yacc.c  */
#line 319 "tiger.yy"

#include <FlexLexer.h>
extern yyFlexLexer	lexer;
int yylex(void)
{
	return lexer.yylex();
}

void yyerror(char *s)
{
	extern int tokenPos;
	extern ErrorMsg errormsg;
	errormsg.error(tokenPos, s);
}

void yyerror(int lineno, int column, char *s)
{
	extern int tokenPos;
	extern ErrorMsg errormsg;
	errormsg.error(lineno, column, s);
}

void yyerror(YYLTYPE loc, char *s)
{
	extern int tokenPos;
	extern ErrorMsg errormsg;
	errormsg.error(loc.first_line, loc.first_column, s);
}