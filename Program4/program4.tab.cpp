/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 26 "program4.ypp" /* yacc.c:339  */


#include <iostream>
#include <FlexLexer.h>
#include "node.hpp"

//using namespace std;
using std::cerr;
using std::cout;
using std::endl;
using std::string;

/*
 * These are declared in "main" so that we can pass values between
 * the two portions of the program.
 */

extern Node *tree;
extern yyFlexLexer scanner;
extern void yyadderror(const char *msg);

/* 
 * Need to do this define, an "acceptable" hack to interface
 * the C++ scanner with the C parser. 
 * I can still use things like scanner.YYtext() here if I want. Just that
 * bison does not know about cpp scanners. 
 */

#define yylex() scanner.yylex()

// need the function prototype for the parser.

void yyerror(const char *);


/*
 * There are lots of examples that have multiple types in the union here.
 * Do not do that. Keep it simple, one type. This is the type that you use
 * in the definitions for %type tokens.
 */


#line 109 "program4.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
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
   by #include "program4.tab.hpp".  */
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
#line 69 "program4.ypp" /* yacc.c:355  */

  Node *ttype;

#line 195 "program4.tab.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PROGRAM4_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 212 "program4.tab.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   457

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  198

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   106,   106,   114,   118,   123,   128,   132,   136,   140,
     144,   148,   152,   156,   160,   167,   171,   176,   180,   187,
     192,   196,   200,   205,   209,   215,   219,   224,   228,   232,
     238,   244,   251,   255,   260,   264,   268,   272,   277,   281,
     286,   291,   295,   299,   303,   308,   312,   317,   321,   328,
     332,   337,   341,   345,   349,   353,   357,   361,   365,   369,
     373,   377,   382,   386,   390,   394,   398,   402,   407,   411,
     416,   420,   425,   430,   434,   438,   442,   446,   450,   454,
     458,   462,   466,   470,   474,   479,   483,   487,   491,   496,
     500,   505,   510,   514,   519,   523,   527,   532,   536,   540,
     544,   548,   552,   557,   561,   565,   570,   574,   578,   582
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "ID", "INT", "VOID", "CLASS",
  "NEW", "PRINT", "READ", "RETURN", "WHILE", "IF", "ELSE", "THIS", "NULLT",
  "LPAREN", "RPAREN", "LBRACK", "RBRACK", "LBRACE", "RBRACE", "SEMI",
  "DOT", "COMMA", "ASSIGN", "EQ", "NE", "GE", "LE", "GT", "LT", "OR",
  "TIMES", "DIV", "MOD", "AND", "PLUS", "MINUS", "NOT", "THEN", "$accept",
  "input", "program", "classdec", "classbody", "vardecs", "vardec",
  "typeid", "type", "simpletype", "constdecs", "constdec", "methdecs",
  "methdec", "paramlist", "param", "block", "locvardecs", "locvardec",
  "statements", "statement", "name", "arglist", "condstmt", "ifstmt",
  "exp", "newexp", "bracketexps", "bracketexp", "multibrackets", "unaryop",
  "relationop", "sumop", "productop", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296
};
# endif

#define YYPACT_NINF -102

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-102)))

