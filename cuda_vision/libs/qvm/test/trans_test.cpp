//Copyright (c) 2008-2010 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <boost/qvm/map_mv.hpp>
#include <boost/qvm/v.hpp>
#include <boost/qvm/vec.hpp>
#include "test_qvm_matrix.hpp"
#include "test_qvm_vector.hpp"
#include "gold.hpp"

namespace
    {
    template <int D>
    void
    test()
        {
        using namespace boost::qvm;
        test_qvm::matrix<M1,D,D> x(42,1);
        test_qvm::vector<V1,D-1> y=trans(x);
        for( int i=0; i!=D-1; ++i )
            y.b[i]=x.a[i][D-1];
        BOOST_QVM_TEST_EQ(y.a,y.b);
        trans(x) *= 2;
        for( int i=0; i!=D-1; ++i )
            x.b[i][D-1] *= 2;
        BOOST_QVM_TEST_EQ(x.a,x.b);
        trans(x) + trans(x);
        -trans(x);
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
