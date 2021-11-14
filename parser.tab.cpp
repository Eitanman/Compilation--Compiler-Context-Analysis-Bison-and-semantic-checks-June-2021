/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.ypp"

		#include "hw3_output.hpp"
		#include "utility.hpp"
		int yylex();
		void yyerror(const char*);
		extern int yylineno;
		#include <string>
        #include <list>
        #include <vector>
        #include <map>
        #include <stack>
		
		
        using std::string;
        using std::list;
        using std::vector;
        using std::map;
        using std::stack;

		vector<map<string,Symbol*>*> symbol_vector;
        map<string,Function*> functions;
        stack<int> offset_stack;
        stack<vector<Symbol*>*> symbol_stack;
        string latest_function = "";
        int in_while = 0;
        int in_switch = 0;

	

#line 101 "parser.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_NUM = 4,                        /* NUM  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_VOID = 6,                       /* VOID  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_BYTE = 8,                       /* BYTE  */
  YYSYMBOL_B = 9,                          /* B  */
  YYSYMBOL_BOOL = 10,                      /* BOOL  */
  YYSYMBOL_TRUE = 11,                      /* TRUE  */
  YYSYMBOL_FALSE = 12,                     /* FALSE  */
  YYSYMBOL_RETURN = 13,                    /* RETURN  */
  YYSYMBOL_WHILE = 14,                     /* WHILE  */
  YYSYMBOL_BREAK = 15,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 16,                  /* CONTINUE  */
  YYSYMBOL_SWITCH = 17,                    /* SWITCH  */
  YYSYMBOL_CASE = 18,                      /* CASE  */
  YYSYMBOL_DEFAULT = 19,                   /* DEFAULT  */
  YYSYMBOL_COLON = 20,                     /* COLON  */
  YYSYMBOL_SC = 21,                        /* SC  */
  YYSYMBOL_COMMA = 22,                     /* COMMA  */
  YYSYMBOL_IF = 23,                        /* IF  */
  YYSYMBOL_ASSIGN = 24,                    /* ASSIGN  */
  YYSYMBOL_OR = 25,                        /* OR  */
  YYSYMBOL_AND = 26,                       /* AND  */
  YYSYMBOL_EQUAL = 27,                     /* EQUAL  */
  YYSYMBOL_RELOP = 28,                     /* RELOP  */
  YYSYMBOL_PLUS = 29,                      /* PLUS  */
  YYSYMBOL_MULT = 30,                      /* MULT  */
  YYSYMBOL_NOT = 31,                       /* NOT  */
  YYSYMBOL_LPAREN = 32,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 33,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 34,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 35,                    /* RBRACE  */
  YYSYMBOL_ELSE = 36,                      /* ELSE  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_Program = 38,                   /* Program  */
  YYSYMBOL_Funcs = 39,                     /* Funcs  */
  YYSYMBOL_FuncDecl = 40,                  /* FuncDecl  */
  YYSYMBOL_41_1 = 41,                      /* $@1  */
  YYSYMBOL_RetType = 42,                   /* RetType  */
  YYSYMBOL_Formals = 43,                   /* Formals  */
  YYSYMBOL_FormalsList = 44,               /* FormalsList  */
  YYSYMBOL_FormalDecl = 45,                /* FormalDecl  */
  YYSYMBOL_Statements = 46,                /* Statements  */
  YYSYMBOL_Statement = 47,                 /* Statement  */
  YYSYMBOL_48_2 = 48,                      /* $@2  */
  YYSYMBOL_49_3 = 49,                      /* $@3  */
  YYSYMBOL_Call = 50,                      /* Call  */
  YYSYMBOL_ExpList = 51,                   /* ExpList  */
  YYSYMBOL_Type = 52,                      /* Type  */
  YYSYMBOL_Exp = 53,                       /* Exp  */
  YYSYMBOL_IfExp = 54,                     /* IfExp  */
  YYSYMBOL_CaseList = 55,                  /* CaseList  */
  YYSYMBOL_CaseDecl = 56,                  /* CaseDecl  */
  YYSYMBOL_OPEN_SCOPE = 57,                /* OPEN_SCOPE  */
  YYSYMBOL_CLOSE_SCOPE = 58                /* CLOSE_SCOPE  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   221

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  124

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    48,    48,    50,    51,    53,    52,    94,    97,   101,
     105,   110,   119,   126,   131,   132,   133,   134,   141,   155,
     170,   171,   178,   188,   190,   193,   192,   205,   212,   220,
     219,   231,   257,   272,   279,   283,   287,   291,   295,   298,
     311,   324,   332,   335,   338,   347,   351,   355,   359,   366,
     374,   381,   388,   396,   405,   406,   407,   408,   410,   418
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ID", "NUM", "STRING",
  "VOID", "INT", "BYTE", "B", "BOOL", "TRUE", "FALSE", "RETURN", "WHILE",
  "BREAK", "CONTINUE", "SWITCH", "CASE", "DEFAULT", "COLON", "SC", "COMMA",
  "IF", "ASSIGN", "OR", "AND", "EQUAL", "RELOP", "PLUS", "MULT", "NOT",
  "LPAREN", "RPAREN", "LBRACE", "RBRACE", "ELSE", "$accept", "Program",
  "Funcs", "FuncDecl", "$@1", "RetType", "Formals", "FormalsList",
  "FormalDecl", "Statements", "Statement", "$@2", "$@3", "Call", "ExpList",
  "Type", "Exp", "IfExp", "CaseList", "CaseDecl", "OPEN_SCOPE",
  "CLOSE_SCOPE", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291
};
#endif

#define YYPACT_NINF (-53)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      51,   -53,   -53,   -53,   -53,    10,   -53,    51,    11,   -53,
     -53,   -53,   -16,    -3,   -10,   -53,     9,    31,     4,    -3,
     -53,   -53,   -53,   113,   -21,   128,    22,    58,    60,    40,
      45,   -53,     5,   -53,    80,    99,   106,    32,    76,   103,
     -53,   -53,   -53,   -53,   106,   106,   -53,   125,   106,   -53,
     -53,   106,   106,   113,   -53,   -53,   -53,     3,   136,   -53,
      81,   155,   -53,   -53,   161,   -53,   106,   106,   106,   106,
     106,   106,   170,   179,   188,    82,    90,   -53,   -53,   106,
     -53,   -53,   106,   -53,   115,    56,   140,   191,    89,   -53,
     -53,    88,   -53,   -53,   146,   -53,   -53,   -53,   113,   -53,
     -53,   113,   -53,   -53,   -53,    23,    98,   -53,   131,   138,
     121,    23,   -53,   158,   113,   -53,   -53,   113,   113,   113,
     -53,   -53,   113,   -53
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     8,    35,    36,    37,     0,     2,     3,     0,     7,
       1,     4,     0,     9,     0,    10,    11,     0,     0,     0,
      13,     5,    12,     0,     0,     0,     0,     0,     0,     0,
       0,    58,     0,    14,     0,     0,     0,     0,    41,    43,
      45,    46,    47,    21,     0,     0,    42,     0,     0,    27,
      28,     0,     0,     0,    59,    15,    20,     0,     0,    32,
       0,    33,    44,    48,     0,    22,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     0,     0,     6,    17,     0,
      19,    31,     0,    38,    50,    49,    52,    51,    39,    40,
      25,     0,    58,    59,     0,    34,    58,    29,     0,    16,
      18,     0,    58,    59,    59,     0,    23,    26,     0,     0,
       0,    55,    58,     0,     0,    59,    54,     0,     0,    56,
      30,    59,    57,    24
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -53,   -53,   141,   -53,   -53,   -53,   -53,   160,   -53,   -52,
     -30,   -53,   -53,   -23,   110,    69,   -19,   -53,    91,   -53,
     -22,   -48
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,     7,    23,     8,    14,    15,    16,    32,
      33,    96,   102,    46,    60,    35,    61,    75,   110,   111,
      53,    77
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      34,    76,    55,    36,     2,     3,    47,     4,    24,    34,
      10,    37,     2,     3,    12,     4,    13,    58,    25,    26,
      27,    28,    29,    18,    78,    63,    64,    79,    30,    72,
      34,    19,    73,    74,    20,    38,    39,    40,    21,    31,
      54,   108,   109,    41,    42,    99,    55,    84,    85,    86,
      87,    88,    89,    34,    48,   106,   107,     1,     2,     3,
      94,     4,   119,    44,    45,    59,   122,   120,   103,     9,
      98,   104,    51,   123,   101,    34,     9,    52,    34,    49,
     105,    50,    17,    68,    69,    70,    71,   121,    17,    55,
     117,    34,    55,    24,    34,    34,    34,     2,     3,    34,
       4,    56,    57,    25,    26,    27,    28,    29,    37,    38,
      39,    40,    62,    30,    81,    92,    24,    41,    42,    71,
       2,     3,    97,     4,    31,    93,    25,    26,    27,    28,
      29,    38,    39,    40,   112,   113,    30,    44,    45,    41,
      42,    67,    68,    69,    70,    71,    65,    31,    11,    43,
      66,    67,    68,    69,    70,    71,   115,    80,   114,    44,
      45,    66,    67,    68,    69,    70,    71,   100,    69,    70,
      71,    66,    67,    68,    69,    70,    71,    82,   118,    22,
      66,    67,    68,    69,    70,    71,    66,    67,    68,    69,
      70,    71,    95,     0,    83,    66,    67,    68,    69,    70,
      71,     0,   116,    90,    66,    67,    68,    69,    70,    71,
       0,     0,    91,    66,    67,    68,    69,    70,    71,    -1,
      70,    71
};

static const yytype_int8 yycheck[] =
{
      23,    53,    32,    24,     7,     8,    25,    10,     3,    32,
       0,    32,     7,     8,     3,    10,    32,    36,    13,    14,
      15,    16,    17,    33,    21,    44,    45,    24,    23,    48,
      53,    22,    51,    52,     3,     3,     4,     5,    34,    34,
      35,    18,    19,    11,    12,    93,    76,    66,    67,    68,
      69,    70,    71,    76,    32,   103,   104,     6,     7,     8,
      79,    10,   114,    31,    32,    33,   118,   115,    98,     0,
      92,   101,    32,   121,    96,    98,     7,    32,   101,    21,
     102,    21,    13,    27,    28,    29,    30,   117,    19,   119,
     112,   114,   122,     3,   117,   118,   119,     7,     8,   122,
      10,    21,     3,    13,    14,    15,    16,    17,    32,     3,
       4,     5,     9,    23,    33,    33,     3,    11,    12,    30,
       7,     8,    34,    10,    34,    35,    13,    14,    15,    16,
      17,     3,     4,     5,    36,     4,    23,    31,    32,    11,
      12,    26,    27,    28,    29,    30,    21,    34,     7,    21,
      25,    26,    27,    28,    29,    30,    35,    21,    20,    31,
      32,    25,    26,    27,    28,    29,    30,    21,    28,    29,
      30,    25,    26,    27,    28,    29,    30,    22,    20,    19,
      25,    26,    27,    28,    29,    30,    25,    26,    27,    28,
      29,    30,    82,    -1,    33,    25,    26,    27,    28,    29,
      30,    -1,   111,    33,    25,    26,    27,    28,    29,    30,
      -1,    -1,    33,    25,    26,    27,    28,    29,    30,    28,
      29,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,     7,     8,    10,    38,    39,    40,    42,    52,
       0,    39,     3,    32,    43,    44,    45,    52,    33,    22,
       3,    34,    44,    41,     3,    13,    14,    15,    16,    17,
      23,    34,    46,    47,    50,    52,    24,    32,     3,     4,
       5,    11,    12,    21,    31,    32,    50,    53,    32,    21,
      21,    32,    32,    57,    35,    47,    21,     3,    53,    33,
      51,    53,     9,    53,    53,    21,    25,    26,    27,    28,
      29,    30,    53,    53,    53,    54,    46,    58,    21,    24,
      21,    33,    22,    33,    53,    53,    53,    53,    53,    53,
      33,    33,    33,    35,    53,    51,    48,    34,    57,    58,
      21,    57,    49,    47,    47,    57,    58,    58,    18,    19,
      55,    56,    36,     4,    20,    35,    55,    57,    20,    46,
      58,    47,    46,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    41,    40,    42,    42,    43,
      43,    44,    44,    45,    46,    46,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    48,    47,    47,    47,    49,
      47,    50,    50,    51,    51,    52,    52,    52,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    54,    55,    55,    55,    56,    57,    58
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     0,    10,     1,     1,     0,
       1,     1,     3,     2,     1,     2,     5,     3,     5,     4,
       2,     2,     3,     7,    11,     0,     8,     2,     2,     0,
      10,     4,     3,     1,     3,     1,     1,     1,     3,     3,
       3,     1,     1,     1,     2,     1,     1,     1,     2,     3,
       3,     3,     3,     1,     2,     1,     3,     4,     0,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* Program: Funcs  */