#define YYTABLE_NINF -25

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,    35,    43,     6,  -102,     4,  -102,  -102,    57,    44,
    -102,  -102,   171,   114,    62,    61,    95,  -102,    94,  -102,
      46,   105,  -102,   173,  -102,    22,  -102,  -102,    71,  -102,
    -102,    12,    92,   134,   134,   124,   126,  -102,  -102,   206,
     221,    69,  -102,  -102,   137,  -102,   129,  -102,   251,    62,
    -102,  -102,   128,     5,   150,   122,   169,   170,   157,  -102,
    -102,   177,  -102,   263,  -102,   361,  -102,    34,  -102,   179,
     188,  -102,    -7,  -102,  -102,   213,    84,  -102,  -102,   255,
    -102,   188,    72,  -102,  -102,   132,   157,  -102,   165,  -102,
     157,    17,   223,  -102,   231,  -102,  -102,  -102,  -102,    91,
     388,  -102,   231,   231,   231,   231,   157,  -102,  -102,  -102,
     376,  -102,  -102,   181,   238,   231,   391,  -102,   188,   159,
    -102,   188,    99,  -102,  -102,   188,   325,  -102,   222,   103,
     418,   227,  -102,   157,   232,   261,   198,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,   231,   231,   231,  -102,   283,   305,  -102,   226,   104,
     157,   405,  -102,  -102,  -102,  -102,   188,  -102,  -102,  -102,
     228,   231,   214,   239,  -102,  -102,  -102,   109,   269,   290,
     127,   391,   391,  -102,   240,   157,  -102,  -102,  -102,   418,
    -102,   125,   134,  -102,  -102,  -102,  -102,  -102
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,     0,     1,     4,     0,     0,
       5,    14,     0,    24,    23,     0,     0,    13,     0,    15,
       0,     0,    20,     0,    25,     0,    32,    29,     0,    18,
      31,     0,     0,    22,    21,     0,     0,    10,    16,     0,
       0,     0,    17,    19,     0,    11,     0,    26,     0,    24,
      12,    33,     0,    63,     0,     0,     0,     0,    62,    44,
      51,     0,    61,     0,    45,     0,    49,     0,    57,    70,
       0,    40,     0,    38,    92,     0,     0,    30,     9,     0,
       8,     0,     0,     7,    48,     0,    66,    89,     0,    74,
      63,     0,     0,    75,     0,    60,    94,    95,    96,    73,
       0,    79,     0,     0,     0,     0,    65,    47,    42,    46,
       0,    43,    50,     0,     0,     0,     0,    28,     0,     0,
      93,     0,     0,     6,    35,     0,     0,    90,     0,     0,
      68,    24,    23,     0,     0,     0,     0,    59,    97,    98,
     100,    99,   102,   101,   105,   106,   107,   108,   109,   103,
     104,     0,     0,     0,    80,     0,     0,    41,     0,     0,
      64,     0,    71,    27,    39,    37,     0,    34,    91,    56,
       0,     0,     0,    87,    78,    84,    77,     0,    81,    82,
      83,     0,     0,    54,     0,    67,    52,    36,    55,    69,
      86,     0,    88,    76,    58,    72,    53,    85
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,  -102,   259,  -102,  -102,   247,     1,  -102,   175,
     262,    29,    -3,   -17,   -35,   162,   -11,  -102,   219,   220,
     -63,   -25,  -101,  -102,  -102,   -48,  -102,   -54,   -72,   -14,
    -102,  -102,  -102,  -102
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    10,    18,    19,    46,    21,    22,
      23,    24,    25,    26,    72,    73,    62,    63,    64,    65,
      66,    99,   129,    68,    69,   130,   101,    86,    87,    33,
     102,   151,   152,   153
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      34,    30,   112,    67,   106,     8,    82,   100,    51,   -24,
      20,   118,   159,     1,   127,    40,    49,    14,   119,    20,
      48,   131,   132,    51,    85,     9,    49,    14,    15,    61,
      70,    51,    71,    30,   127,   177,    79,   126,    67,     5,
      67,   122,    71,     6,    50,    12,   135,   112,    13,    14,
      15,   113,    47,   162,   154,   155,   156,   126,   114,   117,
     115,    16,    51,    41,    61,    35,    17,   161,    47,    42,
     124,   191,    52,    49,    14,    53,    14,    71,    11,   173,
      54,    32,    55,    56,    57,    67,    58,    81,    49,    14,
     125,    67,    28,    59,    60,    12,    36,   119,    13,    14,
      15,   127,   121,   178,   179,   180,   185,   163,   136,    43,
     165,    16,    74,   127,   167,   114,    37,   166,   194,   195,
      71,   170,   184,   189,   119,    89,    90,   193,   171,   171,
      91,    31,    92,    32,   171,    89,    90,    58,    93,    94,
      91,    76,    92,   197,    77,    95,    41,    58,    93,    94,
     171,    84,    74,    75,    27,   187,    67,    67,    28,   192,
      96,    97,    98,    49,    14,   149,   150,    88,    89,    90,
      96,    97,    98,    91,    44,    92,   105,    13,    14,    15,
      58,    93,    94,   128,    89,    90,   103,   104,    27,    91,
      16,    92,    28,   116,    29,    45,    58,    93,    94,   158,
     107,    89,    90,    96,    97,    98,    91,    44,    92,    28,
      13,    14,    15,    58,    93,    94,   176,    89,    90,    96,
      97,    98,    91,    16,    92,    49,    14,    15,    78,    58,
      93,    94,   190,   120,    89,    90,    96,    97,    98,    91,
     134,    92,   160,    80,   172,   169,    58,    93,    94,   183,
     174,   188,    96,    97,    98,    49,    14,    15,    85,    49,
      14,    15,     7,   196,    52,    38,   133,    53,    14,    96,
      97,    98,    54,    83,    55,    56,    57,   123,    58,   175,
      39,   164,   109,   110,    28,   108,    60,     0,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   181,   144,   145,   146,   147,   148,   149,   150,     0,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   182,   145,   146,   147,   148,   149,   150,
       0,     0,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   168,     0,     0,     0,     0,
       0,     0,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,    90,     0,     0,     0,     0,
      54,     0,    55,    56,    57,     0,    58,     0,     0,     0,
      90,     0,    28,   111,    60,    54,     0,    55,    56,    57,
       0,    58,     0,     0,     0,    90,     0,    28,   157,    60,
      54,     0,    55,    56,    57,     0,    58,     0,     0,     0,
       0,   137,    28,     0,    60,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   186,     0,
       0,     0,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150
};

