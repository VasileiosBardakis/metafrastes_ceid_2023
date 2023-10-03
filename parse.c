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
#line 1 "parse.y"

#include <stdio.h>
#include <string.h> //for strcmp
#include "extra.h"

int yylex();
int yyerror(char *s);

extern char *yytext;
extern int yylineno;
extern FILE *yyin;

//https://stackoverflow.com/questions/10310944/expected-asm-or-attribute-before-token
stringArray idArray = {.length = 0}; //holds all ids
char *latestIDParsed; //latest id parsed, pointer inside idArray

char *radioCheckedID; //attribute
stringArray radioArray = {.length =0}; //holds ids of radiobuttons

int androidChildAmount=-1; //attribute parsed
int radioChildCount=0; //radiobuttons parsed

int androidMax=-1; //max attribute

#line 96 "y.tab.c"

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
    VALUEINT = 258,                /* VALUEINT  */
    VALUESTR = 259,                /* VALUESTR  */
    WIDTH = 260,                   /* WIDTH  */
    HEIGHT = 261,                  /* HEIGHT  */
    ID = 262,                      /* ID  */
    ORIENTATION = 263,             /* ORIENTATION  */
    COLOR = 264,                   /* COLOR  */
    SRC = 265,                     /* SRC  */
    PADDING = 266,                 /* PADDING  */
    MAX = 267,                     /* MAX  */
    PROGRESSMADE = 268,            /* PROGRESSMADE  */
    CHECKEDBTN = 269,              /* CHECKEDBTN  */
    TEXT = 270,                    /* TEXT  */
    CHILDAMOUNT = 271,             /* CHILDAMOUNT  */
    TEXTVIEW = 272,                /* TEXTVIEW  */
    IMAGE = 273,                   /* IMAGE  */
    BUTTON = 274,                  /* BUTTON  */
    PROGRESS = 275,                /* PROGRESS  */
    RADIOBTN = 276,                /* RADIOBTN  */
    S_RADIOGRP = 277,              /* S_RADIOGRP  */
    E_RADIOGRP = 278,              /* E_RADIOGRP  */
    E_LINEAR = 279,                /* E_LINEAR  */
    E_RELATIVE = 280,              /* E_RELATIVE  */
    S_LINEAR = 281,                /* S_LINEAR  */
    S_RELATIVE = 282               /* S_RELATIVE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define VALUEINT 258
#define VALUESTR 259
#define WIDTH 260
#define HEIGHT 261
#define ID 262
#define ORIENTATION 263
#define COLOR 264
#define SRC 265
#define PADDING 266
#define MAX 267
#define PROGRESSMADE 268
#define CHECKEDBTN 269
#define TEXT 270
#define CHILDAMOUNT 271
#define TEXTVIEW 272
#define IMAGE 273
#define BUTTON 274
#define PROGRESS 275
#define RADIOBTN 276
#define S_RADIOGRP 277
#define E_RADIOGRP 278
#define E_LINEAR 279
#define E_RELATIVE 280
#define S_LINEAR 281
#define S_RELATIVE 282

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "parse.y"

	int lineno;

	struct intLineno {
		int valueInt;
		int lineno;
	}intLineno;

	struct stringLineno {
		char *valueStr;
		int lineno;
	}stringLineno;

#line 217 "y.tab.c"

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
  YYSYMBOL_3_ = 3,                         /* '='  */
  YYSYMBOL_4_ = 4,                         /* '"'  */
  YYSYMBOL_VALUEINT = 5,                   /* VALUEINT  */
  YYSYMBOL_VALUESTR = 6,                   /* VALUESTR  */
  YYSYMBOL_WIDTH = 7,                      /* WIDTH  */
  YYSYMBOL_HEIGHT = 8,                     /* HEIGHT  */
  YYSYMBOL_ID = 9,                         /* ID  */
  YYSYMBOL_ORIENTATION = 10,               /* ORIENTATION  */
  YYSYMBOL_COLOR = 11,                     /* COLOR  */
  YYSYMBOL_SRC = 12,                       /* SRC  */
  YYSYMBOL_PADDING = 13,                   /* PADDING  */
  YYSYMBOL_MAX = 14,                       /* MAX  */
  YYSYMBOL_PROGRESSMADE = 15,              /* PROGRESSMADE  */
  YYSYMBOL_CHECKEDBTN = 16,                /* CHECKEDBTN  */
  YYSYMBOL_TEXT = 17,                      /* TEXT  */
  YYSYMBOL_CHILDAMOUNT = 18,               /* CHILDAMOUNT  */
  YYSYMBOL_TEXTVIEW = 19,                  /* TEXTVIEW  */
  YYSYMBOL_IMAGE = 20,                     /* IMAGE  */
  YYSYMBOL_BUTTON = 21,                    /* BUTTON  */
  YYSYMBOL_PROGRESS = 22,                  /* PROGRESS  */
  YYSYMBOL_RADIOBTN = 23,                  /* RADIOBTN  */
  YYSYMBOL_S_RADIOGRP = 24,                /* S_RADIOGRP  */
  YYSYMBOL_E_RADIOGRP = 25,                /* E_RADIOGRP  */
  YYSYMBOL_E_LINEAR = 26,                  /* E_LINEAR  */
  YYSYMBOL_E_RELATIVE = 27,                /* E_RELATIVE  */
  YYSYMBOL_S_LINEAR = 28,                  /* S_LINEAR  */
  YYSYMBOL_S_RELATIVE = 29,                /* S_RELATIVE  */
  YYSYMBOL_30_ = 30,                       /* '>'  */
  YYSYMBOL_31_ = 31,                       /* '/'  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_root = 33,                      /* root  */
  YYSYMBOL_linear = 34,                    /* linear  */
  YYSYMBOL_relative = 35,                  /* relative  */
  YYSYMBOL_element = 36,                   /* element  */
  YYSYMBOL_textview = 37,                  /* textview  */
  YYSYMBOL_image = 38,                     /* image  */
  YYSYMBOL_button = 39,                    /* button  */
  YYSYMBOL_radiogrp = 40,                  /* radiogrp  */
  YYSYMBOL_radiobtn = 41,                  /* radiobtn  */
  YYSYMBOL_progress = 42,                  /* progress  */
  YYSYMBOL_linearattr = 43,                /* linearattr  */
  YYSYMBOL_relativeattr = 44,              /* relativeattr  */
  YYSYMBOL_textattr = 45,                  /* textattr  */
  YYSYMBOL_imageattr = 46,                 /* imageattr  */
  YYSYMBOL_buttonattr = 47,                /* buttonattr  */
  YYSYMBOL_radiogrpattr = 48,              /* radiogrpattr  */
  YYSYMBOL_radiobtnattr = 49,              /* radiobtnattr  */
  YYSYMBOL_progressattr = 50,              /* progressattr  */
  YYSYMBOL_width = 51,                     /* width  */
  YYSYMBOL_height = 52,                    /* height  */
  YYSYMBOL_text = 53,                      /* text  */
  YYSYMBOL_src = 54,                       /* src  */
  YYSYMBOL_childamount = 55,               /* childamount  */
  YYSYMBOL_id = 56,                        /* id  */
  YYSYMBOL_orientation = 57,               /* orientation  */
  YYSYMBOL_color = 58,                     /* color  */
  YYSYMBOL_padding = 59,                   /* padding  */
  YYSYMBOL_max = 60,                       /* max  */
  YYSYMBOL_progressmade = 61,              /* progressmade  */
  YYSYMBOL_checkedbtn = 62                 /* checkedbtn  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   149

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   282


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
       2,     2,     2,     2,     4,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,    30,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    49,    49,    50,    53,    56,    57,    59,    60,    61,
      62,    63,    64,    65,    66,    69,    72,    75,    78,   102,
     103,   110,   113,   116,   119,   122,   125,   128,   135,   138,
     141,   148,   159,   166,   176,   179,   182,   184,   186,   199,
     201,   203,   205,   207,   209,   217,   219,   228,   230,   247,
     249
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
  "\"end of file\"", "error", "\"invalid token\"", "'='", "'\"'",
  "VALUEINT", "VALUESTR", "WIDTH", "HEIGHT", "ID", "ORIENTATION", "COLOR",
  "SRC", "PADDING", "MAX", "PROGRESSMADE", "CHECKEDBTN", "TEXT",
  "CHILDAMOUNT", "TEXTVIEW", "IMAGE", "BUTTON", "PROGRESS", "RADIOBTN",
  "S_RADIOGRP", "E_RADIOGRP", "E_LINEAR", "E_RELATIVE", "S_LINEAR",
  "S_RELATIVE", "'>'", "'/'", "$accept", "root", "linear", "relative",
  "element", "textview", "image", "button", "radiogrp", "radiobtn",
  "progress", "linearattr", "relativeattr", "textattr", "imageattr",
  "buttonattr", "radiogrpattr", "radiobtnattr", "progressattr", "width",
  "height", "text", "src", "childamount", "id", "orientation", "color",
  "padding", "max", "progressmade", "checkedbtn", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-78)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -3,     4,     4,     3,   -78,   -78,    14,    -6,    23,     5,
      23,   -78,    29,    57,    34,    30,   -14,    30,    22,     4,
       4,     4,     4,     4,   -78,   -78,    35,   -78,   -78,   -78,
     -78,   -78,    37,    39,    33,    15,    46,   -78,    43,    45,
      20,    23,    27,    23,    31,    23,    38,    23,    41,    23,
      42,    57,    24,    56,    77,   -78,   -78,    52,   -78,   -78,
      53,    30,    58,    30,    59,    30,    61,    30,    64,    30,
     -78,    88,    89,    90,    91,   -78,   -78,    80,   -78,    82,
     -78,    80,   -78,    84,     4,    -7,    81,   -78,   -78,    97,
      96,   100,    93,   102,    94,    94,   103,    95,    78,    23,
      83,    64,   105,    98,   -78,   107,   108,   112,   -78,   113,
     115,   -78,   -78,   116,   118,   -78,    86,    30,   -78,   119,
     121,   -78,   -78,   120,   123,   122,   125,   114,   126,   -78,
      80,   117,   127,   128,   129,   130,   131,   133,   134,   -78,
     136,   132,   -78,   137,   -78,   138,   -78,   139,   -78,   140,
     -78,   -78,   -78,   -78
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,     0,     0,     0,
       0,     1,     0,     0,     0,    37,     0,    37,     0,     0,
       0,     0,     0,     0,     8,     9,     0,    10,    11,    12,
      13,    14,     0,     0,    39,     0,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     0,    22,     6,     0,    30,    31,
       0,    37,     0,    37,     0,    37,     0,    37,     0,    37,
       4,     0,     0,     0,     0,     5,    15,     0,    16,     0,
      17,     0,    21,    45,     0,     0,     0,    32,    33,     0,
       0,     0,    41,     0,    43,    43,     0,    47,     0,     0,
       0,    19,     0,    49,    38,     0,     0,     0,    24,     0,
       0,    25,    26,     0,     0,    29,     0,    37,    18,     0,
       0,    27,    40,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,    34,     0,    35,     0,    46,     0,    36,     0,
      42,    44,    48,    50
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -78,   -78,   145,   146,    -4,   -78,   -78,   -78,   -78,    65,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,     0,
      -9,   -77,   -78,   -78,   -17,   -78,   -78,    54,   -78,   -78,
     -78
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,    24,    25,    51,    27,    28,    29,    30,   101,
      31,     7,     9,    40,    42,    44,    48,    98,    46,     8,
      15,    92,    94,   103,    34,    55,   108,   111,    97,   115,
     121
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      37,    17,    10,    11,    95,    19,    20,    21,    22,    26,
      23,     6,    36,    35,     1,     2,    84,    12,   100,    41,
      43,    45,    47,    49,    13,     1,     2,    38,    39,    71,
      72,    14,    61,    18,    63,    16,    65,    32,    67,    33,
      69,    52,    53,    54,    77,    56,    79,    58,    81,    59,
      83,    60,    86,   139,    19,    20,    21,    22,    62,    23,
      73,    50,    64,     1,     2,    19,    20,    21,    22,    66,
      23,    68,    70,    57,     1,     2,    19,    20,    21,    22,
      74,    23,    75,    76,    99,     1,     2,    84,    78,    80,
     117,    82,    87,    88,    93,    90,    89,    91,    96,   102,
     130,   104,   105,   106,   107,   109,   113,   110,   119,   116,
     114,   122,   123,   118,   120,   124,   129,   125,   126,   137,
     127,   128,   140,   131,   132,     0,   133,   134,   135,   136,
     138,   141,   142,    85,   144,   143,   145,   146,   149,   147,
     148,   150,   151,   152,   153,     4,     5,     0,     0,   112
};

static const yytype_int16 yycheck[] =
{
      17,    10,     2,     0,    81,    19,    20,    21,    22,    13,
      24,     7,    16,    27,    28,    29,    23,     3,    25,    19,
      20,    21,    22,    23,    30,    28,    29,     5,     6,     5,
       6,     8,    41,     4,    43,    30,    45,     3,    47,     9,
      49,     4,     3,    10,    61,    30,    63,     4,    65,     4,
      67,    31,    69,   130,    19,    20,    21,    22,    31,    24,
       4,    26,    31,    28,    29,    19,    20,    21,    22,    31,
      24,    30,    30,    27,    28,    29,    19,    20,    21,    22,
       3,    24,    30,    30,    84,    28,    29,    23,    30,    30,
      99,    30,     4,     4,    12,     4,     6,    17,    14,    18,
     117,     4,     6,     3,    11,     3,     3,    13,     3,    31,
      15,     4,     4,    30,    16,     3,    30,     4,     3,     5,
       4,     3,     5,     4,     3,    -1,     6,     4,     6,     4,
       4,     4,     4,    68,     4,     6,     5,     4,     6,     5,
       4,     4,     4,     4,     4,     0,     0,    -1,    -1,    95
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    28,    29,    33,    34,    35,     7,    43,    51,    44,
      51,     0,     3,    30,     8,    52,    30,    52,     4,    19,
      20,    21,    22,    24,    34,    35,    36,    37,    38,    39,
      40,    42,     3,     9,    56,    27,    36,    56,     5,     6,
      45,    51,    46,    51,    47,    51,    50,    51,    48,    51,
      26,    36,     4,     3,    10,    57,    30,    27,     4,     4,
      31,    52,    31,    52,    31,    52,    31,    52,    30,    52,
      30,     5,     6,     4,     3,    30,    30,    56,    30,    56,
      30,    56,    30,    56,    23,    41,    56,     4,     4,     6,
       4,    17,    53,    12,    54,    53,    14,    60,    49,    51,
      25,    41,    18,    55,     4,     6,     3,    11,    58,     3,
      13,    59,    59,     3,    15,    61,    31,    52,    30,     3,
      16,    62,     4,     4,     3,     4,     3,     4,     3,    30,
      56,     4,     3,     6,     4,     6,     4,     5,     4,    53,
       5,     4,     4,     6,     4,     5,     4,     5,     4,     6,
       4,     4,     4,     4
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    33,    34,    35,    35,    36,    36,    36,
      36,    36,    36,    36,    36,    37,    38,    39,    40,    41,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    51,    52,    52,    53,    54,    55,    56,    56,    57,
      57,    58,    58,    59,    59,    60,    60,    61,    61,    62,
      62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     6,     6,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     6,     2,
       4,     4,     4,     3,     5,     5,     5,     5,     4,     5,
       5,     5,     5,     5,     5,     5,     5,     0,     5,     0,
       5,     0,     5,     0,     5,     0,     5,     0,     5,     0,
       5
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
  case 18: /* radiogrp: S_RADIOGRP radiogrpattr '>' radiobtn E_RADIOGRP '>'  */
