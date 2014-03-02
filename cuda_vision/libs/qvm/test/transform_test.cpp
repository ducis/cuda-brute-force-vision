//Copyright (c) 2008-2010 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <boost/qvm/m.hpp>
#include <boost/qvm/v.hpp>
#include <boost/qvm/vec.hpp>
#include <boost/qvm/vm.hpp>
#include <boost/qvm/v_access.hpp>
#include <boost/qvm/map_mm.hpp>
#include <boost/qvm/map_mv.hpp>
#include <boost/qvm/sw.hpp>
#include "test_qvm_matrix.hpp"
#include "test_qvm_vector.hpp"
#include "test_qvm.hpp"

namespace
    {
    void
    test()
        {
        using namespace boost::qvm;
        test_qvm::matrix<M1,4,4> m=rot_m<4>(test_qvm::vector<V1,3>(1,0),1);
        col<3>(m)%X = 42;
        col<3>(m)%Y = 42;
        col<3>(m)%Z = 42;
        test_qvm::vector<V1,3> v(42,1);
        test_qvm::vector<V1,3> mv=transform_vector(m,v);
        test_qvm::vector<V1,3> mp=transform_point(m,v);
        test_qvm::vector<V1,3> v3=delrc<3,3>(m) * v;
        test_qvm::vector<V1,3> v4=(m*(v%XYZ1))%XYZ;
        BOOST_QVM_TEST_EQ(mv.a,v3.a);
        BOOST_QVM_TEST_EQ(mp.a,v4.a);
        }
    }

int
main()
    {
    test();
    return boost::report_errors();
    }