static const yytype_int16 yycheck[] =
{
      14,    12,    65,    28,    58,     1,    41,    55,    25,     4,
       9,    18,   113,     7,    86,    18,     4,     5,    25,    18,
      23,     4,     5,    40,    19,    21,     4,     5,     6,    28,
      18,    48,    31,    44,   106,   136,    39,    85,    63,     4,
      65,    76,    41,     0,    22,     1,    94,   110,     4,     5,
       6,    17,    23,   116,   102,   103,   104,   105,    24,    70,
      26,    17,    79,    17,    63,     4,    22,   115,    39,    23,
      81,   172,     1,     4,     5,     4,     5,    76,    21,   133,
       9,    19,    11,    12,    13,   110,    15,    18,     4,     5,
      18,   116,    21,    22,    23,     1,     1,    25,     4,     5,
       6,   173,    18,   151,   152,   153,   160,   118,    17,     4,
     121,    17,    20,   185,   125,    24,    22,    18,   181,   182,
     119,    18,    18,   171,    25,     3,     4,    18,    25,    25,
       8,    17,    10,    19,    25,     3,     4,    15,    16,    17,
       8,    17,    10,    18,    18,    23,    17,    15,    16,    17,
      25,    23,    20,    19,    17,   166,   181,   182,    21,   173,
      38,    39,    40,     4,     5,    38,    39,    17,     3,     4,
      38,    39,    40,     8,     1,    10,    19,     4,     5,     6,
      15,    16,    17,    18,     3,     4,    17,    17,    17,     8,
      17,    10,    21,    14,    23,    22,    15,    16,    17,    18,
      23,     3,     4,    38,    39,    40,     8,     1,    10,    21,
       4,     5,     6,    15,    16,    17,    18,     3,     4,    38,
      39,    40,     8,    17,    10,     4,     5,     6,    22,    15,
      16,    17,    18,    20,     3,     4,    38,    39,    40,     8,
      17,    10,     4,    22,    17,    23,    15,    16,    17,    23,
      18,    23,    38,    39,    40,     4,     5,     6,    19,     4,
       5,     6,     3,    23,     1,    18,    91,     4,     5,    38,
      39,    40,     9,    22,    11,    12,    13,    22,    15,    18,
      18,   119,    63,    63,    21,    22,    23,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    18,    33,    34,    35,    36,    37,    38,    39,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    18,    34,    35,    36,    37,    38,    39,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,     4,    -1,    -1,    -1,    -1,
       9,    -1,    11,    12,    13,    -1,    15,    -1,    -1,    -1,
       4,    -1,    21,    22,    23,     9,    -1,    11,    12,    13,
      -1,    15,    -1,    -1,    -1,     4,    -1,    21,    22,    23,
       9,    -1,    11,    12,    13,    -1,    15,    -1,    -1,    -1,
      -1,    23,    21,    -1,    23,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    43,    44,    45,     4,     0,    45,     1,    21,
      46,    21,     1,     4,     5,     6,    17,    22,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    17,    21,    23,
      58,    17,    19,    71,    71,     4,     1,    22,    48,    52,
      54,    17,    23,     4,     1,    22,    49,    53,    54,     4,
      22,    55,     1,     4,     9,    11,    12,    13,    15,    22,
      23,    49,    58,    59,    60,    61,    62,    63,    65,    66,
      18,    49,    56,    57,    20,    19,    17,    18,    22,    54,
      22,    18,    56,    22,    23,    19,    69,    70,    17,     3,
       4,     8,    10,    16,    17,    23,    38,    39,    40,    63,
      67,    68,    72,    17,    17,    19,    69,    23,    22,    60,
      61,    22,    62,    17,    24,    26,    14,    58,    18,    25,
      20,    18,    56,    22,    58,    18,    67,    70,    18,    64,
      67,     4,     5,    51,    17,    67,    17,    23,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    73,    74,    75,    67,    67,    67,    22,    18,    64,
       4,    67,    62,    58,    57,    58,    18,    58,    20,    23,
      18,    25,    17,    69,    18,    18,    18,    64,    67,    67,
      67,    18,    18,    23,    18,    69,    23,    58,    23,    67,
      18,    64,    71,    18,    62,    62,    23,    18
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    42,    43,    44,    44,    45,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    47,    47,    48,    48,    49,
      50,    50,    50,    51,    51,    52,    52,    53,    53,    53,
      53,    53,    54,    54,    55,    55,    55,    55,    56,    56,
      57,    58,    58,    58,    58,    59,    59,    60,    60,    61,
      61,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    63,    63,    63,    63,    63,    63,    64,    64,
      65,    65,    66,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    68,    68,    68,    68,    69,
      69,    70,    71,    71,    72,    72,    72,    73,    73,    73,
      73,    73,    73,    74,    74,    74,    75,    75,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     3,     5,     4,     4,     4,
       3,     3,     3,     2,     2,     1,     2,     2,     2,     2,
       1,     2,     2,     1,     1,     1,     2,     5,     4,     2,
       3,     2,     1,     2,     5,     4,     6,     5,     1,     3,
       1,     4,     3,     3,     2,     1,     2,     2,     2,     1,
       2,     1,     4,     5,     4,     5,     4,     1,     5,     3,
       2,     1,     1,     1,     3,     2,     2,     4,     1,     3,
       1,     3,     5,     1,     1,     1,     4,     3,     3,     1,
       2,     3,     3,     3,     3,     5,     4,     3,     4,     1,
       2,     3,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
     '$$ = $1'.

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
#line 106 "program4.ypp" /* yacc.c:1646  */
    {
                  /* 
                  * We have reached the end of the input and
                  * now we are passing the results to the main function.
                  */
                  tree=(yyvsp[0].ttype);
                  }
#line 1483 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 114 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<program> --> <classdec>\n");
                  }