#line 79 "parse.y"
                {
			if(radioChildCount != androidChildAmount){
				printRadioChildrenAmountError((yyvsp[-5].lineno), androidChildAmount, radioChildCount, yyin);
				YYABORT;
			}

			androidChildAmount=-1;
			radioChildCount=0; //reset count

			//always atleast 1 element in radioArray cause of bnf
			if(radioCheckedID){
				if(!stringInArray(&radioArray, radioCheckedID)){
					printCheckedIDNotFoundError((yyvsp[-5].lineno), radioCheckedID, yyin);
					YYABORT;
				}
					
				free(radioCheckedID);
				radioCheckedID = NULL; //reset pointer
			} //else checkedButton attribute not found
			clearArray(&radioArray);
		}
#line 1370 "y.tab.c"
    break;

  case 20: /* radiobtn: RADIOBTN radiobtnattr '/' '>'  */
#line 104 "parse.y"
                {
		radioChildCount++;
		appendArray(&radioArray, latestIDParsed);
		}
#line 1379 "y.tab.c"
    break;

  case 27: /* radiogrpattr: width height id childamount checkedbtn  */
#line 129 "parse.y"
                {
			// Reset latest ID pointer so first id is a radiobutton's id or else NULL
			latestIDParsed = NULL;
		}
