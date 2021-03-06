//Copyright (c) 2008-2010 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <boost/qvm/deduce_s.hpp>

struct foo;
struct bar;
typedef boost::qvm::deduce_s<foo,bar>::type user_defined_types_require_specialization;