#line 1492 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 118 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<program> --> <program> <classdec>\n");
                  }
#line 1501 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 123 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<classdec> --> CLASS ID <classbody>\n");
                  }
#line 1510 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 128 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-3].ttype), (yyvsp[-2].ttype), (yyvsp[-1].ttype));
                  (yyval.ttype)->setval("<classbody> --> { <vardecs> <constdecs> <methdecs> }\n");
                  }
#line 1519 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 132 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-2].ttype), (yyvsp[-1].ttype));
                  (yyval.ttype)->setval("<classbody> --> { <constdecs> <methdecs> }\n");
                  }
#line 1528 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 136 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-2].ttype), (yyvsp[-1].ttype));
                  (yyval.ttype)->setval("<classbody> --> { <vardecs> <methdecs> }\n");
                  }
#line 1537 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 140 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-2].ttype), (yyvsp[-1].ttype));
                  (yyval.ttype)->setval("<classbody> --> { <vardecs> <constdecs> }\n");
                  }
#line 1546 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 144 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype));
                  (yyval.ttype)->setval("<classbody> --> { <vardecs> }\n");
                  }
#line 1555 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 148 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype));
                  (yyval.ttype)->setval("<classbody> --> { <constdecs> }\n");
                  }
#line 1564 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 152 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype));
                  (yyval.ttype)->setval("<classbody> --> { <methdecs> }\n");
                  }
