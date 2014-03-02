//Copyright (c) 2008-2010 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <boost/qvm/v_traits_array.hpp>
#include <boost/detail/lightweight_test.hpp>

template <class T,class U>
struct same_type;

template <class T>
struct
same_type<T,T>
    {
    };

int
main()
    {
    using namespace boost::qvm;
    BOOST_QVM_STATIC_ASSERT(is_v<int[3]>::value);
    BOOST_QVM_STATIC_ASSERT(!is_v<int[3][3]>::value);
    BOOST_QVM_STATIC_ASSERT(!is_v<int[3][3][3]>::value);
    BOOST_QVM_STATIC_ASSERT((v_traits<int[3]>::dim==3));
    same_type<v_traits<int[3]>::scalar_type,int>();
    same_type< vec<int,3>, deduce_v<int[3]>::type >();
    same_type< vec<int,3>, deduce_v<int const[3]>::type >();
    int arr[3] = {0,1,2};
    BOOST_TEST((v_traits<int[3]>::r<0>(arr)==0));
    BOOST_TEST((v_traits<int[3]>::r<1>(arr)==1));
    BOOST_TEST((v_traits<int[3]>::r<2>(arr)==2));
    BOOST_TEST((v_traits<int const[3]>::r<0>(arr)==0));
    BOOST_TEST((v_traits<int const[3]>::r<1>(arr)==1));
    BOOST_TEST((v_traits<int const[3]>::r<2>(arr)==2));
    BOOST_TEST((v_traits<int[3]>::ir(0,arr)==0));
    BOOST_TEST((v_traits<int[3]>::ir(1,arr)==1));
    BOOST_TEST((v_traits<int[3]>::ir(2,arr)==2));
    BOOST_TEST((v_traits<int const[3]>::ir(0,arr)==0));
    BOOST_TEST((v_traits<int const[3]>::ir(1,arr)==1));
    BOOST_TEST((v_traits<int const[3]>::ir(2,arr)==2));
    BOOST_TEST((&v_traits<int[3]>::w<0>(arr)==&arr[0]));
    BOOST_TEST((&v_traits<int[3]>::w<1>(arr)==&arr[1]));
    BOOST_TEST((&v_traits<int[3]>::w<2>(arr)==&arr[2]));
    BOOST_TEST((&v_traits<int[3]>::iw(0,arr)==&arr[0]));
    BOOST_TEST((&v_traits<int[3]>::iw(1,arr)==&arr[1]));
    BOOST_TEST((&v_traits<int[3]>::iw(2,arr)==&arr[2]));
    return boost::report_errors();
    }