#line 48 "parser.ypp"
                              {}
#line 1252 "parser.tab.cpp"
    break;

  case 3: /* Funcs: %empty  */
#line 50 "parser.ypp"
                                    {}
#line 1258 "parser.tab.cpp"
    break;

  case 4: /* Funcs: FuncDecl Funcs  */
#line 51 "parser.ypp"
                                                 {}
#line 1264 "parser.tab.cpp"
    break;

  case 5: /* $@1: %empty  */
#line 53 "parser.ypp"
                                        {
					std::cout<< "function opening" <<std::endl; // to remove

					latest_function = yyvsp[-5]->getType();

					if(symbol_vector[0]->find(yyvsp[-4]->getName()) != symbol_vector[0]->end()) {
						 output::errorDef(yylineno,yyvsp[-4]->getName());
						 exit(1);
					}

					vector<string>* argTypes = new vector<string>(); //see if it fits

					for (std::list<parameter>::iterator it=yyvsp[-2]->getParList()->begin(); it != yyvsp[-2]->getParList()->end(); ++it) {
						argTypes->push_back(it->getType());

					}
					std::cout<< "after for" <<std::endl; // to remove

					string func_type = output::makeFunctionType(yyvsp[-5]->getType(),*argTypes);

					Symbol* new_symbol = new Symbol(yyvsp[-4]->getName(),func_type,FUNCTION_OFFSET);
					(*symbol_vector[0])[yyvsp[-4]->getName()] = new_symbol;
					symbol_stack.top()->push_back(new_symbol);
					// inserts to Functions map
					Function* new_func = new Function(yyvsp[-4]->getName(),yyvsp[-5]->getType(),*argTypes);
					functions[yyvsp[-4]->getName()] = new_func;
					map<string,Symbol*>* new_symbol_table = new map<string,Symbol*>(); // see if it fits
					vector<Symbol*>* symbol_scope = new vector<Symbol*>();
					int i =-1;
					for (std::list<parameter>::iterator it=yyvsp[-2]->getParList()->begin(); it != yyvsp[-2]->getParList()->end(); ++it,i--) {
						Symbol* new_symbol = new Symbol(it->getName(),it->getType(),i);
						(*new_symbol_table)[it->getName()] = new_symbol;
						symbol_scope->push_back(new_symbol);
					}
					symbol_vector.push_back(new_symbol_table);
					symbol_stack.push(symbol_scope); // The problem is that "Symbol stack" is a vector for Symbols, not for vectors
					offset_stack.push(offset_stack.top());
                    std::cout<< "end of function" <<std::endl; // to remove
                    }
