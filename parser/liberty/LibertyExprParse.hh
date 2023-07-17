/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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

#ifndef YY_LIB_EXPR_HOME_LINXIAOZE_PARSER_PARSER_LIBERTY_LIBERTYEXPRPARSE_HH_INCLUDED
# define YY_LIB_EXPR_HOME_LINXIAOZE_PARSER_PARSER_LIBERTY_LIBERTYEXPRPARSE_HH_INCLUDED
/* Debug traces.  */
#ifndef LIB_EXPR_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define LIB_EXPR_DEBUG 1
#  else
#   define LIB_EXPR_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define LIB_EXPR_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined LIB_EXPR_DEBUG */
#if LIB_EXPR_DEBUG
extern int lib_expr_debug;
#endif
/* "%code requires" blocks.  */
#line 1 "/home/linxiaoze/parser/parser/liberty/LibertyExprParse.y" /* yacc.c:1909  */


// Liberty function expression parser.
#include "log/Log.hh"
#include "LibertyExpr.hh"

using namespace ieda;

#define YYDEBUG 1

typedef void* yyscan_t;


#line 66 "/home/linxiaoze/parser/parser/liberty/LibertyExprParse.hh" /* yacc.c:1909  */

/* Token type.  */
#ifndef LIB_EXPR_TOKENTYPE
# define LIB_EXPR_TOKENTYPE
  enum lib_expr_tokentype
  {
    PORT = 258
  };
#endif

/* Value type.  */
#if ! defined LIB_EXPR_STYPE && ! defined LIB_EXPR_STYPE_IS_DECLARED

union LIB_EXPR_STYPE
{
#line 23 "/home/linxiaoze/parser/parser/liberty/LibertyExprParse.y" /* yacc.c:1909  */

  int int_val;
  const char *string;
  void *expr;

#line 88 "/home/linxiaoze/parser/parser/liberty/LibertyExprParse.hh" /* yacc.c:1909  */
};

typedef union LIB_EXPR_STYPE LIB_EXPR_STYPE;
# define LIB_EXPR_STYPE_IS_TRIVIAL 1
# define LIB_EXPR_STYPE_IS_DECLARED 1
#endif



int lib_expr_parse (yyscan_t yyscanner, ieda::LibertyExprBuilder *lib_expr_builder);
/* "%code provides" blocks.  */
#line 15 "/home/linxiaoze/parser/parser/liberty/LibertyExprParse.y" /* yacc.c:1909  */

#undef  YY_DECL
#define YY_DECL int lib_expr_lex(LIB_EXPR_STYPE *yylval_param, yyscan_t yyscanner, ieda::LibertyExprBuilder *lib_expr_builder)
YY_DECL;

void yyerror(yyscan_t scanner, ieda::LibertyExprBuilder *lib_expr_builder, const char *str);

#line 108 "/home/linxiaoze/parser/parser/liberty/LibertyExprParse.hh" /* yacc.c:1909  */

#endif /* !YY_LIB_EXPR_HOME_LINXIAOZE_PARSER_PARSER_LIBERTY_LIBERTYEXPRPARSE_HH_INCLUDED  */