#line 1388 "y.tab.c"
    break;

  case 30: /* width: WIDTH '=' '"' VALUEINT '"'  */
#line 142 "parse.y"
                {
		if(!((yyvsp[-1].intLineno).valueInt>0)){
			printNotPositiveIntegerError(yylineno, (yyvsp[-1].intLineno).valueInt, yyin);
			YYABORT;
		}
		}
#line 1399 "y.tab.c"
    break;

  case 31: /* width: WIDTH '=' '"' VALUESTR '"'  */
#line 149 "parse.y"
                {
		if(!checkValidLayoutStr((yyvsp[-1].stringLineno).valueStr)){
			printInvalidLayoutStringError(yylineno, (yyvsp[-1].stringLineno).valueStr, yyin);
			YYABORT;
		}
						
		free((yyvsp[-1].stringLineno).valueStr); 
		}
#line 1412 "y.tab.c"
    break;

  case 32: /* height: HEIGHT '=' '"' VALUEINT '"'  */
#line 160 "parse.y"
                {
		if(!((yyvsp[-1].intLineno).valueInt>0)){
			printNotPositiveIntegerError(yylineno, (yyvsp[-1].intLineno).valueInt, yyin);
			YYABORT;
		}
		}
#line 1423 "y.tab.c"
    break;

  case 33: /* height: HEIGHT '=' '"' VALUESTR '"'  */
