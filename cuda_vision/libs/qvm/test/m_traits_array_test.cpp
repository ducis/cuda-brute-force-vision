//Copyright (c) 2008-2010 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <boost/qvm/m_traits_array.hpp>
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
    BOOST_QVM_STATIC_ASSERT(!is_m<int[3]>::value);
    BOOST_QVM_STATIC_ASSERT(!is_m<int[3][3][3]>::value);
    BOOST_QVM_STATIC_ASSERT(is_m<int[3][4]>::value);
    BOOST_QVM_STATIC_ASSERT(m_traits<int[3][4]>::rows==3);
    BOOST_QVM_STATIC_ASSERT(m_traits<int[3][4]>::cols==4);
    same_type<m_traits<int[3][4]>::scalar_type,int>();
    same_type< mat<int,3,3>, deduce_m<int[3][3]>::type >();
    same_type< mat<int,3,3>, deduce_m<int const[3][3]>::type >();
    int arr[3][3] = {{00,01,02},{10,11,12},{20,21,22}};
    BOOST_TEST((m_traits<int[3][3]>::r<0,0>(arr)==00));
    BOOST_TEST((m_traits<int[3][3]>::r<0,1>(arr)==01));
    BOOST_TEST((m_traits<int[3][3]>::r<0,2>(arr)==02));
    BOOST_TEST((m_traits<int[3][3]>::r<1,0>(arr)==10));
    BOOST_TEST((m_traits<int[3][3]>::r<1,1>(arr)==11));
    BOOST_TEST((m_traits<int[3][3]>::r<1,2>(arr)==12));
    BOOST_TEST((m_traits<int[3][3]>::r<2,0>(arr)==20));
    BOOST_TEST((m_traits<int[3][3]>::r<2,1>(arr)==21));
    BOOST_TEST((m_traits<int[3][3]>::r<2,2>(arr)==22));
    BOOST_TEST((m_traits<int const[3][3]>::r<0,0>(arr)==00));
    BOOST_TEST((m_traits<int const[3][3]>::r<0,1>(arr)==01));
    BOOST_TEST((m_traits<int const[3][3]>::r<0,2>(arr)==02));
    BOOST_TEST((m_traits<int const[3][3]>::r<1,0>(arr)==10));
    BOOST_TEST((m_traits<int const[3][3]>::r<1,1>(arr)==11));
    BOOST_TEST((m_traits<int const[3][3]>::r<1,2>(arr)==12));
    BOOST_TEST((m_traits<int const[3][3]>::r<2,0>(arr)==20));
    BOOST_TEST((m_traits<int const[3][3]>::r<2,1>(arr)==21));
    BOOST_TEST((m_traits<int const[3][3]>::r<2,2>(arr)==22));
    BOOST_TEST((m_traits<int[3][3]>::ir(0,0,arr)==00));
    BOOST_TEST((m_traits<int[3][3]>::ir(0,1,arr)==01));
    BOOST_TEST((m_traits<int[3][3]>::ir(0,2,arr)==02));
    BOOST_TEST((m_traits<int[3][3]>::ir(1,0,arr)==10));
    BOOST_TEST((m_traits<int[3][3]>::ir(1,1,arr)==11));
    BOOST_TEST((m_traits<int[3][3]>::ir(1,2,arr)==12));
    BOOST_TEST((m_traits<int[3][3]>::ir(2,0,arr)==20));
    BOOST_TEST((m_traits<int[3][3]>::ir(2,1,arr)==21));
    BOOST_TEST((m_traits<int[3][3]>::ir(2,2,arr)==22));
    BOOST_TEST((m_traits<int const[3][3]>::ir(0,0,arr)==00));
    BOOST_TEST((m_traits<int const[3][3]>::ir(0,1,arr)==01));
    BOOST_TEST((m_traits<int const[3][3]>::ir(0,2,arr)==02));
    BOOST_TEST((m_traits<int const[3][3]>::ir(1,0,arr)==10));
    BOOST_TEST((m_traits<int const[3][3]>::ir(1,1,arr)==11));
    BOOST_TEST((m_traits<int const[3][3]>::ir(1,2,arr)==12));
    BOOST_TEST((m_traits<int const[3][3]>::ir(2,0,arr)==20));
    BOOST_TEST((m_traits<int const[3][3]>::ir(2,1,arr)==21));
    BOOST_TEST((m_traits<int const[3][3]>::ir(2,2,arr)==22));
    BOOST_TEST((&m_traits<int[3][3]>::w<0,0>(arr)==&arr[0][0]));
    BOOST_TEST((&m_traits<int[3][3]>::w<0,1>(arr)==&arr[0][1]));
    BOOST_TEST((&m_traits<int[3][3]>::w<0,2>(arr)==&arr[0][2]));
    BOOST_TEST((&m_traits<int[3][3]>::w<1,0>(arr)==&arr[1][0]));
    BOOST_TEST((&m_traits<int[3][3]>::w<1,1>(arr)==&arr[1][1]));
    BOOST_TEST((&m_traits<int[3][3]>::w<1,2>(arr)==&arr[1][2]));
    BOOST_TEST((&m_traits<int[3][3]>::w<2,0>(arr)==&arr[2][0]));
    BOOST_TEST((&m_traits<int[3][3]>::w<2,1>(arr)==&arr[2][1]));
    BOOST_TEST((&m_traits<int[3][3]>::w<2,2>(arr)==&arr[2][2]));
    BOOST_TEST((&m_traits<int[3][3]>::iw(0,0,arr)==&arr[0][0]));
    BOOST_TEST((&m_traits<int[3][3]>::iw(0,1,arr)==&arr[0][1]));
    BOOST_TEST((&m_traits<int[3][3]>::iw(0,2,arr)==&arr[0][2]));
    BOOST_TEST((&m_traits<int[3][3]>::iw(1,0,arr)==&arr[1][0]));
    BOOST_TEST((&m_traits<int[3][3]>::iw(1,1,arr)==&arr[1][1]));
    BOOST_TEST((&m_traits<int[3][3]>::iw(1,2,arr)==&arr[1][2]));
    BOOST_TEST((&m_traits<int[3][3]>::iw(2,0,arr)==&arr[2][0]));
    BOOST_TEST((&m_traits<int[3][3]>::iw(2,1,arr)==&arr[2][1]));
    BOOST_TEST((&m_traits<int[3][3]>::iw(2,2,arr)==&arr[2][2]));
    return boost::report_errors();
    }