#line 1308 "parser.tab.cpp"
    break;

  case 6: /* FuncDecl: RetType ID LPAREN Formals RPAREN LBRACE $@1 Statements RBRACE CLOSE_SCOPE  */
#line 92 "parser.ypp"
                                                                      {}
#line 1314 "parser.tab.cpp"
    break;

  case 7: /* RetType: Type  */
#line 94 "parser.ypp"
                             {
                        yyval = (Node*)new retType(yyvsp[0]->getType());
                     }
#line 1322 "parser.tab.cpp"
    break;

  case 8: /* RetType: VOID  */
#line 97 "parser.ypp"
                                       {
				           yyval = (Node*)new retType("VOID");
				       }
#line 1330 "parser.tab.cpp"
    break;

  case 9: /* Formals: %empty  */
#line 101 "parser.ypp"
                                        {
                        std::cout<< "formals 1" <<std::endl; // to remove
					    yyval = (Node*) new Formals();
					}
#line 1339 "parser.tab.cpp"
    break;

  case 10: /* Formals: FormalsList  */
#line 106 "parser.ypp"
                                        {
					    std::cout<< "formals 2" <<std::endl; // to remove
					    yyval = (Node*) new Formals(yyvsp[0]->getParList());
					}
#line 1348 "parser.tab.cpp"
    break;

  case 11: /* FormalsList: FormalDecl  */
