/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "mongo.y"

#include "include/mongo.h"

struct query_tree tree = {0};
const struct query_tree empty_tree = {0};

struct extended_comparator* cmp;
size_t vtype;
size_t size = 0;

int sockfd, numbytes;

#define MAXDATASIZE 100
#define PORT 3939

#line 87 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    DB = 258,                      /* DB  */
    FIND = 259,                    /* FIND  */
    INSERT = 260,                  /* INSERT  */
    DELETE = 261,                  /* DELETE  */
    UPDATE = 262,                  /* UPDATE  */
    PARENT = 263,                  /* PARENT  */
    STRING = 264,                  /* STRING  */
    SET = 265,                     /* SET  */
    OR = 266,                      /* OR  */
    LT = 267,                      /* LT  */
    LET = 268,                     /* LET  */
    GT = 269,                      /* GT  */
    GET = 270,                     /* GET  */
    NE = 271,                      /* NE  */
    OPBRACE = 272,                 /* OPBRACE  */
    CLBRACE = 273,                 /* CLBRACE  */
    OPCBRACE = 274,                /* OPCBRACE  */
    CLCBRACE = 275,                /* CLCBRACE  */
    OPSQBRACE = 276,               /* OPSQBRACE  */
    CLSQBRACE = 277,               /* CLSQBRACE  */
    COLON = 278,                   /* COLON  */
    DOLLAR = 279,                  /* DOLLAR  */
    COMMA = 280,                   /* COMMA  */
    QUOTE = 281,                   /* QUOTE  */
    FALSE = 282,                   /* FALSE  */
    TRUE = 283,                    /* TRUE  */
    INT_NUMBER = 284,              /* INT_NUMBER  */
    FLOAT_NUMBER = 285             /* FLOAT_NUMBER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define DB 258
#define FIND 259
#define INSERT 260
#define DELETE 261
#define UPDATE 262
#define PARENT 263
#define STRING 264
#define SET 265
#define OR 266
#define LT 267
#define LET 268
#define GT 269
#define GET 270
#define NE 271
#define OPBRACE 272
#define CLBRACE 273
#define OPCBRACE 274
#define CLCBRACE 275
#define OPSQBRACE 276
#define CLSQBRACE 277
#define COLON 278
#define DOLLAR 279
#define COMMA 280
#define QUOTE 281
#define FALSE 282
#define TRUE 283
#define INT_NUMBER 284
#define FLOAT_NUMBER 285

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "mongo.y"
uint64_t num; char *string; float fnum;

#line 203 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DB = 3,                         /* DB  */
  YYSYMBOL_FIND = 4,                       /* FIND  */
  YYSYMBOL_INSERT = 5,                     /* INSERT  */
  YYSYMBOL_DELETE = 6,                     /* DELETE  */
  YYSYMBOL_UPDATE = 7,                     /* UPDATE  */
  YYSYMBOL_PARENT = 8,                     /* PARENT  */
  YYSYMBOL_STRING = 9,                     /* STRING  */
  YYSYMBOL_SET = 10,                       /* SET  */
  YYSYMBOL_OR = 11,                        /* OR  */
  YYSYMBOL_LT = 12,                        /* LT  */
  YYSYMBOL_LET = 13,                       /* LET  */
  YYSYMBOL_GT = 14,                        /* GT  */
  YYSYMBOL_GET = 15,                       /* GET  */
  YYSYMBOL_NE = 16,                        /* NE  */
  YYSYMBOL_OPBRACE = 17,                   /* OPBRACE  */
  YYSYMBOL_CLBRACE = 18,                   /* CLBRACE  */
  YYSYMBOL_OPCBRACE = 19,                  /* OPCBRACE  */
  YYSYMBOL_CLCBRACE = 20,                  /* CLCBRACE  */
  YYSYMBOL_OPSQBRACE = 21,                 /* OPSQBRACE  */
  YYSYMBOL_CLSQBRACE = 22,                 /* CLSQBRACE  */
  YYSYMBOL_COLON = 23,                     /* COLON  */
  YYSYMBOL_DOLLAR = 24,                    /* DOLLAR  */
  YYSYMBOL_COMMA = 25,                     /* COMMA  */
  YYSYMBOL_QUOTE = 26,                     /* QUOTE  */
  YYSYMBOL_FALSE = 27,                     /* FALSE  */
  YYSYMBOL_TRUE = 28,                      /* TRUE  */
  YYSYMBOL_INT_NUMBER = 29,                /* INT_NUMBER  */
  YYSYMBOL_FLOAT_NUMBER = 30,              /* FLOAT_NUMBER  */
  YYSYMBOL_YYACCEPT = 31,                  /* $accept  */
  YYSYMBOL_syntax = 32,                    /* syntax  */
  YYSYMBOL_printer = 33,                   /* printer  */
  YYSYMBOL_mongosh = 34,                   /* mongosh  */
  YYSYMBOL_parent_def = 35,                /* parent_def  */
  YYSYMBOL_vals_def = 36,                  /* vals_def  */
  YYSYMBOL_filters = 37,                   /* filters  */
  YYSYMBOL_filter = 38,                    /* filter  */
  YYSYMBOL_operation = 39,                 /* operation  */
  YYSYMBOL_set_vals = 40,                  /* set_vals  */
  YYSYMBOL_set_val = 41,                   /* set_val  */
  YYSYMBOL_value = 42,                     /* value  */
  YYSYMBOL_bool = 43,                      /* bool  */
  YYSYMBOL_comp = 44                       /* comp  */
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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   75

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  30
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  83

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   285


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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    33,    33,    34,    37,    39,    41,    43,    45,    48,
      53,    55,    55,    57,    68,    70,    73,    75,    77,    79,
      89,    91,    93,    95,    98,   100,   103,   105,   107,   109,
     111
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
  "\"end of file\"", "error", "\"invalid token\"", "DB", "FIND", "INSERT",
  "DELETE", "UPDATE", "PARENT", "STRING", "SET", "OR", "LT", "LET", "GT",
  "GET", "NE", "OPBRACE", "CLBRACE", "OPCBRACE", "CLCBRACE", "OPSQBRACE",
  "CLSQBRACE", "COLON", "DOLLAR", "COMMA", "QUOTE", "FALSE", "TRUE",
  "INT_NUMBER", "FLOAT_NUMBER", "$accept", "syntax", "printer", "mongosh",
  "parent_def", "vals_def", "filters", "filter", "operation", "set_vals",
  "set_val", "value", "bool", "comp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-59)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       1,    27,     8,     1,   -59,   -10,    -2,    18,    19,   -59,
     -59,     5,    20,    21,    22,    -8,    29,    13,    -8,    -8,
     -14,    31,    23,    24,    25,    26,    30,    32,   -16,    33,
      28,    -8,    15,    38,    35,    37,    34,    36,    42,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,    -8,   -59,   -59,    41,
      39,    43,    40,   -59,   -59,    44,     7,    45,    47,   -59,
       0,   -59,    38,    46,   -59,   -59,   -59,   -59,   -59,    50,
     -59,    -8,   -59,   -59,    51,     0,    48,    26,    49,   -59,
      57,   -59,   -59
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     3,     4,     0,     0,     0,     0,     1,
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      24,    21,    22,    14,    13,    23,     0,     5,    12,     0,
       0,     0,    17,     7,     6,     0,     0,     0,     0,     9,
       0,    10,     0,     0,    26,    27,    28,    29,    30,     0,
      20,     0,    19,    18,     0,     0,     0,     0,     0,    15,
       0,    16,     8
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -59,    54,   -59,   -59,   -59,   -19,   -13,   -46,   -59,     2,
     -59,   -58,   -59,   -59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,    17,    34,    22,    23,    43,    51,
      52,    44,    45,    69
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      58,    20,    72,    37,     1,    26,    27,    11,     9,    28,
      38,    39,    40,    41,    42,    12,    21,    78,    48,    64,
      65,    66,    67,    68,    15,    76,    38,    39,    40,    41,
      42,     5,     6,     7,     8,    13,    14,    24,    25,    16,
      18,    19,    29,    30,    49,    33,    47,    50,    32,    31,
      35,    57,    36,    53,    46,    54,    74,    10,    80,    55,
      56,    59,    60,    61,    73,    62,     0,     0,    63,    81,
      79,    70,    71,    75,    77,    82
};

