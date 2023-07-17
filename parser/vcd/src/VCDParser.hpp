// A Bison parser, made by GNU Bison 3.5.1.

// Skeleton interface for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


/**
 ** \file VCDParser.hpp
 ** Define the VCDParser::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.

#ifndef YY_VCDPARSER_VCDPARSER_HPP_INCLUDED
# define YY_VCDPARSER_VCDPARSER_HPP_INCLUDED
// "%code requires" blocks.
#line 16 "VCDParser.ypp"

    #include <string>
    #include <map>

    #include "VCDTypes.hpp"
    #include "VCDFile.hpp"

    class VCDFileParser;

#line 58 "VCDParser.hpp"

# include <cassert>
# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif
# include "location.hh"
#include <typeinfo>
#ifndef YY_ASSERT
# include <cassert>
# define YY_ASSERT assert
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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
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

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

namespace VCDParser {
#line 192 "VCDParser.hpp"




  /// A Bison parser.
  class parser
  {
  public:
#ifndef YYSTYPE
  /// A buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current parser state.
  class semantic_type
  {
  public:
    /// Type of *this.
    typedef semantic_type self_type;

    /// Empty construction.
    semantic_type () YY_NOEXCEPT
      : yybuffer_ ()
      , yytypeid_ (YY_NULLPTR)
    {}

    /// Construct and fill.
    template <typename T>
    semantic_type (YY_RVREF (T) t)
      : yytypeid_ (&typeid (T))
    {
      YY_ASSERT (sizeof (T) <= size);
      new (yyas_<T> ()) T (YY_MOVE (t));
    }

    /// Destruction, allowed only if empty.
    ~semantic_type () YY_NOEXCEPT
    {
      YY_ASSERT (!yytypeid_);
    }

# if 201103L <= YY_CPLUSPLUS
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename... U>
    T&
    emplace (U&&... u)
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (std::forward <U>(u)...);
    }
# else
    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T ();
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (t);
    }
# endif

    /// Instantiate an empty \a T in here.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build ()
    {
      return emplace<T> ();
    }

    /// Instantiate a \a T in here from \a t.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build (const T& t)
    {
      return emplace<T> (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as () YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == typeid (T));
      YY_ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == typeid (T));
      YY_ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Swap the content with \a that, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsibility.
    /// Swapping between built and (possibly) non-built is done with
    /// self_type::move ().
    template <typename T>
    void
    swap (self_type& that) YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == *that.yytypeid_);
      std::swap (as<T> (), that.as<T> ());
    }

    /// Move the content of \a that to this.
    ///
    /// Destroys \a that.
    template <typename T>
    void
    move (self_type& that)
    {
# if 201103L <= YY_CPLUSPLUS
      emplace<T> (std::move (that.as<T> ()));
# else
      emplace<T> ();
      swap<T> (that);
# endif
      that.destroy<T> ();
    }

# if 201103L <= YY_CPLUSPLUS
    /// Move the content of \a that to this.
    template <typename T>
    void
    move (self_type&& that)
    {
      emplace<T> (std::move (that.as<T> ()));
      that.destroy<T> ();
    }
#endif

    /// Copy the content of \a that to this.
    template <typename T>
    void
    copy (const self_type& that)
    {
      emplace<T> (that.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
      yytypeid_ = YY_NULLPTR;
    }

  private:
    /// Prohibit blind copies.
    self_type& operator= (const self_type&);
    semantic_type (const self_type&);

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ () YY_NOEXCEPT
    {
      void *yyp = yybuffer_.yyraw;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const YY_NOEXCEPT
    {
      const void *yyp = yybuffer_.yyraw;
      return static_cast<const T*> (yyp);
     }

    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {
      // TOK_VALUE
      char dummy1[sizeof (VCDBit)];

      // TOK_KW_BEGIN
      // TOK_KW_FORK
      // TOK_KW_FUNCTION
      // TOK_KW_MODULE
      // TOK_KW_TASK
      // scope_type
      char dummy2[sizeof (VCDScopeType)];

      // reference
      char dummy3[sizeof (VCDSignal*)];

      // TOK_TIME_NUMBER
      char dummy4[sizeof (VCDTimeRes)];

      // TOK_TIME_UNIT
      char dummy5[sizeof (VCDTimeUnit)];

      // TOK_VAR_TYPE
      char dummy6[sizeof (VCDVarType)];

      // TOK_DECIMAL_NUM
      char dummy7[sizeof (int64_t)];

      // TOK_COMMENT_TEXT
      // TOK_DATE_TEXT
      // TOK_VERSION_TEXT
      // TOK_BIN_NUM
      // TOK_REAL_NUM
      // TOK_IDENTIFIER
      // TOK_IDENTIFIER_EXTEND
      // comment_text
      // version_text
      // date_text
      char dummy8[sizeof (std::string)];
    };

    /// The size of the largest semantic type.
    enum { size = sizeof (union_type) };

    /// A buffer to store semantic values.
    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me;
      /// A buffer large enough to store any of the semantic values.
      char yyraw[size];
    } yybuffer_;

    /// Whether the content is built: if defined, the name of the stored type.
    const std::type_info *yytypeid_;
  };

#else
    typedef YYSTYPE semantic_type;
#endif
    /// Symbol locations.
    typedef location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Tokens.
    struct token
    {
      enum yytokentype
      {
        END = 0,
        TOK_BRACKET_O = 258,
        TOK_BRACKET_C = 259,
        TOK_COLON = 260,
        TOK_DOLLAR = 261,
        TOK_KW_END = 262,
        TOK_KW_COMMENT = 263,
        TOK_COMMENT_TEXT = 264,
        TOK_KW_DATE = 265,
        TOK_DATE_TEXT = 266,
        TOK_KW_ENDDEFINITIONS = 267,
        TOK_KW_SCOPE = 268,
        TOK_KW_TIMESCALE = 269,
        TOK_KW_UPSCOPE = 270,
        TOK_KW_VAR = 271,
        TOK_KW_VERSION = 272,
        TOK_VERSION_TEXT = 273,
        TOK_KW_DUMPALL = 274,
        TOK_KW_DUMPOFF = 275,
        TOK_KW_DUMPON = 276,
        TOK_KW_DUMPVARS = 277,
        TOK_KW_BEGIN = 278,
        TOK_KW_FORK = 279,
        TOK_KW_FUNCTION = 280,
        TOK_KW_MODULE = 281,
        TOK_KW_TASK = 282,
        TOK_TIME_NUMBER = 283,
        TOK_TIME_UNIT = 284,
        TOK_VAR_TYPE = 285,
        TOK_HASH = 286,
        TOK_VALUE = 287,
        TOK_BIN_NUM = 288,
        TOK_BINARY_NUMBER = 289,
        TOK_REAL_NUM = 290,
        TOK_REAL_NUMBER = 291,
        TOK_IDENTIFIER = 292,
        TOK_DECIMAL_NUM = 293
      };
    };

    /// (External) token type, as returned by yylex.
    typedef token::yytokentype token_type;

    /// Symbol type: an internal symbol number.
    typedef int symbol_number_type;

    /// The symbol type number to denote an empty symbol.
    enum { empty_symbol = -2 };

    /// Internal symbol number for tokens (subsumed by symbol_number_type).
    typedef signed char token_number_type;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol type
    /// via type_get ().
    ///
    /// Provide access to semantic value and location.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol ()
        : value ()
        , location ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that);
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, location_type&& l)
        : Base (t)
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const location_type& l)
        : Base (t)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, VCDBit&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const VCDBit& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, VCDScopeType&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const VCDScopeType& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, VCDSignal*&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const VCDSignal*& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, VCDTimeRes&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const VCDTimeRes& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, VCDTimeUnit&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const VCDTimeUnit& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, VCDVarType&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const VCDVarType& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, int64_t&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const int64_t& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::string&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::string& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }

      /// Destroy contents, and record that is empty.
      void clear ()
      {
        // User destructor.
        symbol_number_type yytype = this->type_get ();
        basic_symbol<Base>& yysym = *this;
        (void) yysym;
        switch (yytype)
        {
       default:
          break;
        }

        // Type destructor.
switch (yytype)
    {
      case 32: // TOK_VALUE
        value.template destroy< VCDBit > ();
        break;

      case 23: // TOK_KW_BEGIN
      case 24: // TOK_KW_FORK
      case 25: // TOK_KW_FUNCTION
      case 26: // TOK_KW_MODULE
      case 27: // TOK_KW_TASK
      case 45: // scope_type
        value.template destroy< VCDScopeType > ();
        break;

      case 52: // reference
        value.template destroy< VCDSignal* > ();
        break;

      case 28: // TOK_TIME_NUMBER
        value.template destroy< VCDTimeRes > ();
        break;

      case 29: // TOK_TIME_UNIT
        value.template destroy< VCDTimeUnit > ();
        break;

      case 30: // TOK_VAR_TYPE
        value.template destroy< VCDVarType > ();
        break;

      case 38: // TOK_DECIMAL_NUM
        value.template destroy< int64_t > ();
        break;

      case 9: // TOK_COMMENT_TEXT
      case 11: // TOK_DATE_TEXT
      case 18: // TOK_VERSION_TEXT
      case 33: // TOK_BIN_NUM
      case 35: // TOK_REAL_NUM
      case 37: // TOK_IDENTIFIER
      case 51: // TOK_IDENTIFIER_EXTEND
      case 53: // comment_text
      case 54: // version_text
      case 55: // date_text
        value.template destroy< std::string > ();
        break;

      default:
        break;
    }

        Base::clear ();
      }

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      semantic_type value;

      /// The location.
      location_type location;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_type
    {
      /// Default constructor.
      by_type ();

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_type (by_type&& that);
#endif

      /// Copy constructor.
      by_type (const by_type& that);

      /// The symbol type as needed by the constructor.
      typedef token_type kind_type;

      /// Constructor from (external) token numbers.
      by_type (kind_type t);

      /// Record that this symbol is empty.
      void clear ();

      /// Steal the symbol type from \a that.
      void move (by_type& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_number_type type_get () const YY_NOEXCEPT;

      /// The symbol type.
      /// \a empty_symbol when empty.
      /// An int, not token_number_type, to be able to store empty_symbol.
      int type;
    };

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_type>
    {
      /// Superclass.
      typedef basic_symbol<by_type> super_type;

      /// Empty symbol.
      symbol_type () {}

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, location_type l)
        : super_type(token_type (tok), std::move (l))
      {
        YY_ASSERT (tok == token::END || tok == token::TOK_BRACKET_O || tok == token::TOK_BRACKET_C || tok == token::TOK_COLON || tok == token::TOK_DOLLAR || tok == token::TOK_KW_END || tok == token::TOK_KW_COMMENT || tok == token::TOK_KW_DATE || tok == token::TOK_KW_ENDDEFINITIONS || tok == token::TOK_KW_SCOPE || tok == token::TOK_KW_TIMESCALE || tok == token::TOK_KW_UPSCOPE || tok == token::TOK_KW_VAR || tok == token::TOK_KW_VERSION || tok == token::TOK_KW_DUMPALL || tok == token::TOK_KW_DUMPOFF || tok == token::TOK_KW_DUMPON || tok == token::TOK_KW_DUMPVARS || tok == token::TOK_HASH || tok == token::TOK_BINARY_NUMBER || tok == token::TOK_REAL_NUMBER);
      }
#else
      symbol_type (int tok, const location_type& l)
        : super_type(token_type (tok), l)
      {
        YY_ASSERT (tok == token::END || tok == token::TOK_BRACKET_O || tok == token::TOK_BRACKET_C || tok == token::TOK_COLON || tok == token::TOK_DOLLAR || tok == token::TOK_KW_END || tok == token::TOK_KW_COMMENT || tok == token::TOK_KW_DATE || tok == token::TOK_KW_ENDDEFINITIONS || tok == token::TOK_KW_SCOPE || tok == token::TOK_KW_TIMESCALE || tok == token::TOK_KW_UPSCOPE || tok == token::TOK_KW_VAR || tok == token::TOK_KW_VERSION || tok == token::TOK_KW_DUMPALL || tok == token::TOK_KW_DUMPOFF || tok == token::TOK_KW_DUMPON || tok == token::TOK_KW_DUMPVARS || tok == token::TOK_HASH || tok == token::TOK_BINARY_NUMBER || tok == token::TOK_REAL_NUMBER);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, VCDBit v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YY_ASSERT (tok == token::TOK_VALUE);
      }
#else
      symbol_type (int tok, const VCDBit& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YY_ASSERT (tok == token::TOK_VALUE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, VCDScopeType v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YY_ASSERT (tok == token::TOK_KW_BEGIN || tok == token::TOK_KW_FORK || tok == token::TOK_KW_FUNCTION || tok == token::TOK_KW_MODULE || tok == token::TOK_KW_TASK);
      }
#else
      symbol_type (int tok, const VCDScopeType& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YY_ASSERT (tok == token::TOK_KW_BEGIN || tok == token::TOK_KW_FORK || tok == token::TOK_KW_FUNCTION || tok == token::TOK_KW_MODULE || tok == token::TOK_KW_TASK);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, VCDTimeRes v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YY_ASSERT (tok == token::TOK_TIME_NUMBER);
      }
#else
      symbol_type (int tok, const VCDTimeRes& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YY_ASSERT (tok == token::TOK_TIME_NUMBER);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, VCDTimeUnit v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YY_ASSERT (tok == token::TOK_TIME_UNIT);
      }
#else
      symbol_type (int tok, const VCDTimeUnit& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YY_ASSERT (tok == token::TOK_TIME_UNIT);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, VCDVarType v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YY_ASSERT (tok == token::TOK_VAR_TYPE);
      }
#else
      symbol_type (int tok, const VCDVarType& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YY_ASSERT (tok == token::TOK_VAR_TYPE);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, int64_t v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YY_ASSERT (tok == token::TOK_DECIMAL_NUM);
      }
#else
      symbol_type (int tok, const int64_t& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YY_ASSERT (tok == token::TOK_DECIMAL_NUM);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, std::string v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YY_ASSERT (tok == token::TOK_COMMENT_TEXT || tok == token::TOK_DATE_TEXT || tok == token::TOK_VERSION_TEXT || tok == token::TOK_BIN_NUM || tok == token::TOK_REAL_NUM || tok == token::TOK_IDENTIFIER);
      }
#else
      symbol_type (int tok, const std::string& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YY_ASSERT (tok == token::TOK_COMMENT_TEXT || tok == token::TOK_DATE_TEXT || tok == token::TOK_VERSION_TEXT || tok == token::TOK_BIN_NUM || tok == token::TOK_REAL_NUM || tok == token::TOK_IDENTIFIER);
      }
#endif
    };

    /// Build a parser object.
    parser (VCDFileParser & driver_yyarg);
    virtual ~parser ();

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if YYDEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    // Implementation of make_symbol for each symbol type.
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_END (location_type l)
      {
        return symbol_type (token::END, std::move (l));
      }
#else
      static
      symbol_type
      make_END (const location_type& l)
      {
        return symbol_type (token::END, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_BRACKET_O (location_type l)
      {
        return symbol_type (token::TOK_BRACKET_O, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_BRACKET_O (const location_type& l)
      {
        return symbol_type (token::TOK_BRACKET_O, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_BRACKET_C (location_type l)
      {
        return symbol_type (token::TOK_BRACKET_C, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_BRACKET_C (const location_type& l)
      {
        return symbol_type (token::TOK_BRACKET_C, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_COLON (location_type l)
      {
        return symbol_type (token::TOK_COLON, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_COLON (const location_type& l)
      {
        return symbol_type (token::TOK_COLON, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_DOLLAR (location_type l)
      {
        return symbol_type (token::TOK_DOLLAR, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_DOLLAR (const location_type& l)
      {
        return symbol_type (token::TOK_DOLLAR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_KW_END (location_type l)
      {
        return symbol_type (token::TOK_KW_END, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_KW_END (const location_type& l)
      {
        return symbol_type (token::TOK_KW_END, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_KW_COMMENT (location_type l)
      {
        return symbol_type (token::TOK_KW_COMMENT, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_KW_COMMENT (const location_type& l)
      {
        return symbol_type (token::TOK_KW_COMMENT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_COMMENT_TEXT (std::string v, location_type l)
      {
        return symbol_type (token::TOK_COMMENT_TEXT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_COMMENT_TEXT (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_COMMENT_TEXT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_KW_DATE (location_type l)
      {
        return symbol_type (token::TOK_KW_DATE, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_KW_DATE (const location_type& l)
      {
        return symbol_type (token::TOK_KW_DATE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_DATE_TEXT (std::string v, location_type l)
      {
        return symbol_type (token::TOK_DATE_TEXT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_DATE_TEXT (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_DATE_TEXT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_KW_ENDDEFINITIONS (location_type l)
      {
        return symbol_type (token::TOK_KW_ENDDEFINITIONS, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_KW_ENDDEFINITIONS (const location_type& l)
      {
        return symbol_type (token::TOK_KW_ENDDEFINITIONS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_KW_SCOPE (location_type l)
      {
        return symbol_type (token::TOK_KW_SCOPE, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_KW_SCOPE (const location_type& l)
      {
        return symbol_type (token::TOK_KW_SCOPE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_KW_TIMESCALE (location_type l)
      {
        return symbol_type (token::TOK_KW_TIMESCALE, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_KW_TIMESCALE (const location_type& l)
      {
        return symbol_type (token::TOK_KW_TIMESCALE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_KW_UPSCOPE (location_type l)
      {
        return symbol_type (token::TOK_KW_UPSCOPE, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_KW_UPSCOPE (const location_type& l)
      {
        return symbol_type (token::TOK_KW_UPSCOPE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_KW_VAR (location_type l)
      {
        return symbol_type (token::TOK_KW_VAR, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_KW_VAR (const location_type& l)
      {
        return symbol_type (token::TOK_KW_VAR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_KW_VERSION (location_type l)
      {
        return symbol_type (token::TOK_KW_VERSION, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_KW_VERSION (const location_type& l)
      {
        return symbol_type (token::TOK_KW_VERSION, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_VERSION_TEXT (std::string v, location_type l)
      {
        return symbol_type (token::TOK_VERSION_TEXT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_VERSION_TEXT (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_VERSION_TEXT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_KW_DUMPALL (location_type l)
      {
        return symbol_type (token::TOK_KW_DUMPALL, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_KW_DUMPALL (const location_type& l)
      {
        return symbol_type (token::TOK_KW_DUMPALL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_KW_DUMPOFF (location_type l)
      {
        return symbol_type (token::TOK_KW_DUMPOFF, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_KW_DUMPOFF (const location_type& l)
      {
        return symbol_type (token::TOK_KW_DUMPOFF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_KW_DUMPON (location_type l)
      {
        return symbol_type (token::TOK_KW_DUMPON, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_KW_DUMPON (const location_type& l)
      {
        return symbol_type (token::TOK_KW_DUMPON, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_KW_DUMPVARS (location_type l)
      {
        return symbol_type (token::TOK_KW_DUMPVARS, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_KW_DUMPVARS (const location_type& l)
      {
        return symbol_type (token::TOK_KW_DUMPVARS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_KW_BEGIN (VCDScopeType v, location_type l)
      {
        return symbol_type (token::TOK_KW_BEGIN, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_KW_BEGIN (const VCDScopeType& v, const location_type& l)
      {
        return symbol_type (token::TOK_KW_BEGIN, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_KW_FORK (VCDScopeType v, location_type l)
      {
        return symbol_type (token::TOK_KW_FORK, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_KW_FORK (const VCDScopeType& v, const location_type& l)
      {
        return symbol_type (token::TOK_KW_FORK, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_KW_FUNCTION (VCDScopeType v, location_type l)
      {
        return symbol_type (token::TOK_KW_FUNCTION, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_KW_FUNCTION (const VCDScopeType& v, const location_type& l)
      {
        return symbol_type (token::TOK_KW_FUNCTION, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_KW_MODULE (VCDScopeType v, location_type l)
      {
        return symbol_type (token::TOK_KW_MODULE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_KW_MODULE (const VCDScopeType& v, const location_type& l)
      {
        return symbol_type (token::TOK_KW_MODULE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_KW_TASK (VCDScopeType v, location_type l)
      {
        return symbol_type (token::TOK_KW_TASK, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_KW_TASK (const VCDScopeType& v, const location_type& l)
      {
        return symbol_type (token::TOK_KW_TASK, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_TIME_NUMBER (VCDTimeRes v, location_type l)
      {
        return symbol_type (token::TOK_TIME_NUMBER, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_TIME_NUMBER (const VCDTimeRes& v, const location_type& l)
      {
        return symbol_type (token::TOK_TIME_NUMBER, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_TIME_UNIT (VCDTimeUnit v, location_type l)
      {
        return symbol_type (token::TOK_TIME_UNIT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_TIME_UNIT (const VCDTimeUnit& v, const location_type& l)
      {
        return symbol_type (token::TOK_TIME_UNIT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_VAR_TYPE (VCDVarType v, location_type l)
      {
        return symbol_type (token::TOK_VAR_TYPE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_VAR_TYPE (const VCDVarType& v, const location_type& l)
      {
        return symbol_type (token::TOK_VAR_TYPE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_HASH (location_type l)
      {
        return symbol_type (token::TOK_HASH, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_HASH (const location_type& l)
      {
        return symbol_type (token::TOK_HASH, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_VALUE (VCDBit v, location_type l)
      {
        return symbol_type (token::TOK_VALUE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_VALUE (const VCDBit& v, const location_type& l)
      {
        return symbol_type (token::TOK_VALUE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_BIN_NUM (std::string v, location_type l)
      {
        return symbol_type (token::TOK_BIN_NUM, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_BIN_NUM (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_BIN_NUM, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_BINARY_NUMBER (location_type l)
      {
        return symbol_type (token::TOK_BINARY_NUMBER, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_BINARY_NUMBER (const location_type& l)
      {
        return symbol_type (token::TOK_BINARY_NUMBER, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_REAL_NUM (std::string v, location_type l)
      {
        return symbol_type (token::TOK_REAL_NUM, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_REAL_NUM (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_REAL_NUM, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_REAL_NUMBER (location_type l)
      {
        return symbol_type (token::TOK_REAL_NUMBER, std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_REAL_NUMBER (const location_type& l)
      {
        return symbol_type (token::TOK_REAL_NUMBER, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_IDENTIFIER (std::string v, location_type l)
      {
        return symbol_type (token::TOK_IDENTIFIER, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_IDENTIFIER (const std::string& v, const location_type& l)
      {
        return symbol_type (token::TOK_IDENTIFIER, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TOK_DECIMAL_NUM (int64_t v, location_type l)
      {
        return symbol_type (token::TOK_DECIMAL_NUM, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_TOK_DECIMAL_NUM (const int64_t& v, const location_type& l)
      {
        return symbol_type (token::TOK_DECIMAL_NUM, v, l);
      }
#endif


  private:
    /// This class is not copyable.
    parser (const parser&);
    parser& operator= (const parser&);

    /// Stored state numbers (used for stacks).
    typedef signed char state_type;

    /// Generate an error message.
    /// \param yystate   the state where the error occurred.
    /// \param yyla      the lookahead token.
    virtual std::string yysyntax_error_ (state_type yystate,
                                         const symbol_type& yyla) const;

    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    static state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue);

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue);

    static const signed char yypact_ninf_;
    static const signed char yytable_ninf_;

    /// Convert a scanner token number \a t to a symbol number.
    /// In theory \a t should be a token_type, but character literals
    /// are valid, yet not members of the token_type enum.
    static token_number_type yytranslate_ (int t);

    // Tables.
    // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    // STATE-NUM.
    static const signed char yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const signed char yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const signed char yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const signed char yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const signed char yytable_[];

    static const signed char yycheck_[];

    // YYSTOS[STATE-NUM] -- The (internal number of the) accessing
    // symbol of state STATE-NUM.
    static const signed char yystos_[];

    // YYR1[YYN] -- Symbol number of symbol that rule YYN derives.
    static const signed char yyr1_[];

    // YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.
    static const signed char yyr2_[];


    /// Convert the symbol name \a n to a form suitable for a diagnostic.
    static std::string yytnamerr_ (const char *n);


    /// For a symbol, its name in clear.
    static const char* const yytname_[];
#if YYDEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const short yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r);
    /// Print the state stack on the debug stream.
    virtual void yystack_print_ ();

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol type, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol type as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol type from \a that.
      void move (by_state& that);

      /// The (internal) type number (corresponding to \a state).
      /// \a empty_symbol when empty.
      symbol_number_type type_get () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      /// We use the initial state, as it does not have a value.
      enum { empty_state = 0 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);

      /// Assignment, needed by push_back by other implementations.
      /// Needed by some other old implementations.
      stack_symbol_type& operator= (const stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::reverse_iterator iterator;
      typedef typename S::const_reverse_iterator const_iterator;
      typedef typename S::size_type size_type;
      typedef typename std::ptrdiff_t index_type;

      stack (size_type n = 200)
        : seq_ (n)
      {}

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (index_type i) const
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (index_type i)
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (std::ptrdiff_t n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      index_type
      size () const YY_NOEXCEPT
      {
        return index_type (seq_.size ());
      }

      std::ptrdiff_t
      ssize () const YY_NOEXCEPT
      {
        return std::ptrdiff_t (size ());
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.rbegin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.rend ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, index_type range)
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (index_type i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        index_type range_;
      };

    private:
      stack (const stack&);
      stack& operator= (const stack&);
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;

    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1);

    /// Some specific tokens.
    static const token_number_type yy_error_token_ = 1;
    static const token_number_type yy_undef_token_ = 2;

    /// Constants.
    enum
    {
      yyeof_ = 0,
      yylast_ = 106,     ///< Last index in yytable_.
      yynnts_ = 17,  ///< Number of nonterminal symbols.
      yyfinal_ = 54, ///< Termination state number.
      yyntokens_ = 39  ///< Number of tokens.
    };


    // User arguments.
    VCDFileParser & driver;
  };

  inline
  parser::token_number_type
  parser::yytranslate_ (int t)
  {
    // YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to
    // TOKEN-NUM as returned by yylex.
    static
    const token_number_type
    translate_table[] =
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
      35,    36,    37,    38
    };
    const int user_token_number_max_ = 293;

    if (t <= 0)
      return yyeof_;
    else if (t <= user_token_number_max_)
      return translate_table[t];
    else
      return yy_undef_token_;
  }

  // basic_symbol.
#if 201103L <= YY_CPLUSPLUS
  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (basic_symbol&& that)
    : Base (std::move (that))
    , value ()
    , location (std::move (that.location))
  {
    switch (this->type_get ())
    {
      case 32: // TOK_VALUE
        value.move< VCDBit > (std::move (that.value));
        break;

      case 23: // TOK_KW_BEGIN
      case 24: // TOK_KW_FORK
      case 25: // TOK_KW_FUNCTION
      case 26: // TOK_KW_MODULE
      case 27: // TOK_KW_TASK
      case 45: // scope_type
        value.move< VCDScopeType > (std::move (that.value));
        break;

      case 52: // reference
        value.move< VCDSignal* > (std::move (that.value));
        break;

      case 28: // TOK_TIME_NUMBER
        value.move< VCDTimeRes > (std::move (that.value));
        break;

      case 29: // TOK_TIME_UNIT
        value.move< VCDTimeUnit > (std::move (that.value));
        break;

      case 30: // TOK_VAR_TYPE
        value.move< VCDVarType > (std::move (that.value));
        break;

      case 38: // TOK_DECIMAL_NUM
        value.move< int64_t > (std::move (that.value));
        break;

      case 9: // TOK_COMMENT_TEXT
      case 11: // TOK_DATE_TEXT
      case 18: // TOK_VERSION_TEXT
      case 33: // TOK_BIN_NUM
      case 35: // TOK_REAL_NUM
      case 37: // TOK_IDENTIFIER
      case 51: // TOK_IDENTIFIER_EXTEND
      case 53: // comment_text
      case 54: // version_text
      case 55: // date_text
        value.move< std::string > (std::move (that.value));
        break;

      default:
        break;
    }

  }
#endif

  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
    , location (that.location)
  {
    switch (this->type_get ())
    {
      case 32: // TOK_VALUE
        value.copy< VCDBit > (YY_MOVE (that.value));
        break;

      case 23: // TOK_KW_BEGIN
      case 24: // TOK_KW_FORK
      case 25: // TOK_KW_FUNCTION
      case 26: // TOK_KW_MODULE
      case 27: // TOK_KW_TASK
      case 45: // scope_type
        value.copy< VCDScopeType > (YY_MOVE (that.value));
        break;

      case 52: // reference
        value.copy< VCDSignal* > (YY_MOVE (that.value));
        break;

      case 28: // TOK_TIME_NUMBER
        value.copy< VCDTimeRes > (YY_MOVE (that.value));
        break;

      case 29: // TOK_TIME_UNIT
        value.copy< VCDTimeUnit > (YY_MOVE (that.value));
        break;

      case 30: // TOK_VAR_TYPE
        value.copy< VCDVarType > (YY_MOVE (that.value));
        break;

      case 38: // TOK_DECIMAL_NUM
        value.copy< int64_t > (YY_MOVE (that.value));
        break;

      case 9: // TOK_COMMENT_TEXT
      case 11: // TOK_DATE_TEXT
      case 18: // TOK_VERSION_TEXT
      case 33: // TOK_BIN_NUM
      case 35: // TOK_REAL_NUM
      case 37: // TOK_IDENTIFIER
      case 51: // TOK_IDENTIFIER_EXTEND
      case 53: // comment_text
      case 54: // version_text
      case 55: // date_text
        value.copy< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }



  template <typename Base>
  bool
  parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return Base::type_get () == empty_symbol;
  }

  template <typename Base>
  void
  parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->type_get ())
    {
      case 32: // TOK_VALUE
        value.move< VCDBit > (YY_MOVE (s.value));
        break;

      case 23: // TOK_KW_BEGIN
      case 24: // TOK_KW_FORK
      case 25: // TOK_KW_FUNCTION
      case 26: // TOK_KW_MODULE
      case 27: // TOK_KW_TASK
      case 45: // scope_type
        value.move< VCDScopeType > (YY_MOVE (s.value));
        break;

      case 52: // reference
        value.move< VCDSignal* > (YY_MOVE (s.value));
        break;

      case 28: // TOK_TIME_NUMBER
        value.move< VCDTimeRes > (YY_MOVE (s.value));
        break;

      case 29: // TOK_TIME_UNIT
        value.move< VCDTimeUnit > (YY_MOVE (s.value));
        break;

      case 30: // TOK_VAR_TYPE
        value.move< VCDVarType > (YY_MOVE (s.value));
        break;

      case 38: // TOK_DECIMAL_NUM
        value.move< int64_t > (YY_MOVE (s.value));
        break;

      case 9: // TOK_COMMENT_TEXT
      case 11: // TOK_DATE_TEXT
      case 18: // TOK_VERSION_TEXT
      case 33: // TOK_BIN_NUM
      case 35: // TOK_REAL_NUM
      case 37: // TOK_IDENTIFIER
      case 51: // TOK_IDENTIFIER_EXTEND
      case 53: // comment_text
      case 54: // version_text
      case 55: // date_text
        value.move< std::string > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

    location = YY_MOVE (s.location);
  }

  // by_type.
  inline
  parser::by_type::by_type ()
    : type (empty_symbol)
  {}

#if 201103L <= YY_CPLUSPLUS
  inline
  parser::by_type::by_type (by_type&& that)
    : type (that.type)
  {
    that.clear ();
  }
#endif

  inline
  parser::by_type::by_type (const by_type& that)
    : type (that.type)
  {}

  inline
  parser::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
  parser::by_type::clear ()
  {
    type = empty_symbol;
  }

  inline
  void
  parser::by_type::move (by_type& that)
  {
    type = that.type;
    that.clear ();
  }

  inline
  int
  parser::by_type::type_get () const YY_NOEXCEPT
  {
    return type;
  }

} // VCDParser
#line 2119 "VCDParser.hpp"





#endif // !YY_VCDPARSER_VCDPARSER_HPP_INCLUDED
