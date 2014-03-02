#include <vector_types.h>
#include <limits>

#define DEF_STREAMOUT_2( T , AS_TYPE ) \
	template<class Elem, class Tr> \
	std::basic_ostream<Elem,Tr> &operator << (std::basic_ostream<Elem,Tr> &s, const T##2 &v){ \
		return s << '(' << AS_TYPE(v.x) << ",\t" << AS_TYPE(v.y) << ')'; \
	}
#define DEF_STREAMIN_2( T , AS_TYPE ) \
	template<class Elem, class Tr> \
	std::basic_istream<Elem,Tr> &operator >> (std::basic_istream<Elem,Tr> &s, T##2 &v){ \
		typename std::basic_istream<Elem,Tr>::int_type n = std::numeric_limits<int>::max(); \
		AS_TYPE t; \
		s.ignore(n,'(')>>t;		v.x = t; \
		s.ignore(n,',')>>t;		v.y = t; \
		return s.ignore(n,')'); \
	}

#define DEF_STREAMOUT_3( T , AS_TYPE ) \
	template<class Elem, class Tr> \
	std::basic_ostream<Elem,Tr> &operator << (std::basic_ostream<Elem,Tr> &s, const T##3 &v){ \
		return s << '(' << AS_TYPE(v.x) << ",\t" << AS_TYPE(v.y) << ",\t" << AS_TYPE(v.z) << ')'; \
	}
#define DEF_STREAMIN_3( T , AS_TYPE ) \
	template<class Elem, class Tr> \
	std::basic_istream<Elem,Tr> &operator >> (std::basic_istream<Elem,Tr> &s, T##3 &v){ \
		typename std::basic_istream<Elem,Tr>::int_type n = std::numeric_limits<int>::max(); \
		AS_TYPE t; \
		s.ignore(n,'(')>>t;		v.x = t; \
		s.ignore(n,',')>>t;		v.y = t; \
		s.ignore(n,',')>>t;		v.z = t; \
		return s.ignore(n,')'); \
	}

#define DEF_STREAMOUT_4( T , AS_TYPE ) \
	template<class Elem, class Tr> \
	std::basic_ostream<Elem,Tr> &operator << (std::basic_ostream<Elem,Tr> &s, const T##4 &v){ \
		return s << '(' << AS_TYPE(v.x) << ",\t" << AS_TYPE(v.y) << ",\t" << AS_TYPE(v.z) << ",\t" << AS_TYPE(v.w) << ')'; \
	}
#define DEF_STREAMIN_4( T , AS_TYPE ) \
	template<class Elem, class Tr> \
	std::basic_istream<Elem,Tr> &operator >> (std::basic_istream<Elem,Tr> &s, T##4 &v){ \
		typename std::basic_istream<Elem,Tr>::int_type n = std::numeric_limits<int>::max(); \
		AS_TYPE t; \
		s.ignore(n,'(')>>t;		v.x = t; \
		s.ignore(n,',')>>t;		v.y = t; \
		s.ignore(n,',')>>t;		v.z = t; \
		s.ignore(n,',')>>t;		v.w = t; \
		return s.ignore(n,')'); \
	}

#define DEF_STREAMOPS(T,AS_TYPE) \
	DEF_STREAMIN_2(T,AS_TYPE) \
	DEF_STREAMOUT_2(T,AS_TYPE) \
	DEF_STREAMIN_3(T,AS_TYPE) \
	DEF_STREAMOUT_3(T,AS_TYPE) \
	DEF_STREAMIN_4(T,AS_TYPE) \
	DEF_STREAMOUT_4(T,AS_TYPE)


DEF_STREAMOPS(uchar,int)
DEF_STREAMOPS(uint,uint)
DEF_STREAMOPS(float,float)
DEF_STREAMOPS(double,double)
DEF_STREAMOPS(int,int)

