//Copyright (c) 2008-2010 Emil Dotchevski and Reverge Studios, Inc.

//Distributed under the Boost Software License, Version 1.0. (See accompanying
//file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef UUID_9C471450B3A611DEAF56C1F155D89593
#define UUID_9C471450B3A611DEAF56C1F155D89593

#include <boost/qvm/deduce_m.hpp>
#include <boost/qvm/assert.hpp>
#include "test_qvm.hpp"

namespace
test_qvm
    {
    template <class Tag,int Rows,int Cols,class T=float>
    struct
    matrix
        {
        T a[Rows][Cols];
        mutable T b[Rows][Cols];

        explicit
        matrix( T start=T(0), T step=T(0) )
            {
            for( int i=0; i!=Rows; ++i )
                for( int j=0; j!=Cols; ++j,start+=step )
                    a[i][j]=b[i][j]=start;
            }
        };

    template <int Rows,int Cols,class Tag1,class T1,class Tag2,class T2>
    void
    dump_ab( matrix<Tag1,Rows,Cols,T1> const & a, matrix<Tag2,Rows,Cols,T2> const & b )
        {
        detail::dump_ab(a.a,b.a);
        }
    }

namespace
boost
    {
    namespace
    qvm
        {
        template <class Tag,int Rows,int Cols,class T>
        struct
        m_traits< test_qvm::matrix<Tag,Rows,Cols,T> >
            {
            static int const rows=Rows;
            static int const cols=Cols;
            typedef T scalar_type;

            template <int R,int C>
            static
            scalar_type &
            w( test_qvm::matrix<Tag,Rows,Cols,T> & m )
                {
                BOOST_QVM_STATIC_ASSERT(R>=0);
                BOOST_QVM_STATIC_ASSERT(R<rows);
                BOOST_QVM_STATIC_ASSERT(C>=0);
                BOOST_QVM_STATIC_ASSERT(C<cols);
                return m.a[R][C];
                }

            template <int R,int C>
            static
            scalar_type
            r( test_qvm::matrix<Tag,Rows,Cols,T> const & m )
                {
                BOOST_QVM_STATIC_ASSERT(R>=0);
                BOOST_QVM_STATIC_ASSERT(R<rows);
                BOOST_QVM_STATIC_ASSERT(C>=0);
                BOOST_QVM_STATIC_ASSERT(C<cols);
                return m.a[R][C];
                }

            static
            inline
            scalar_type &
            iw( int r, int c, test_qvm::matrix<Tag,Rows,Cols,T> & m )
                {
                BOOST_QVM_ASSERT(r>=0);
                BOOST_QVM_ASSERT(r<rows);
                BOOST_QVM_ASSERT(c>=0);
                BOOST_QVM_ASSERT(c<cols);
                return m.a[r][c];
                }

            static
            inline
            scalar_type
            ir( int r, int c, test_qvm::matrix<Tag,Rows,Cols,T> const & m )
                {
                BOOST_QVM_ASSERT(r>=0);
                BOOST_QVM_ASSERT(r<rows);
                BOOST_QVM_ASSERT(c>=0);
                BOOST_QVM_ASSERT(c<cols);
                return m.a[r][c];
                }
            };

        template <class Tag,class T,int R1,int C1,int R2,int C2,int Rows,int Cols>
        struct
        deduce_m2<test_qvm::matrix<Tag,R1,C1,T>,test_qvm::matrix<Tag,R2,C2,T>,Rows,Cols>
            {
            typedef test_qvm::matrix<Tag,Rows,Cols,T> type;
            };
        }
    }

namespace
    {
    struct M1;
    struct M2;
    struct M3;
    }

#endif