static const yytype_int8 yycheck[] =
{
      46,     9,    60,    19,     3,    18,    19,    17,     0,    23,
      26,    27,    28,    29,    30,    17,    24,    75,    31,    12,
      13,    14,    15,    16,    19,    71,    26,    27,    28,    29,
      30,     4,     5,     6,     7,    17,    17,     8,    25,    19,
      19,    19,    11,    20,    29,    19,    18,     9,    23,    25,
      20,     9,    20,    18,    21,    18,    10,     3,    77,    25,
      24,    20,    23,    20,    62,    25,    -1,    -1,    24,    20,
      22,    26,    25,    23,    23,    18
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    32,    33,    34,     4,     5,     6,     7,     0,
      32,    17,    17,    17,    17,    19,    19,    35,    19,    19,
       9,    24,    37,    38,     8,    25,    37,    37,    23,    11,
      20,    25,    23,    19,    36,    20,    20,    19,    26,    27,
      28,    29,    30,    39,    42,    43,    21,    18,    37,    29,
       9,    40,    41,    18,    18,    25,    24,     9,    38,    20,
      23,    20,    25,    24,    12,    13,    14,    15,    16,    44,
      26,    25,    42,    40,    10,    23,    38,    23,    42,    22,
      36,    20,    18
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    32,    33,    34,    34,    34,    34,    35,
      36,    37,    37,    38,    38,    38,    39,    40,    40,    41,
      42,    42,    42,    42,    43,    43,    44,    44,    44,    44,
      44
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     7,     7,     7,    12,     5,
       3,     1,     3,     3,     3,     7,     6,     1,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 4: /* printer: mongosh  */
#line 37 "mongo.y"
                 {send_data();}
#line 1269 "y.tab.c"
    break;

  case 5: /* mongosh: DB FIND OPBRACE OPCBRACE filters CLCBRACE CLBRACE  */
#line 39 "mongo.y"
                                                           {set_command(0);}
#line 1275 "y.tab.c"
    break;

  case 6: /* mongosh: DB DELETE OPBRACE OPCBRACE filters CLCBRACE CLBRACE  */
#line 41 "mongo.y"
                                                              {set_command(1);}
#line 1281 "y.tab.c"
    break;

  case 7: /* mongosh: DB INSERT OPBRACE parent_def COMMA vals_def CLBRACE  */
#line 43 "mongo.y"
                                                              {set_command(2);}
#line 1287 "y.tab.c"
    break;

  case 8: /* mongosh: DB UPDATE OPBRACE OPCBRACE filters CLCBRACE COMMA DOLLAR SET COLON vals_def CLBRACE  */
#line 45 "mongo.y"
                                                                                              {set_command(3);}
#line 1293 "y.tab.c"
    break;

  case 9: /* parent_def: OPCBRACE PARENT COLON INT_NUMBER CLCBRACE  */
#line 48 "mongo.y"
                                                       {set_cur_operation(0);
							vtype = INTEGER_T;
							set_cur_value("parent", (yyvsp[-1].num), 0);
							switch_filter();}
#line 1302 "y.tab.c"
    break;

  case 11: /* filters: filter  */
#line 55 "mongo.y"
                 {switch_filter();}
#line 1308 "y.tab.c"
    break;

  case 12: /* filters: filter COMMA filters  */
#line 55 "mongo.y"
                                                           {switch_filter();}
#line 1314 "y.tab.c"
    break;

  case 13: /* filter: STRING COLON value  */
#line 57 "mongo.y"
                            {
				set_cur_operation(0);
				float val;
				if (vtype == FLOAT_T){
					memcpy(&val, &(yyvsp[0].num), sizeof(uint64_t));
					set_cur_value((yyvsp[-2].string), 0, val);
				}else
					set_cur_value((yyvsp[-2].string), (yyvsp[0].num), 0);

			}
#line 1329 "y.tab.c"
    break;

  case 14: /* filter: STRING COLON operation  */
#line 68 "mongo.y"
                                {set_cur_value((yyvsp[-2].string), (yyvsp[0].num), 0);}
#line 1335 "y.tab.c"
    break;

  case 15: /* filter: DOLLAR OR OPSQBRACE filter COMMA filter CLSQBRACE  */
#line 70 "mongo.y"
                                                           {set_comp();}
#line 1341 "y.tab.c"
    break;

  case 16: /* operation: OPCBRACE DOLLAR comp COLON value CLCBRACE  */
#line 73 "mongo.y"
                                                     {set_cur_operation((yyvsp[-3].num)); (yyval.num) = (yyvsp[-1].num);}
#line 1347 "y.tab.c"
    break;

  case 19: /* set_val: STRING COLON value  */
#line 79 "mongo.y"
                             {
				if (vtype == FLOAT_T){
					float val;
					memcpy(&val, &(yyvsp[0].num), sizeof(uint64_t));
					append_val_setting((yyvsp[-2].string), 0, val);
				}else
					append_val_setting((yyvsp[-2].string), (yyvsp[0].num), 0);

                             }
#line 1361 "y.tab.c"
    break;

  case 20: /* value: QUOTE STRING QUOTE  */
#line 89 "mongo.y"
                           {vtype = STRING_T; (yyval.num) = (yyvsp[-1].string);}
#line 1367 "y.tab.c"
    break;

  case 21: /* value: INT_NUMBER  */
#line 91 "mongo.y"
                   {vtype = INTEGER_T; (yyval.num) = (yyvsp[0].num);}
#line 1373 "y.tab.c"
    break;

  case 22: /* value: FLOAT_NUMBER  */
#line 93 "mongo.y"
                     {vtype = FLOAT_T; memcpy(&(yyval.num), &(yyvsp[0].fnum), sizeof(uint64_t));}
#line 1379 "y.tab.c"
    break;

  case 23: /* value: bool  */
#line 95 "mongo.y"
             {vtype = INTEGER_T; (yyval.num) = (yyvsp[0].num);}
#line 1385 "y.tab.c"
    break;

  case 24: /* bool: TRUE  */
#line 98 "mongo.y"
            {(yyval.num) = 1;}
#line 1391 "y.tab.c"
    break;

  case 25: /* bool: FALSE  */
#line 100 "mongo.y"
             {(yyval.num) = 0;}
#line 1397 "y.tab.c"
    break;

  case 26: /* comp: LT  */
#line 103 "mongo.y"
          {(yyval.num) = 1;}
#line 1403 "y.tab.c"
    break;

  case 27: /* comp: LET  */
#line 105 "mongo.y"
           {(yyval.num) = 2;}
#line 1409 "y.tab.c"
    break;

  case 28: /* comp: GT  */
#line 107 "mongo.y"
          {(yyval.num) = 3;}
#line 1415 "y.tab.c"
    break;

  case 29: /* comp: GET  */
#line 109 "mongo.y"
           {(yyval.num) = 4;}
#line 1421 "y.tab.c"
    break;

  case 30: /* comp: NE  */
#line 111 "mongo.y"
          {(yyval.num) = 5;}
#line 1427 "y.tab.c"
    break;


#line 1431 "y.tab.c"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 113 "mongo.y"
                     /* C code */


int main(int argc, char *argv[]) {

	if (argc != 2){
		printf("Program takes 1 parameter: host adress.\n");
		return 1;
	}
	struct sockaddr_in servaddr;
	char *path = NULL;

	if (argc > 1)
	path = argv[1];

	sockfd = socket(AF_INET, SOCK_STREAM, 0);

	memset(&servaddr, 0, sizeof(servaddr));
	servaddr.sin_family = AF_INET;
	servaddr.sin_addr.s_addr = inet_addr(argv[1]);
	servaddr.sin_port = htons(PORT);

	if (connect(sockfd, (struct sockaddr *)&servaddr, sizeof(servaddr)) != 0){
		perror("connect");
		return 1;
	}

	printf("client: connecting\n");

	while(1){
		yyparse();
	}
	close(sockfd);
	return 0;
}

void parse_tree(Query_tree* qtree){

	qtree->command = tree.command;

	size_t filt_idx = 0;
	size_t comp_idx = 0;
	while(tree.filters){
		if (!tree.filters->comp_list){
			tree.filters = tree.filters->next;
			continue;
		}
		Query_tree_Filter filter = Query_tree_Filter_init_zero;
		while(tree.filters->comp_list){
		    Query_tree_Comparator comp = Query_tree_Comparator_init_zero;
		    Query_tree_Field_value_pair fv = Query_tree_Field_value_pair_init_zero;
		    fv.val_type = tree.filters->comp_list->fv.val_type;
		    fv.int_val = tree.filters->comp_list->fv.int_value;
		    fv.real_val = tree.filters->comp_list->fv.real_value;
		    if (fv.val_type == STRING_T)
			strcpy(fv.str_val, tree.filters->comp_list->fv.int_value);
		    strcpy(fv.field, tree.filters->comp_list->fv.field);
		    comp.fv = fv;
		    comp.operation = tree.filters->comp_list->operation;
		    filter.comp_list[comp_idx++] = comp;
		    tree.filters->comp_list = tree.filters->comp_list->next;
		}
		filter.comp_list_count = comp_idx;
		qtree->filters[filt_idx++] = filter;

		comp_idx = 0;
		tree.filters = tree.filters->next;
	}

	qtree->filters_count = filt_idx;

	size_t setting_idx = 0;
	while(tree.settings){
	Query_tree_Value_setting val = Query_tree_Value_setting_init_zero;
	Query_tree_Field_value_pair fv = Query_tree_Field_value_pair_init_zero;
	fv.val_type = tree.settings->fv.val_type;
	fv.int_val = tree.settings->fv.int_value;
	fv.real_val = tree.settings->fv.real_value;
	if (fv.val_type == STRING_T){
		strcpy(fv.str_val, tree.settings->fv.int_value);
	}
	strcpy(fv.field, tree.settings->fv.field);
	val.fv = fv;

	qtree->settings[setting_idx++] = val;
	tree.settings = tree.settings->next;
	}
	qtree->settings_count = setting_idx;

}


void send_data(){

	Query_tree qtree = Query_tree_init_zero;

	parse_tree(&qtree);

	pb_ostream_t output = pb_ostream_from_socket(sockfd);
	if (!pb_encode_delimited(&output, Query_tree_fields, &qtree))
	{
	    fprintf(stderr, "Encoding failed: %s\n", PB_GET_ERROR(&output));
	}

	Response r = {};
	pb_istream_t input = pb_istream_from_socket(sockfd);
	if (!pb_decode_delimited(&input, Response_fields, &r))
	{
	    printf("Decode failed: %s\n", PB_GET_ERROR(&input));
	    return 2;
	}
	printf("%s", r.r_string);

	while(!r.last){
		if (!pb_decode_delimited(&input, Response_fields, &r))
        	{
        	    printf("Decode failed: %s\n", PB_GET_ERROR(&input));
        	    return 2;
        	}
		printf("%s", r.r_string);
	}



	tree = empty_tree;
}



void *test_malloc(size_t size_of){
    size += size_of;
    return malloc(size_of);
}

void print_ram(){
    printf("RAM USAGE: %zu bytes\n", size);
}

void append_val_setting(char* field, uint64_t val, double fval){
	struct value_setting* vs = test_malloc(sizeof(struct value_setting));
	struct field_value_pair fv = {.field = field, .val_type = vtype};
	fv.real_value = fval;
	fv.int_value = val;
	vs->fv = fv;
	vs->next = tree.settings;
	tree.settings = vs;

}

void set_cur_operation(uint8_t operation){
	struct extended_comparator* tmp = test_malloc(sizeof(struct extended_comparator));
	tmp->next = cmp;
	tmp->operation = operation;
	cmp = tmp;

}

void set_cur_value(char* field, uint64_t val, double fval){
	struct field_value_pair fv = {.field = field, .val_type = vtype};
	fv.real_value = fval;
	fv.int_value = val;
	cmp->fv = fv;
}

void switch_filter(){
	struct filter* f = test_malloc(sizeof(struct filter));
	struct comparator* tmp = test_malloc(sizeof(struct comparator));
        f->next = tree.filters;

        if (cmp->connected){
		tmp->next = test_malloc(sizeof(struct comparator));
		tmp->next->operation = cmp->connected->operation;
		tmp->next->fv = cmp->connected->fv;
	}
	tmp->operation = cmp->operation;
	tmp->fv = cmp->fv;

	if (tree.filters)
		tree.filters->comp_list = tmp;
	else{
		f->comp_list = tmp;
		tree.filters = f;
		f = test_malloc(sizeof(struct filter));
		f->next = tree.filters;
	}

	cmp = cmp->next;
	tree.filters = f;
}

void set_comp(){
	struct extended_comparator* tmp = NULL;
	tmp = cmp->next->next;
	cmp->connected = cmp->next;
	cmp->next = tmp;
}

void set_command(uint8_t command){
	tree.command = command;
}

void yyerror (char *s) {fprintf (stderr, "%s\n", s);}
