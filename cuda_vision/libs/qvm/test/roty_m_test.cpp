//Copyright (c) 2008-2010 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <boost/qvm/m.hpp>
#include <boost/qvm/mat.hpp>
#include "test_qvm_matrix.hpp"
#include "gold.hpp"

namespace
    {
    template <int Dim>
    void
    test()
        {
        using namespace boost::qvm;
        for( float r=0; r<6.28f; r+=0.5f )
            {
            test_qvm::matrix<M1,Dim,Dim> const m1=roty_m<Dim>(r);
            test_qvm::rotation_y(m1.b,r);
            BOOST_QVM_TEST_CLOSE(m1.a,m1.b,0.000001f);
            test_qvm::matrix<M1,Dim,Dim> m2(42,1);
            set_roty(m2,r);
            test_qvm::rotation_y(m2.b,r);
            BOOST_QVM_TEST_CLOSE(m2.a,m2.b,0.000001f);
            test_qvm::matrix<M1,Dim,Dim> m3(42,1);
            test_qvm::matrix<M1,Dim,Dim> r1=m3*m1;
            rotate_y(m3,r);
            BOOST_QVM_TEST_EQ(m3.a,r1.a);
            }
        roty_m<Dim>(0.0f)+roty_m<Dim>(0.0f);
        -roty_m<Dim>(0.0f);
        }
    }

int
main()
    {
    test<3>();
    test<4>();
    test<5>();
    return boost::report_errors();
    }