#line 167 "parse.y"
                {
		if(!checkValidLayoutStr((yyvsp[-1].stringLineno).valueStr)){
			printInvalidLayoutStringError(yylineno, (yyvsp[-1].stringLineno).valueStr, yyin);
			YYABORT;
		}
		free((yyvsp[-1].stringLineno).valueStr); 
		}
#line 1435 "y.tab.c"
    break;

  case 34: /* text: TEXT '=' '"' VALUESTR '"'  */
#line 176 "parse.y"
                                  {free((yyvsp[-1].stringLineno).valueStr);}
#line 1441 "y.tab.c"
    break;

  case 35: /* src: SRC '=' '"' VALUESTR '"'  */
#line 179 "parse.y"
                                 {free((yyvsp[-1].stringLineno).valueStr);}
#line 1447 "y.tab.c"
    break;

  case 36: /* childamount: CHILDAMOUNT '=' '"' VALUEINT '"'  */
#line 182 "parse.y"
                                         {androidChildAmount = (yyvsp[-1].intLineno).valueInt;}
#line 1453 "y.tab.c"
    break;

  case 38: /* id: ID '=' '"' VALUESTR '"'  */
#line 187 "parse.y"
                {
		if(stringInArray(&idArray, (yyvsp[-1].stringLineno).valueStr)){
			printDuplicateIDError(yylineno, (yyvsp[-1].stringLineno).valueStr, yyin);
			YYABORT;
		}

		//else
		appendArray(&idArray, (yyvsp[-1].stringLineno).valueStr);
		latestIDParsed = idArray.array[idArray.length - 1];
		free((yyvsp[-1].stringLineno).valueStr); //free memory allocated from flex.
		}
