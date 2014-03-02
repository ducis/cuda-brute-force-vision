//Copyright (c) 2008-2010 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <boost/qvm/q.hpp>
#include <boost/qvm/quat.hpp>
#include "test_qvm_quaternion.hpp"
#include "gold.hpp"

namespace
    {
    void
    test()
        {
        using namespace boost::qvm;
        for( float a1=0; a1<6.28f; a1+=0.3f )
            {
            test_qvm::quaternion<Q1> const qx1=rotx_q(a1);
            test_qvm::quaternion<Q1> const qy1=roty_q(a1);
            test_qvm::quaternion<Q1> const qz1=rotz_q(a1);
            for( float a2=0; a2<6.28f; a2+=0.05f )
                {
                test_qvm::quaternion<Q1> const qx2=rotx_q(a2);
                test_qvm::quaternion<Q1> const qy2=roty_q(a2);
                test_qvm::quaternion<Q1> const qz2=rotz_q(a2);
                for( float t=0; t<1; t+=0.03f )
                    {
                    test_qvm::quaternion<Q1> const qx=rotx_q(a1*(1-t)+a2*t);
                    test_qvm::quaternion<Q1> const qy=roty_q(a1*(1-t)+a2*t);
                    test_qvm::quaternion<Q1> const qz=rotz_q(a1*(1-t)+a2*t);
                    test_qvm::quaternion<Q1> const qsx=slerp(qx1,qx2,t);
                    test_qvm::quaternion<Q1> const qsy=slerp(qref(qy1),qy2,t);
                    test_qvm::quaternion<Q1> const qsz=slerp(qz1,qref(qz2),t);
                    BOOST_QVM_TEST_CLOSE(qx.a,qsx.a,0.01f);
                    BOOST_QVM_TEST_CLOSE(qy.a,qsy.a,0.01f);
                    BOOST_QVM_TEST_CLOSE(qz.a,qsz.a,0.01f);
                    }
                }
            }
        }
    }

int
main()
    {
    test();
    return boost::report_errors();
    }