#line 111 "parser.ypp"
                                        {
					    std::cout<< "formal list" <<std::endl;
					    yyval = new FormalsList();
					    yyval->getParList()->push_front(*yyvsp[0]->getPar());
                        std::cout<< "formal list 1, name: " << yyval->getParList()->begin()->getName() <<std::endl;
				        std::cout<< "formal list 2, type: " << yyval->getParList()->begin()->getType() <<std::endl;

					}
#line 1361 "parser.tab.cpp"
    break;

  case 12: /* FormalsList: FormalDecl COMMA FormalsList  */
#line 120 "parser.ypp"
                                        {
					    yyval = new FormalsList();
					    yyval->setParList(yyvsp[0]->getParList());
					    parameter* temp_p = new parameter(*yyvsp[-2]->getPar());
					    yyval->getParList()->push_front(*temp_p);
					}
#line 1372 "parser.tab.cpp"
    break;

  case 13: /* FormalDecl: Type ID  */
#line 127 "parser.ypp"
                    {
                        std::cout<< "formalDecl" <<std::endl;
                        yyval = (Node*) new FormalDecl(yyvsp[0]->getName(),yyvsp[-1]->getType());
                    }
#line 1381 "parser.tab.cpp"
    break;

  case 14: /* Statements: Statement  */
#line 131 "parser.ypp"
                                 {}
#line 1387 "parser.tab.cpp"
    break;

  case 15: /* Statements: Statements Statement  */
#line 132 "parser.ypp"
                                                       {}