#line 1573 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 156 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<classbody> --> {  }\n");
                  }
#line 1582 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 160 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<classbody> --> error {\n");
                  yyadderror("Error declaring class");
                  yyerrok;
                  }
#line 1593 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 167 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<vardecs> --> <vardec>\n");
                  }
#line 1602 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 171 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<vardecs> --> <vardecs> <vardec>\n");
                  }
#line 1611 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 176 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype)); 
                  (yyval.ttype)->setval("<vardec> --> <typeid> SEMI\n");
                  }
#line 1620 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 180 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<vardec> --> error SEMI\n");
                  yyadderror("Error declaring variable");
                  yyerrok;
                  }
#line 1631 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 187 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype), (yyvsp[0].ttype)); 
                  (yyval.ttype)->setval("<typeid> --> <type> ID \n");
                  }
#line 1640 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 192 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<type> --> <simpletype>\n");
                  }
#line 1649 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 196 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node( (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<type> --> INT <multibrackets>\n");
                  }
#line 1658 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 200 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<type> --> ID <multibrackets>\n");
                  }
#line 1667 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 205 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<simpletype> --> INT\n");
                  }
#line 1676 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 209 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<simpletype> --> ID\n");
                  }
#line 1685 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 215 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<constdecs> --> <constdec>\n");
                  }
#line 1694 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 219 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<constdecs> --> <constdecs> <constdec>\n");
                  }
#line 1703 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 224 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-4].ttype), (yyvsp[-2].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<constdec> --> ID ( <paramlist> ) <block>\n");
                  }
#line 1712 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 228 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-3].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<constdec> --> ID ( ) <block>\n");
                  }
#line 1721 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 232 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<constdec> --> error {\n");
                  yyadderror("Error declaring constructor name");
                  yyerrok;
                  }
#line 1732 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 238 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<constdec> --> error }\n");
                  yyadderror("Error declaring parameters");
                  yyerrok;
                  }
#line 1743 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 244 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<constdec> --> error <block>\n");
                  yyadderror("Error declaring constructor, missing right parenthesis");
                  yyerrok;
                  }
#line 1754 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 251 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<methdecs> --> <methdec>\n");
                  }
#line 1763 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 255 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<methdecs> --> <methdecs> <methdec>\n");
                  }
#line 1772 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 260 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-4].ttype), (yyvsp[-2].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<methdec> --> <typeid> ( <paramlist> ) <block>\n");
                  }
#line 1781 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 264 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-3].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<methdec> --> <typeid> ( ) <block>\n");
                  }
#line 1790 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 268 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node( (yyvsp[-4].ttype), (yyvsp[-2].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<methdec> --> VOID ( <paramlist> ) <block>\n");
                  }
#line 1799 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 272 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-3].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<methdec> --> VOID ( ) <block>\n");
                  }
#line 1808 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 277 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<paramlist> --> <param>\n");
                  }
#line 1817 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 281 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-2].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<paramlist> --> <paramlist> , <param>\n");
                  }
#line 1826 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 286 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<param> --> <typeid>\n");
                  }
