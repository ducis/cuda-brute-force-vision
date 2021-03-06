//Copyright (c) 2008-2010 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <boost/qvm/q.hpp>
#include <boost/qvm/m.hpp>
#include <boost/qvm/quat.hpp>
#include "test_qvm_quaternion.hpp"
#include "test_qvm_matrix.hpp"
#include "gold.hpp"

namespace
    {
    void
    test()
        {
        using namespace boost::qvm;
        for( float r=0; r<6.28f; r+=0.5f )
            {
            test_qvm::quaternion<Q1> q1=rotz_q(r);
            test_qvm::matrix<M1,3,3> m1=make< test_qvm::matrix<M1,3,3> >(q1);
            test_qvm::rotation_z(m1.b,r);
            BOOST_QVM_TEST_CLOSE(m1.a,m1.b,0.000001f);
            test_qvm::quaternion<Q2> q2(42,1);
            set_rotz(q2,r);
            test_qvm::matrix<M1,3,3> m2=make< test_qvm::matrix<M1,3,3> >(q2);
            test_qvm::rotation_z(m2.b,r);
            BOOST_QVM_TEST_CLOSE(m2.a,m2.b,0.000001f);
            test_qvm::quaternion<Q1> q3(42,1);
            test_qvm::quaternion<Q1> r1=q3*q1;
            rotate_z(q3,r);
            BOOST_QVM_TEST_EQ(q3.a,r1.a);
            }
        rotz_q(0.0f)+rotz_q(0.0f);
        -rotz_q(0.0f);
        }
    }

int
main()
    {
    test();
    return boost::report_errors();
    }
