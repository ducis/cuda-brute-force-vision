//Copyright (c) 2008-2010 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <boost/qvm/v.hpp>
#include <boost/qvm/vec.hpp>
#include "test_qvm_vector.hpp"

namespace
    {
    template <class T,class U>
    struct same_type;

    template <class T>
    struct
    same_type<T,T>
        {
        };

    template <class T,class U>
    void
    check_deduction( T const &, U const & )
        {
        same_type<T,typename boost::qvm::deduce_v<U>::type>();
        }

    template <int Dim>
    void
    test()
        {
        using namespace boost::qvm;
        test_qvm::vector<V1,Dim> v1=zero_v<float,Dim>();
        for( int i=0; i!=Dim; ++i )
                BOOST_TEST(!v1.a[i]);
        test_qvm::vector<V2,Dim> v2(42,1);
        set_zero(v2);
        for( int i=0; i!=Dim; ++i )
                BOOST_TEST(!v2.a[i]);
        check_deduction(vec<float,Dim>(),zero_v<float,Dim>());
        check_deduction(vec<int,Dim>(),zero_v<int,Dim>());
        }
    }

int
main()
    {
    test<2>();
    test<3>();
    test<4>();
    test<5>();
    return boost::report_errors();
    }