#line 1393 "parser.tab.cpp"
    break;

  case 16: /* Statement: LBRACE OPEN_SCOPE Statements RBRACE CLOSE_SCOPE  */
#line 133 "parser.ypp"
                                                                        {}
#line 1399 "parser.tab.cpp"
    break;

  case 17: /* Statement: Type ID SC  */
#line 134 "parser.ypp"
                                             { 
					if(IDDefined(symbol_vector,yyvsp[-1]->getName())){
						output::errorDef(yylineno,yyvsp[-1]->getName());
						exit(1);
					}
					insertSymbol(symbol_vector,offset_stack,symbol_stack,yyvsp[-1]->getName(),yyvsp[-2]->getType());
				}
#line 1411 "parser.tab.cpp"
    break;

  case 18: /* Statement: Type ID ASSIGN Exp SC  */
#line 141 "parser.ypp"
                                                        {
                    if (IDDefined(symbol_vector,yyvsp[-3]->getName())){
                        output::errorDef(yylineno,yyvsp[-3]->getName());
                        exit(1);
                    }
                    if(yyvsp[-4]->getType() != yyvsp[-1]->getType())
                    {
                        if(yyvsp[-4]->getType() != "INT" || yyvsp[-1]->getType() != "BYTE"){
                            output::errorMismatch(yylineno);
                            exit(1);
                        }
                    }
                    insertSymbol(symbol_vector,offset_stack,symbol_stack,yyvsp[-3]->getName(),yyvsp[-4]->getType());
				}
#line 1430 "parser.tab.cpp"
    break;

  case 19: /* Statement: ID ASSIGN Exp SC  */
#line 155 "parser.ypp"
                                                   {
				    if (!IDDefined(symbol_vector,yyvsp[-3]->getName()))
				    {
                        output::errorUndef(yylineno,yyvsp[-3]->getName());
                        exit(1);
                    }
                    Symbol* temp_symbol = findSymbol(symbol_vector,yyvsp[-3]->getName());
                    if(temp_symbol->getType() != yyvsp[-1]->getType())
                    {
                        if(temp_symbol->getType() != "INT" || yyvsp[-1]->getType() != "BYTE"){
                            output::errorMismatch(yylineno);
                            exit(1);
                        }
                    }
				}
#line 1450 "parser.tab.cpp"
    break;

  case 20: /* Statement: Call SC  */
#line 170 "parser.ypp"
                                          {}
#line 1456 "parser.tab.cpp"
    break;

  case 21: /* Statement: RETURN SC  */
#line 171 "parser.ypp"
                                            {
                    if(latest_function != "VOID")
                    {
                        output::errorMismatch(yylineno);
                        exit(1);
                    }
				 }
#line 1468 "parser.tab.cpp"
    break;

  case 22: /* Statement: RETURN Exp SC  */
#line 178 "parser.ypp"
                                                {
                    if((yyvsp[-1]->getType() != latest_function) || (latest_function == "VOID"))
                    {
                        if(latest_function != "INT" || yyvsp[-1]->getType() != "BYTE")
                        {
                            output::errorMismatch(yylineno);
                            exit(1);
                        }
                    }
				 }
#line 1483 "parser.tab.cpp"
    break;

  case 23: /* Statement: IF LPAREN IfExp RPAREN OPEN_SCOPE Statement CLOSE_SCOPE  */
#line 189 "parser.ypp"
                                  {}
#line 1489 "parser.tab.cpp"
    break;

  case 24: /* Statement: IF LPAREN IfExp RPAREN OPEN_SCOPE Statement CLOSE_SCOPE ELSE OPEN_SCOPE Statement CLOSE_SCOPE  */
#line 191 "parser.ypp"
                                {}
#line 1495 "parser.tab.cpp"
    break;

  case 25: /* $@2: %empty  */
#line 193 "parser.ypp"
                                  {
                      if(yyvsp[-1]->getType() != "BOOL")
                      {
                         output::errorMismatch(yylineno);
                         exit(1);
                      }
                      in_while++;
                  }
#line 1508 "parser.tab.cpp"
    break;

  case 26: /* Statement: WHILE LPAREN Exp RPAREN $@2 OPEN_SCOPE Statement CLOSE_SCOPE  */
#line 202 "parser.ypp"
                                  {
				      in_while--;
				  }
#line 1516 "parser.tab.cpp"
    break;

  case 27: /* Statement: BREAK SC  */
#line 205 "parser.ypp"
                                           {
				      if((in_while == 0) && (in_switch == 0))
				      {
				          output::errorUnexpectedBreak(yylineno);
				          exit(1);
				      }
				  }
#line 1528 "parser.tab.cpp"
    break;

  case 28: /* Statement: CONTINUE SC  */
