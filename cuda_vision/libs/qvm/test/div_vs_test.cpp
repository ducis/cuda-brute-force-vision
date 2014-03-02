//Copyright (c) 2008-2010 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <boost/qvm/v.hpp>
#include <boost/qvm/vec.hpp>
#include "test_qvm_vector.hpp"
#include "gold.hpp"

namespace
    {
    template <class T,class U> struct same_type_tester;
    template <class T> struct same_type_tester<T,T> { };
    template <class T,class U> void test_same_type( T, U ) { same_type_tester<T,U>(); }

    template <int Dim>
    void
    test()
        {
        using namespace boost::qvm::sfinae;
        test_qvm::vector<V1,Dim> const x(42,1);
        test_qvm::scalar_multiply_v(x.b,x.a,0.5f);
        test_same_type(x,x/2);
            {
            test_qvm::vector<V1,Dim> y=x/2;
            BOOST_QVM_TEST_EQ(x.b,y.a);
            }
            {
            test_qvm::vector<V1,Dim> y=vref(x)/2;
            BOOST_QVM_TEST_EQ(x.b,y.a);
            }
        }
    }

int
main()
    {
    test<1>();
    test<2>();
    test<3>();
    test<4>();
    test<5>();
    return boost::report_errors();
    }