#line 1469 "y.tab.c"
    break;

  case 40: /* orientation: ORIENTATION '=' '"' VALUESTR '"'  */
#line 201 "parse.y"
                                           {free((yyvsp[-1].stringLineno).valueStr);}
#line 1475 "y.tab.c"
    break;

  case 42: /* color: COLOR '=' '"' VALUESTR '"'  */
#line 205 "parse.y"
                                     {free((yyvsp[-1].stringLineno).valueStr);}
#line 1481 "y.tab.c"
    break;

  case 44: /* padding: PADDING '=' '"' VALUEINT '"'  */
#line 210 "parse.y"
                {
		if(!((yyvsp[-1].intLineno).valueInt>0)){
			printNotPositiveIntegerError(yylineno, (yyvsp[-1].intLineno).valueInt, yyin);
			YYABORT;
		}
		}
#line 1492 "y.tab.c"
    break;

  case 46: /* max: MAX '=' '"' VALUEINT '"'  */
#line 220 "parse.y"
                {
		androidMax = (yyvsp[-1].intLineno).valueInt;
		if (!(androidMax>0)) {
			printNotPositiveIntegerError(yylineno, (yyvsp[-1].intLineno).valueInt, yyin);
			YYABORT;
		}
		}
#line 1504 "y.tab.c"
    break;

  case 48: /* progressmade: PROGRESSMADE '=' '"' VALUEINT '"'  */