#line 212 "parser.ypp"
                                              {
				      if(in_while == 0)
				      {
				          output::errorUnexpectedContinue(yylineno);
				          exit(1);
				      }
				  }
#line 1540 "parser.tab.cpp"
    break;

  case 29: /* $@3: %empty  */
#line 220 "parser.ypp"
                                  {
                      if((yyvsp[-2]->getType() != "INT") && (yyvsp[-2]->getType() != "BYTE"))
                      {
                         output::errorMismatch(yylineno);
                         exit(1);
                      }
                      in_switch++;
                  }
#line 1553 "parser.tab.cpp"
    break;

  case 30: /* Statement: SWITCH LPAREN Exp RPAREN LBRACE $@3 OPEN_SCOPE CaseList RBRACE CLOSE_SCOPE  */
#line 228 "parser.ypp"
                                                                       {
				      in_switch--;
				  }
#line 1561 "parser.tab.cpp"
    break;

  case 31: /* Call: ID LPAREN ExpList RPAREN  */
#line 232 "parser.ypp"
                                        {
                                            if (functions.find(yyvsp[-3]->getName()) == functions.end()) {
												output::errorUndef(yylineno, yyvsp[-3]->getName());
												exit(1);
											}
											Function* func = functions[yyvsp[-3]->getName()];
											if(func->getArgTypes().size() != yyvsp[-1]->getTypes()->size())
											{
											    std::cout<< "prototype func args size: " << func->getArgTypes().size() <<std::endl;
											    std::cout<< "prototype exp list size: " << yyvsp[-1]->getTypes()->size() <<std::endl;
											    output::errorPrototypeMismatch(yylineno, func->getName(), func->getArgTypes());
                                                exit(1);
											}
											for(unsigned int i=0; i<func->getArgTypes().size();i++)
											{
                                                if (func->getArgTypes()[i] != (*yyvsp[-1]->getTypes())[i]) {
                                                    if(func->getArgTypes()[i] != "INT" || (*yyvsp[-1]->getTypes())[i] != "BYTE"){
                                                        output::errorPrototypeMismatch(yylineno, func->getName(), func->getArgTypes());
                                                        exit(1);
                                                    }
                                                }
											}
											yyval = (Node*) new Call(func->getRetType());
											
										}
#line 1591 "parser.tab.cpp"
    break;

  case 32: /* Call: ID LPAREN RPAREN  */
#line 258 "parser.ypp"
                                                    {
				                        if (functions.find(yyvsp[-2]->getName()) == functions.end())
				                        {
											output::errorUndef(yylineno, yyvsp[-2]->getName());
											exit(1);
										}
										Function* func = functions[yyvsp[-2]->getName()];
										if (!func->getArgTypes().empty())
										{
											output::errorPrototypeMismatch(yylineno, func->getName(), func->getArgTypes());
											exit(1);
										}
										yyval = (Node*) new Call(func->getRetType());
									}
#line 1610 "parser.tab.cpp"
    break;

  case 33: /* ExpList: Exp  */
#line 272 "parser.ypp"
                            {
                        yyval = (Node*) new ExpList();
                        std::cout<< "exp list, exp type: " << yyvsp[0]->getType() <<std::endl;
                        yyval->push_front(yyvsp[0]->getType());
                        std::cout<< "size of exp list: " << yyval->getTypes()->size() <<std::endl;

                    }
#line 1622 "parser.tab.cpp"
    break;

  case 34: /* ExpList: Exp COMMA ExpList  */
#line 279 "parser.ypp"
                                                    {
				                        yyval = (Node*) new ExpList(yyvsp[0]->getTypes());
									    yyval->push_front(yyvsp[-2]->getType());
									}
#line 1631 "parser.tab.cpp"
    break;

  case 35: /* Type: INT  */
#line 283 "parser.ypp"
                            {
                        yyval = new Type("INT");
                        std::cout<< "type: " << yyval->getType() <<std::endl;
                    }
#line 1640 "parser.tab.cpp"
    break;

  case 36: /* Type: BYTE  */
#line 287 "parser.ypp"
                                       {
				        yyval = new Type("BYTE");
				        std::cout<< "type: " << yyval->getType() <<std::endl;
				        }
#line 1649 "parser.tab.cpp"
    break;

  case 37: /* Type: BOOL  */
#line 291 "parser.ypp"
                                       {
				        yyval = new Type("BOOL");
				        std::cout<< "type: " << yyval->getType() <<std::endl;
				        }
#line 1658 "parser.tab.cpp"
    break;

  case 38: /* Exp: LPAREN Exp RPAREN  */
#line 295 "parser.ypp"
                                          {
                                      yyval = (Node*) new Exp(yyvsp[-1]->getType());
                                  }