#line 1835 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 291 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-2].ttype), (yyvsp[-1].ttype));
                  (yyval.ttype)->setval("<block> --> LBRACE <locvardecs> <statements> RBRACE\n");
                  }
#line 1844 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 295 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype));
                  (yyval.ttype)->setval("<block> --> LBRACE  <statements> RBRACE\n");
                  }
#line 1853 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 299 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype));
                  (yyval.ttype)->setval("<block> --> LBRACE <locvardecs> RBRACE\n");
                  }
#line 1862 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 303 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<block> --> LBRACE RBRACE\n");
                  }
#line 1871 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 308 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<locvardecs> --> <locvardec>\n");
                  }
#line 1880 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 312 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<locvardecs> --> <locvardecs> <locvardec>\n");
                  }
#line 1889 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 317 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype));
                  (yyval.ttype)->setval("<locvardec> --> <typeid> SEMI\n");
                  }
#line 1898 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 321 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<locvardec> --> error SEMI\n");
                  yyadderror("Error declaring local variable");
                  yyerrok;
                  }
#line 1909 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 328 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<statements> --> <statement>\n");
                  }
#line 1918 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 332 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<statements> --> <statements> <statement>\n");
                  }
#line 1927 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 337 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<statement> --> ;\n");
                  }
#line 1936 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 341 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-3].ttype), (yyvsp[-1].ttype));
                  (yyval.ttype)->setval("<statement> --> <name> = <exp> ;\n");
                  }
#line 1945 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 345 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-4].ttype), (yyvsp[-2].ttype));
                  (yyval.ttype)->setval("<statement> --> <name> ( <arglist> ) ;\n");
                  }
#line 1954 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 349 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-3].ttype));
                  (yyval.ttype)->setval("<statement> --> <name> ( ) ;\n");
                  }
#line 1963 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 353 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-2].ttype));
                  (yyval.ttype)->setval("<statement> --> PRINT ( <arglist> ) ;\n");
                  }
#line 1972 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 357 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<statement> --> PRINT ( ) ;\n");
                  }
#line 1981 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 361 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<statement> --> <condstmt>\n");
                  }
#line 1990 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 365 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-2].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<statement> --> WHILE ( <exp> ) <statement>\n");
                  }
#line 1999 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 369 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype));
                  (yyval.ttype)->setval("<statement> --> RETURN <exp> ;\n");
                  }
#line 2008 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 373 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<statement> --> RETURN ;\n");
                  }
#line 2017 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 377 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<statement> --> <block>\n");
                  }
#line 2026 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 382 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<name> --> THIS\n"); 
                  }
#line 2035 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 386 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<name> --> ID\n");
                  }
#line 2044 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 390 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-2].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<name> --> <name> DOT ID\n");
                  }
#line 2053 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 394 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<name> --> THIS <bracketexps>\n"); 
                  }
#line 2062 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 398 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<name> --> ID <bracketexps>\n");
                  }
#line 2071 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 402 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-3].ttype), (yyvsp[-1].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<name> --> <name> DOT ID <bracketexps>\n");
                  }
#line 2080 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 407 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<arglist> --> <exp>\n");
                  }
#line 2089 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 411 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-2].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<arglist> --> <arglist> , <exp>\n");
                  }
#line 2098 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 416 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<condstmt> --> <ifstmt>\n");
                  }
#line 2107 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 420 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-2].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<condstmt> --> <ifstmt> ELSE <statement>\n");
                  }
#line 2116 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 425 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-2].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<ifstmt> --> IF ( <exp> ) <statement>\n");
                  }
#line 2125 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 430 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<exp> --> <name>\n");
                  }
#line 2134 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 434 "program4.ypp" /* yacc.c:1646  */
    {      
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<exp> --> NUMBER\n"); 
                  }
#line 2143 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 438 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<exp> --> NULL\n"); 
                  }
#line 2152 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 442 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-3].ttype), (yyvsp[-1].ttype));
                  (yyval.ttype)->setval("<exp> --> <name> ( <arglist> )\n"); 
                  }
