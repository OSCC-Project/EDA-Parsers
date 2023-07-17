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

#ifndef YY_LIB_HOME_LINXIAOZE_PARSER_PARSER_LIBERTY_LIBERTYPARSE_HH_INCLUDED
# define YY_LIB_HOME_LINXIAOZE_PARSER_PARSER_LIBERTY_LIBERTYPARSE_HH_INCLUDED
/* Debug traces.  */
#ifndef LIB_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define LIB_DEBUG 1
#  else
#   define LIB_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define LIB_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined LIB_DEBUG */
#if LIB_DEBUG
extern int lib_debug;
#endif
/* "%code requires" blocks.  */
#line 1 "/home/linxiaoze/parser/parser/liberty/LibertyParse.y" /* yacc.c:1909  */




#include "Liberty.hh"
#include "Vector.hh"
#include "log/Log.hh"
#include "string/Str.hh"

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace ieda;

#define YYDEBUG 1

typedef void* yyscan_t;


#line 73 "/home/linxiaoze/parser/parser/liberty/LibertyParse.hh" /* yacc.c:1909  */

/* Token type.  */
#ifndef LIB_TOKENTYPE
# define LIB_TOKENTYPE
  enum lib_tokentype
  {
    FLOAT = 258,
    STRING = 259,
    KEYWORD = 260
  };
#endif

/* Value type.  */
#if ! defined LIB_STYPE && ! defined LIB_STYPE_IS_DECLARED

union LIB_STYPE
{
#line 30 "/home/linxiaoze/parser/parser/liberty/LibertyParse.y" /* yacc.c:1909  */

  char *string;
  float number;
  int line;
  void* obj;

#line 98 "/home/linxiaoze/parser/parser/liberty/LibertyParse.hh" /* yacc.c:1909  */
};

typedef union LIB_STYPE LIB_STYPE;
# define LIB_STYPE_IS_TRIVIAL 1
# define LIB_STYPE_IS_DECLARED 1
#endif



int lib_parse (yyscan_t yyscanner, ieda::LibertyReader *lib_reader);
/* "%code provides" blocks.  */
#line 22 "/home/linxiaoze/parser/parser/liberty/LibertyParse.y" /* yacc.c:1909  */

#undef  YY_DECL
#define YY_DECL int lib_lex(LIB_STYPE *yylval_param, yyscan_t yyscanner, ieda::LibertyReader *lib_reader)
YY_DECL;

void yyerror(yyscan_t scanner, ieda::LibertyReader *lib_reader, const char *str);

#line 118 "/home/linxiaoze/parser/parser/liberty/LibertyParse.hh" /* yacc.c:1909  */

#endif /* !YY_LIB_HOME_LINXIAOZE_PARSER_PARSER_LIBERTY_LIBERTYPARSE_HH_INCLUDED  */