#line 1666 "parser.tab.cpp"
    break;

  case 39: /* Exp: Exp PLUS Exp  */
#line 298 "parser.ypp"
                                               {
				                    yyval = (Node*) new Exp();
				                    if ( (!yyvsp[-2]->isNumerical()) || (!yyvsp[0]->isNumerical())) {
										output::errorMismatch(yylineno);
										exit(1);
									}
									if ( (yyvsp[-2]->getType() == "BYTE") && (yyvsp[0]->getType() == "BYTE") ) {
										yyval->setType("BYTE");
									}
									else {
										yyval->setType("INT");
									}
								}
#line 1684 "parser.tab.cpp"
    break;

  case 40: /* Exp: Exp MULT Exp  */
#line 311 "parser.ypp"
                                               {
				                    yyval = (Node*) new Exp();
				                    if ( (!yyvsp[-2]->isNumerical()) || (!yyvsp[0]->isNumerical())) {
										output::errorMismatch(yylineno);
										exit(1);
									}
									if ( (yyvsp[-2]->getType() == "BYTE") && (yyvsp[0]->getType() == "BYTE") ) {
										yyval->setType("BYTE");
									}
									else {
										yyval->setType("INT");
									}
								}
#line 1702 "parser.tab.cpp"
    break;

  case 41: /* Exp: ID  */
#line 324 "parser.ypp"
                                     {
						if(!IDDefined(symbol_vector,yyvsp[0]->getName())) {
							output::errorUndef(yylineno, yyvsp[0]->getName());
							exit(1);
						}
                        Symbol* id = findSymbol(symbol_vector,yyvsp[0]->getName());
						yyval = (Node*) new Exp(id->getType());
					}
#line 1715 "parser.tab.cpp"
    break;

  case 42: /* Exp: Call  */
#line 332 "parser.ypp"
                                       {
				           yyval = (Node*) new Exp(yyvsp[0]->getType());
				       }
#line 1723 "parser.tab.cpp"
    break;

  case 43: /* Exp: NUM  */
#line 335 "parser.ypp"
                                      {
				           yyval = (Node*) new Exp("INT");
				      }
#line 1731 "parser.tab.cpp"
    break;

  case 44: /* Exp: NUM B  */
#line 339 "parser.ypp"
                                  {
				      if(yyvsp[-1]->getValue() > 255)
				      {
				           output::errorByteTooLarge(yylineno,yyvsp[-1]->getSTR());
				           exit(1);
				      }
				      yyval = (Node*) new Exp("BYTE");
				  }
#line 1744 "parser.tab.cpp"
    break;

  case 45: /* Exp: STRING  */
#line 348 "parser.ypp"
                                  {
				      yyval = (Node*) new Exp("STRING");
				  }
#line 1752 "parser.tab.cpp"
    break;

  case 46: /* Exp: TRUE  */
#line 352 "parser.ypp"
                                  {
				      yyval = (Node*) new Exp("BOOL");
				  }
#line 1760 "parser.tab.cpp"
    break;

  case 47: /* Exp: FALSE  */
#line 356 "parser.ypp"
                                  {
				      yyval = (Node*) new Exp("BOOL");
				  }
#line 1768 "parser.tab.cpp"
    break;

  case 48: /* Exp: NOT Exp  */
#line 359 "parser.ypp"
                                          {
                                if (yyvsp[0]->getType() != "BOOL") {
                                    output::errorMismatch(yylineno);
                                    exit(1);
                                }
                                yyval = (Node*) new Exp("BOOL");
						    }
#line 1780 "parser.tab.cpp"
    break;

  case 49: /* Exp: Exp AND Exp  */
#line 366 "parser.ypp"
                                              {
				                    if ( (yyvsp[-2]->getType() != "BOOL") || (yyvsp[0]->getType() != "BOOL"))
				                    {
									    output::errorMismatch(yylineno);
									    exit(1);
								    }
				                    yyval = (Node*) new Exp("BOOL");
				               }
#line 1793 "parser.tab.cpp"
    break;

  case 50: /* Exp: Exp OR Exp  */
#line 374 "parser.ypp"
                                             {
				                    if ( (yyvsp[-2]->getType() != "BOOL") || (yyvsp[0]->getType() != "BOOL")) {
									    output::errorMismatch(yylineno);
									    exit(1);
								    }
				                    yyval = (Node*) new Exp("BOOL");
								}
#line 1805 "parser.tab.cpp"
    break;

  case 51: /* Exp: Exp RELOP Exp  */