#line 2161 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 446 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-2].ttype));
                  (yyval.ttype)->setval("<exp> --> <name> ( )\n"); 
                  }
#line 2170 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 450 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<exp> --> READ ( )\n"); 
                  }
#line 2179 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 454 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<exp> --> <newexp>\n");
                  }
#line 2188 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 458 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<exp> --> <unaryop> <exp>\n");
                  }
#line 2197 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 462 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-2].ttype), (yyvsp[-1].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<exp> --> <exp> <relationop> <exp>\n");
                  }
#line 2206 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 466 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-2].ttype), (yyvsp[-1].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<exp> --> <exp> <sumop> <exp>\n");
                  }
#line 2215 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 470 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-2].ttype), (yyvsp[-1].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<exp> --> <exp> <productop> <exp>\n");
                  }
#line 2224 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 474 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype));
                  (yyval.ttype)->setval("<exp> --> <exp> <relationop> <exp>\n");
                  }
#line 2233 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 479 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-3].ttype), (yyvsp[-1].ttype));
                  (yyval.ttype)->setval("<newexp> --> NEW ID ( <arglist> )\n");
                  }
#line 2242 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 483 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-2].ttype));
                  (yyval.ttype)->setval("<newexp> --> NEW ID ( )\n");
                  }
#line 2251 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 487 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<newexp> --> NEW <simpletype> <bracketexps>\n");
                  }
#line 2260 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 491 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-2].ttype), (yyvsp[-1].ttype), (yyvsp[0].ttype));
                  (yyval.ttype)->setval("<newexp> --> NEW <simpletype> <bracketexps> <multibrackets>\n");
                  }
#line 2269 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 496 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[0].ttype));
                  (yyval.ttype)->setval("<bracketexps> --> <bracketexp>\n");
                  }
#line 2278 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 500 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-1].ttype),(yyvsp[0].ttype));
                  (yyval.ttype)->setval("<bracketexps> --> <bracketexps> <bracketexp>\n");
                  }
#line 2287 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 505 "program4.ypp" /* yacc.c:1646  */
    {     
                  (yyval.ttype)=new Node((yyvsp[-1].ttype));
                  (yyval.ttype)->setval("<bracketexp> --> [ <exp> ]\n");
                  }
#line 2296 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 510 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<multibrackets> --> [ ]\n");
                  }
#line 2305 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 514 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node((yyvsp[-2].ttype));
                  (yyval.ttype)->setval("<multibrackets> --> <multibrackets> [ ]\n");
                  }
#line 2314 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 519 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<unaryop> --> +\n");
                  }
#line 2323 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 523 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<unaryop> --> -\n");
                  }
#line 2332 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 527 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<unaryop> --> !\n");
                  }
#line 2341 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 532 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<relationop> --> ==\n");
                  }
#line 2350 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 536 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<relationop> --> !=\n");
                  }
#line 2359 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 540 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<relationop> --> <=\n");
                  }
#line 2368 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 544 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<relationop> --> >=\n");
                  }
#line 2377 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 548 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<relationop> --> <\n");
                  }
#line 2386 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 552 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<relationop> --> >\n");
                  }
#line 2395 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 557 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<sumop> --> +\n");
                  }
#line 2404 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 561 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<sumop> --> -\n");
                  }
#line 2413 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 565 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<sumop> --> ||\n");
                  }
#line 2422 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 570 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<productop> --> *\n");
                  }
#line 2431 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 574 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<productop> --> / \n");
                  }
#line 2440 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 578 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<productop> --> %\n");
                  }
#line 2449 "program4.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 582 "program4.ypp" /* yacc.c:1646  */
    {
                  (yyval.ttype)=new Node();
                  (yyval.ttype)->setval("<productop> --> &&\n");
                  }
#line 2458 "program4.tab.cpp" /* yacc.c:1646  */
    break;


#line 2462 "program4.tab.cpp" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 587 "program4.ypp" /* yacc.c:1906  */