#define DEF_VEC_APPLY_2(L,R,OP) inline __host__ __device__ L &operator OP (L &l,const R &r){ l.x OP r.x;   l.y OP r.y; return l;}
#define DEF_VEC_APPLY_3(L,R,OP) inline __host__ __device__ L &operator OP (L &l,const R &r){ l.x OP r.x;   l.y OP r.y;   l.z OP r.z; return l;}
#define DEF_VEC_APPLY_4(L,R,OP) inline __host__ __device__ L &operator OP (L &l,const R &r){ l.x OP r.x;   l.y OP r.y;   l.z OP r.z;   l.w OP r.w;  return l;}
#define DEF_VEC_APPLY(L,R,OP) \
	DEF_VEC_APPLY_2(L##2,R##2,OP) \
	DEF_VEC_APPLY_2(L##2,R##3,OP) \
	DEF_VEC_APPLY_2(L##2,R##4,OP) \
	DEF_VEC_APPLY_2(L##3,R##2,OP) \
	DEF_VEC_APPLY_2(L##4,R##2,OP) \
	DEF_VEC_APPLY_3(L##3,R##3,OP) \
	DEF_VEC_APPLY_3(L##3,R##4,OP) \
	DEF_VEC_APPLY_3(L##4,R##3,OP) \
	DEF_VEC_APPLY_4(L##4,R##4,OP)
#define DEF_VEC_APPLY_OPS(L,R) \
	/*DEF_VEC_APPLY(L,R,=)*/ \
	DEF_VEC_APPLY(L,R,+=) \
	DEF_VEC_APPLY(L,R,-=) \
	DEF_VEC_ASSIGN_OPS(L,R)

#define DEF_VEC_ASSIGN_OPS(L,R) \
	DEF_VEC_ASSIGN_2(L##2,R##2) \
	DEF_VEC_ASSIGN_3(L##3,R##3) \
	DEF_VEC_ASSIGN_4(L##4,R##4)
#define DEF_VEC_ASSIGN_2(L,R) inline __host__ __device__ L &assign(L &l, const R &r){ l.x = r.x;	l.y = r.y;	return l; }
#define DEF_VEC_ASSIGN_3(L,R) inline __host__ __device__ L &assign(L &l, const R &r){ l.x = r.x;	l.y = r.y;	l.z = r.z;	return l; }
#define DEF_VEC_ASSIGN_4(L,R) inline __host__ __device__ L &assign(L &l, const R &r){ l.x = r.x;	l.y = r.y;	l.z = r.z;	l.w = r.w;	return l; }

typedef unsigned uint;
DEF_VEC_APPLY_OPS(double,double);
DEF_VEC_APPLY_OPS(double,float);
DEF_VEC_APPLY_OPS(double,int);
DEF_VEC_APPLY_OPS(double,uint);

#define DEF_VEC_SCAL_OPS(T) \
	DEF_VEC_SCAL_2(T##2,T,*=) \
	DEF_VEC_SCAL_3(T##3,T,*=) \
	DEF_VEC_SCAL_4(T##4,T,*=) \
	DEF_VEC_SCAL_2(T##2,T,/=) \
	DEF_VEC_SCAL_3(T##3,T,/=) \
	DEF_VEC_SCAL_4(T##4,T,/=) \
	DEF_VEC_SCAL_BIN_ARITH(T##2,T,*) \
	DEF_VEC_SCAL_BIN_ARITH(T##3,T,*) \
	DEF_VEC_SCAL_BIN_ARITH(T##4,T,*) \
	DEF_BIN_OP(T##2,T,/) \
	DEF_BIN_OP(T##3,T,/) \
	DEF_BIN_OP(T##4,T,/)

#define DEF_VEC_SCAL_2(V,S,OP) inline __host__ __device__ V &operator OP (V &v, const S &s){ v.x OP s; v.y OP s; return v; }
#define DEF_VEC_SCAL_3(V,S,OP) inline __host__ __device__ V &operator OP (V &v, const S &s){ v.x OP s; v.y OP s; v.z OP s; return v; }
#define DEF_VEC_SCAL_4(V,S,OP) inline __host__ __device__ V &operator OP (V &v, const S &s){ v.x OP s; v.y OP s; v.z OP s; v.w OP s; return v; }

#define DEF_VEC_SCAL_BIN_ARITH(V,S,OP) DEF_BIN_OP(V,S,OP) DEF_BIN_OP_SWAPPED(S,V,OP)								

#define DEF_BIN_OP(L,R,OP)			inline __host__ __device__ const L operator OP (const L &l, const R &r){ L t=l; t OP##=r; return t;}
#define DEF_BIN_OP_SWAPPED(L,R,OP)	inline __host__ __device__ const R operator OP (const L &l, const R &r){ R t=r; t OP##=l; return t;}


DEF_VEC_SCAL_OPS(double);
//DEF_VEC_SCAL_OPS(double,float);
//DEF_VEC_SCAL_OPS(double,int);
//DEF_VEC_SCAL_OPS(double,uint);

#define DEF_VEC_BIN_OPS_HOMO(T)	 \
	DEF_BIN_OP(T##2,T##2,+)	DEF_BIN_OP(T##2,T##2,-) \
	DEF_BIN_OP(T##3,T##3,+)	DEF_BIN_OP(T##3,T##3,-) \
	DEF_BIN_OP(T##4,T##4,+)	DEF_BIN_OP(T##4,T##4,-)
/*#define DEF_VEC_BIN_OP_HETERO(LONGER,SHORTER)	\
	DEF_BIN_OP(LONGER##2,SHORTER##2,+)  DEF_BIN_OP_SWAPPED(SHORTER##2,LONGER##2,+)  DEF_BIN_OP(LONGER##2,SHORTER##2,-)  \
	DEF_BIN_OP(LONGER##3,SHORTER##3,+)  DEF_BIN_OP_SWAPPED(SHORTER##3,LONGER##3,+)  DEF_BIN_OP(LONGER##3,SHORTER##3,-)  \
	DEF_BIN_OP(LONGER##4,SHORTER##4,+)  DEF_BIN_OP_SWAPPED(SHORTER##4,LONGER##4,+)  DEF_BIN_OP(LONGER##4,SHORTER##4,-) */
DEF_VEC_BIN_OPS_HOMO(double);
//DEF_VEC_BIN_OPS_HETERO(double,int);
//DEF_VEC_BIN_OPS_HETERO(double,float);
//DEF_VEC_BIN_OPS_HETERO(double,uint);

#define DEF_VEC_DOT_3(L,R,S) inline __host__ __device__ S dot(const L &l,const R &r){ return l.x*r.x+l.y*r.y+l.z*r.z; }

DEF_VEC_DOT_3(double3,double3,double)