#line 381 "parser.ypp"
                                                {
                                    if ( (!yyvsp[-2]->isNumerical()) || (!yyvsp[0]->isNumerical())) {
                                        output::errorMismatch(yylineno);
                                        exit(1);
                                    }
				                    yyval = (Node*) new Exp("BOOL");
								}
#line 1817 "parser.tab.cpp"
    break;

  case 52: /* Exp: Exp EQUAL Exp  */
#line 388 "parser.ypp"
                                                {
				                    if ( (!yyvsp[-2]->isNumerical()) || (!yyvsp[0]->isNumerical()))
                                    {
                                        output::errorMismatch(yylineno);
                                        exit(1);
                                    }
				                    yyval = (Node*) new Exp("BOOL");
				                }
#line 1830 "parser.tab.cpp"
    break;

  case 53: /* IfExp: Exp  */
#line 397 "parser.ypp"
                {
                      if(yyvsp[0]->getType() != "BOOL")
                      {
                           output::errorMismatch(yylineno);
                           exit(1);
                      }

                }
#line 1843 "parser.tab.cpp"
    break;

  case 54: /* CaseList: CaseDecl CaseList  */
#line 405 "parser.ypp"
                                          {}
#line 1849 "parser.tab.cpp"
    break;

  case 55: /* CaseList: CaseDecl  */
#line 406 "parser.ypp"
                                           {}
#line 1855 "parser.tab.cpp"
    break;

  case 56: /* CaseList: DEFAULT COLON Statements  */
#line 407 "parser.ypp"
                                                           {}
#line 1861 "parser.tab.cpp"
    break;

  case 57: /* CaseDecl: CASE NUM COLON Statements  */
#line 408 "parser.ypp"
                                                  {}
#line 1867 "parser.tab.cpp"
    break;

  case 58: /* OPEN_SCOPE: %empty  */
#line 410 "parser.ypp"
                                        {
					    map<string,Symbol*>* new_symbol_table = new map<string,Symbol*>();
					    symbol_vector.push_back(new_symbol_table);
						vector<Symbol*>* new_symbol_scope = new vector<Symbol*>;
						symbol_stack.push(new_symbol_scope);
					    offset_stack.push(offset_stack.top());
					}
#line 1879 "parser.tab.cpp"
    break;

  case 59: /* CLOSE_SCOPE: %empty  */
#line 418 "parser.ypp"
                    {
						output::endScope();
						for (unsigned int i=0; i<symbol_stack.top()->size();i++) {
		                    output::printID((*symbol_stack.top())[i]->getName(),(*symbol_stack.top())[i]->getOffset(),(*symbol_stack.top())[i]->getType());
						}
                        symbol_vector.pop_back();
                        offset_stack.pop();
						symbol_stack.pop();

                    }
#line 1894 "parser.tab.cpp"
    break;


#line 1898 "parser.tab.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 431 "parser.ypp"


void yyerror(const char*) {
	output::errorSyn(yylineno);
	exit(1);
}



int main() {
    vector<string> temp_v1;
    vector<string> temp_v2;
    string temp_str1 = "print";
    string temp_str2 = "printi";
    temp_v1.push_back("STRING");
    temp_v2.push_back("INT");
    map<string,Symbol*>* first_symbol_table = new map<string,Symbol*>();
	string print_type = output::makeFunctionType("VOID",temp_v1);
	string printi_type = output::makeFunctionType("VOID",temp_v2);
	Symbol* print_symbol = new Symbol("print",print_type,FUNCTION_OFFSET);
	Symbol* printi_symbol = new Symbol("printi",printi_type,FUNCTION_OFFSET);
	(*first_symbol_table)[temp_str1] = print_symbol;
	(*first_symbol_table)[temp_str2] = printi_symbol;
	symbol_stack.push(new vector<Symbol*>());
	symbol_stack.top()->push_back(print_symbol);
	symbol_stack.top()->push_back(printi_symbol);
	symbol_vector.push_back(first_symbol_table);
	offset_stack.push(0);
	functions[temp_str1] = new Function("print","VOID",temp_v1);
	functions[temp_str2] = new Function("printi","VOID",temp_v2);
	
	std::cout<< "main" <<std::endl; // to remove
	int result = yyparse();
	if(functions.find("main") == functions.end())
    {
        void errorMainMissing();
        exit(1);
    }
	if ( (functions["main"]->getRetType() != "VOID") || (functions["main"]->getArgTypes().size() != 0) )
	{
        void errorMainMissing();
        exit(1);
    }
	output::endScope();
	for (unsigned int i=0; i<symbol_stack.top()->size();i++) {
		output::printID((*symbol_stack.top())[i]->getName(),(*symbol_stack.top())[i]->getOffset(),(*symbol_stack.top())[i]->getType());
	}
	return result;

}