#line 231 "parse.y"
                {
		if(!((yyvsp[-1].intLineno).valueInt>0)){
			printNotPositiveIntegerError(yylineno, (yyvsp[-1].intLineno).valueInt, yyin);
			YYABORT;
		}

		/* By design, if androidMax is different from -1 it means that a
		valid value has been assigned to it. (from max rule)*/
		if(androidMax!=-1)
			if(!((yyvsp[-1].intLineno).valueInt>=0 && (yyvsp[-1].intLineno).valueInt<=androidMax)){
				printInvalidProgressAndMaxError(yylineno, androidMax, (yyvsp[-1].intLineno).valueInt, yyin);
				YYABORT;
			}
		androidMax=-1; //Reset value
		}
#line 1524 "y.tab.c"
    break;

  case 50: /* checkedbtn: CHECKEDBTN '=' '"' VALUESTR '"'  */
#line 249 "parse.y"
                                          { radioCheckedID = strdup((yyvsp[-1].stringLineno).valueStr); }
#line 1530 "y.tab.c"
    break;


#line 1534 "y.tab.c"

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

#line 251 "parse.y"


int yyerror(char *s)
{
	printf("\033[1;31m");
	printf("Syntax Error\n");
	printf("Unexpected Token\n");
	printf("\033[0;36m");
	printf("Line: ");
	printf("\033[0m");
	printf("%d ", yylineno);
	printf("\033[0;36m");
	printf("Text: ");
	printf("\033[0m");
	printf("%s\n", yytext);

	printErrorIndicator(yylineno,yyin);
	return 0;
}

int main(int argc, char **argv){
	#if YYDEBUG == 1
  		yydebug = 1;
	#endif

	++argv; --argc;
    if(argc == 1)
        yyin = fopen(argv[0], "r");
    else {
		printf("\033[1;31m");
		printf("Incorrect amount of inputs given.\n");
		printf("\033[0;36m");
		return 0;
	}

	printf("Checking syntax...\n");
    
	if (!yyparse()) {
		printErrorIndicator(-1,yyin);
	}

	printf("=====END=====\n");
    return 0;
}
