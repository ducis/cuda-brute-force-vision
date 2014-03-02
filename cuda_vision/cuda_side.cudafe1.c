# 1 "cuda_side.cu"
struct __C1; struct __C2; struct __C3; struct __type_info; struct __C5; struct __C6; union __C7; struct __C8;
# 1006 "/usr/local/cuda/include/driver_types.h"
struct CUstream_st;
# 87 "/usr/include/wchar.h" 3
union _ZN11__mbstate_tUt_E;
# 84 "/usr/include/wchar.h" 3
struct __mbstate_t;
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {

__codecvt_ok,
__codecvt_partial,
__codecvt_error,
__codecvt_noconv};
# 271 "/usr/include/libio.h" 3
struct _IO_FILE;
# 61 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_internal_list;
# 78 "/usr/include/bits/pthreadtypes.h" 3
struct _ZN15pthread_mutex_t17__pthread_mutex_sE;
# 77 "/usr/include/bits/pthreadtypes.h" 3
union pthread_mutex_t;
# 203 "/usr/include/math.h" 3
enum _ZUt_ {
FP_NAN,

FP_INFINITE,

FP_ZERO,

FP_SUBNORMAL,

FP_NORMAL};
# 296 "/usr/include/math.h" 3
enum _LIB_VERSION_TYPE {
_IEEE_ = (-1),
_SVID_,
_XOPEN_,
_POSIX_,
_ISOC_};
# 74 "/usr/local/cuda/include/cuda_texture_types.h"
struct _Z7textureI4int4Li2EL19cudaTextureReadMode0EE;
# 28 "/usr/include/bits/locale.h" 3
enum _ZUt0_ {
__LC_CTYPE,
__LC_NUMERIC,
__LC_TIME,
__LC_COLLATE,
__LC_MONETARY,
__LC_MESSAGES,
__LC_ALL,
__LC_PAPER,
__LC_NAME,
__LC_ADDRESS,
__LC_TELEPHONE,
__LC_MEASUREMENT,
__LC_IDENTIFICATION};
# 49 "/usr/include/ctype.h" 3
enum _ZUt1_ {
_ISupper = 256,
_ISlower = 512,
_ISalpha = 1024,
_ISdigit = 2048,
_ISxdigit = 4096,
_ISspace = 8192,
_ISprint = 16384,
_ISgraph = 32768,
_ISblank = 1,
_IScntrl,
_ISpunct = 4,
_ISalnum = 8};
# 37 "/usr/include/pthread.h" 3
enum _ZUt2_ {
PTHREAD_CREATE_JOINABLE,

PTHREAD_CREATE_DETACHED};
# 47 "/usr/include/pthread.h" 3
enum _ZUt3_ {
PTHREAD_MUTEX_TIMED_NP,
PTHREAD_MUTEX_RECURSIVE_NP,
PTHREAD_MUTEX_ERRORCHECK_NP,
PTHREAD_MUTEX_ADAPTIVE_NP,


PTHREAD_MUTEX_NORMAL = 0,
PTHREAD_MUTEX_RECURSIVE,
PTHREAD_MUTEX_ERRORCHECK,
PTHREAD_MUTEX_DEFAULT = 0,



PTHREAD_MUTEX_FAST_NP = 0};
# 69 "/usr/include/pthread.h" 3
enum _ZUt4_ {
PTHREAD_MUTEX_STALLED,
PTHREAD_MUTEX_STALLED_NP = 0,
PTHREAD_MUTEX_ROBUST,
PTHREAD_MUTEX_ROBUST_NP = 1};
# 81 "/usr/include/pthread.h" 3
enum _ZUt5_ {
PTHREAD_PRIO_NONE,
PTHREAD_PRIO_INHERIT,
PTHREAD_PRIO_PROTECT};
# 118 "/usr/include/pthread.h" 3
enum _ZUt6_ {
PTHREAD_RWLOCK_PREFER_READER_NP,
PTHREAD_RWLOCK_PREFER_WRITER_NP,
PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
PTHREAD_RWLOCK_DEFAULT_NP = 0};
# 150 "/usr/include/pthread.h" 3
enum _ZUt7_ {
PTHREAD_INHERIT_SCHED,

PTHREAD_EXPLICIT_SCHED};
# 160 "/usr/include/pthread.h" 3
enum _ZUt8_ {
PTHREAD_SCOPE_SYSTEM,

PTHREAD_SCOPE_PROCESS};
# 170 "/usr/include/pthread.h" 3
enum _ZUt9_ {
PTHREAD_PROCESS_PRIVATE,

PTHREAD_PROCESS_SHARED};
# 194 "/usr/include/pthread.h" 3
enum _ZUt10_ {
PTHREAD_CANCEL_ENABLE,

PTHREAD_CANCEL_DISABLE};



enum _ZUt11_ {
PTHREAD_CANCEL_DEFERRED,

PTHREAD_CANCEL_ASYNCHRONOUS};
# 73 "/usr/include/wctype.h" 3
enum _ZUt12_ {
__ISwupper,
__ISwlower,
__ISwalpha,
__ISwdigit,
__ISwxdigit,
__ISwspace,
__ISwprint,
__ISwgraph,
__ISwblank,
__ISwcntrl,
__ISwpunct,
__ISwalnum,

_ISwupper = 16777216,
_ISwlower = 33554432,
_ISwalpha = 67108864,
_ISwdigit = 134217728,
_ISwxdigit = 268435456,
_ISwspace = 536870912,
_ISwprint = 1073741824,
_ISwgraph = (-2147483647-1),
_ISwblank = 65536,
_ISwcntrl = 131072,
_ISwpunct = 262144,
_ISwalnum = 524288};
# 14 "common.h"
struct real44;
# 65 "cuPrintf.cu"
struct cuPrintfRestriction;
# 85 "cuPrintf.cu"
struct cuPrintfHeader;
# 94 "cuPrintf.cu"
struct cuPrintfHeaderSM10;
# 62 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/exception" 3
struct _ZSt9exception;
# 56 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/new" 3
struct _ZSt9bad_alloc;
# 129 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_voidIvEUt_E { _ZNSt9__is_voidIvE7__valueE = 1};
# 149 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIbEUt_E { _ZNSt12__is_integerIbE7__valueE = 1};
# 156 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIcEUt_E { _ZNSt12__is_integerIcE7__valueE = 1};
# 163 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIaEUt_E { _ZNSt12__is_integerIaE7__valueE = 1};
# 170 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIhEUt_E { _ZNSt12__is_integerIhE7__valueE = 1};
# 178 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIwEUt_E { _ZNSt12__is_integerIwE7__valueE = 1};
# 202 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIsEUt_E { _ZNSt12__is_integerIsE7__valueE = 1};
# 209 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerItEUt_E { _ZNSt12__is_integerItE7__valueE = 1};
# 216 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIiEUt_E { _ZNSt12__is_integerIiE7__valueE = 1};
# 223 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIjEUt_E { _ZNSt12__is_integerIjE7__valueE = 1};
# 230 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIlEUt_E { _ZNSt12__is_integerIlE7__valueE = 1};
# 237 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerImEUt_E { _ZNSt12__is_integerImE7__valueE = 1};
# 244 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIxEUt_E { _ZNSt12__is_integerIxE7__valueE = 1};
# 251 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIyEUt_E { _ZNSt12__is_integerIyE7__valueE = 1};
# 269 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIfEUt_E { _ZNSt13__is_floatingIfE7__valueE = 1};
# 276 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIdEUt_E { _ZNSt13__is_floatingIdE7__valueE = 1};
# 283 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIeEUt_E { _ZNSt13__is_floatingIeE7__valueE = 1};
# 359 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_charIcEUt_E { _ZNSt9__is_charIcE7__valueE = 1};
# 367 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_charIwEUt_E { _ZNSt9__is_charIwE7__valueE = 1};
# 382 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIcEUt_E { _ZNSt9__is_byteIcE7__valueE = 1};
# 389 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIaEUt_E { _ZNSt9__is_byteIaE7__valueE = 1};
# 396 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIhEUt_E { _ZNSt9__is_byteIhE7__valueE = 1};
# 139 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIeEUt_E { _ZNSt12__is_integerIeE7__valueE}; enum _ZNSt12__is_integerIdEUt_E { _ZNSt12__is_integerIdE7__valueE}; enum _ZNSt12__is_integerIfEUt_E { _ZNSt12__is_integerIfE7__valueE};
# 90 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator_base_types.h" 3
struct _ZSt18input_iterator_tag;


struct _ZSt19output_iterator_tag;
# 119 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator_base_types.h" 3
struct _ZSt8iteratorISt19output_iterator_tagvvvvE;
# 235 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/char_traits.h" 3
struct _ZSt11char_traitsIcE;
# 477 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/locale_classes.h" 3
struct _ZNSt6locale5_ImplE;
# 306 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/locale_classes.h" 3
enum _ZNSt6localeUt_E { _ZNSt6locale18_S_categories_sizeE = 12};
# 64 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/locale_classes.h" 3
struct _ZSt6locale;
# 53 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
enum _ZSt13_Ios_Fmtflags {

_ZSt12_S_boolalpha = 1,
_ZSt6_S_dec,
_ZSt8_S_fixed = 4,
_ZSt6_S_hex = 8,
_ZSt11_S_internal = 16,
_ZSt7_S_left = 32,
_ZSt6_S_oct = 64,
_ZSt8_S_right = 128,
_ZSt13_S_scientific = 256,
_ZSt11_S_showbase = 512,
_ZSt12_S_showpoint = 1024,
_ZSt10_S_showpos = 2048,
_ZSt9_S_skipws = 4096,
_ZSt10_S_unitbuf = 8192,
_ZSt12_S_uppercase = 16384,
_ZSt14_S_adjustfield = 176,
_ZSt12_S_basefield = 74,
_ZSt13_S_floatfield = 260,
_ZSt19_S_ios_fmtflags_end = 65536};
# 105 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
enum _ZSt13_Ios_Openmode {

_ZSt6_S_app = 1,
_ZSt6_S_ate,
_ZSt6_S_bin = 4,
_ZSt5_S_in = 8,
_ZSt6_S_out = 16,
_ZSt8_S_trunc = 32,
_ZSt19_S_ios_openmode_end = 65536};
# 145 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
enum _ZSt12_Ios_Iostate {

_ZSt10_S_goodbit,
_ZSt9_S_badbit,
_ZSt9_S_eofbit,
_ZSt10_S_failbit = 4,
_ZSt18_S_ios_iostate_end = 65536};
# 183 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
enum _ZSt12_Ios_Seekdir {

_ZSt6_S_beg,
_ZSt6_S_cur,
_ZSt6_S_end,
_ZSt18_S_ios_seekdir_end = 65536};
# 421 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
enum _ZNSt8ios_base5eventE {

_ZNSt8ios_base11erase_eventE,
_ZNSt8ios_base11imbue_eventE,
_ZNSt8ios_base13copyfmt_eventE};
# 462 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
struct _ZNSt8ios_base14_Callback_listE;
# 501 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
struct _ZNSt8ios_base6_WordsE;
# 513 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
enum _ZNSt8ios_baseUt_E { _ZNSt8ios_base18_S_local_word_sizeE = 8};
# 535 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
struct _ZNSt8ios_base4InitE;
# 201 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
struct _ZSt8ios_base;
# 122 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/iosfwd" 3
struct _ZSt19istreambuf_iteratorIcSt11char_traitsIcEE;


struct _ZSt19ostreambuf_iteratorIcSt11char_traitsIcEE;
# 82 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/iosfwd" 3
struct _ZSt15basic_streambufIcSt11char_traitsIcEE;
# 676 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/locale_facets.h" 3
struct _ZSt5ctypeIcE;
# 1526 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/locale_facets.h" 3
enum _ZNSt10__num_baseUt_E {
_ZNSt10__num_base9_S_ominusE,
_ZNSt10__num_base8_S_oplusE,
_ZNSt10__num_base5_S_oxE,
_ZNSt10__num_base5_S_oXE,
_ZNSt10__num_base10_S_odigitsE,
_ZNSt10__num_base14_S_odigits_endE = 20,
_ZNSt10__num_base11_S_oudigitsE = 20,
_ZNSt10__num_base15_S_oudigits_endE = 36,
_ZNSt10__num_base5_S_oeE = 18,
_ZNSt10__num_base5_S_oEE = 34,
_ZNSt10__num_base7_S_oendE = 36};
# 1552 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/locale_facets.h" 3
enum _ZNSt10__num_baseUt0_E {
_ZNSt10__num_base9_S_iminusE,
_ZNSt10__num_base8_S_iplusE,
_ZNSt10__num_base5_S_ixE,
_ZNSt10__num_base5_S_iXE,
_ZNSt10__num_base8_S_izeroE,
_ZNSt10__num_base5_S_ieE = 18,
_ZNSt10__num_base5_S_iEE = 24,
_ZNSt10__num_base7_S_iendE = 26};
# 1917 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/locale_facets.h" 3
struct _ZSt7num_getIcSt19istreambuf_iteratorIcSt11char_traitsIcEEE;
# 2253 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/locale_facets.h" 3
struct _ZSt7num_putIcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE;
# 79 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/iosfwd" 3
struct _ZSt9basic_iosIcSt11char_traitsIcEE;
# 88 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/iosfwd" 3
struct _ZSo;
# 69 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_bvector.h" 3
enum _ZStUt_ { _ZSt11_S_word_bit = 64};
# 157 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/limits" 3
enum _ZSt17float_round_style {

_ZSt19round_indeterminate = (-1),
_ZSt17round_toward_zero,
_ZSt16round_to_nearest,
_ZSt21round_toward_infinity,
_ZSt25round_toward_neg_infinity};
# 172 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/limits" 3
enum _ZSt18float_denorm_style {


_ZSt20denorm_indeterminate = (-1),

_ZSt13denorm_absent,

_ZSt14denorm_present};
# 2184 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algo.h" 3
enum _ZStUt0_ { _ZSt12_S_threshold = 16};
# 3357 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algo.h" 3
enum _ZStUt1_ { _ZSt13_S_chunk_size = 7};
# 85 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/iosfwd" 3
struct _ZSi; struct __SO__Si;
# 50 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/codecvt.h" 3
enum _ZNSt12codecvt_base6resultE {

_ZNSt12codecvt_base2okE,
_ZNSt12codecvt_base7partialE,
_ZNSt12codecvt_base5errorE,
_ZNSt12codecvt_base6noconvE};
# 341 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/codecvt.h" 3
struct _ZSt7codecvtIcc11__mbstate_tE;
# 54 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/x86_64-unknown-linux-gnu/bits/basic_file.h" 3
struct _ZSt12__basic_fileIcE;
# 110 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/iosfwd" 3
struct _ZSt13basic_filebufIcSt11char_traitsIcEE;


struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE;
# 89 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
struct _ZSaI6float3E;
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseI6float3SaIS0_EE12_Vector_implE;
# 73 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt12_Vector_baseI6float3SaIS0_EE;
# 208 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt6vectorI6float3SaIS0_EE;
# 119 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator_base_types.h" 3
struct _ZSt8iteratorISt18input_iterator_tag6float3lPKS1_RS2_E;
# 49 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE;
# 404 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE;
# 89 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
struct _ZSaI5uint4E;
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseI5uint4SaIS0_EE12_Vector_implE;
# 73 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt12_Vector_baseI5uint4SaIS0_EE;
# 208 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt6vectorI5uint4SaIS0_EE;
# 119 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator_base_types.h" 3
struct _ZSt8iteratorISt18input_iterator_tag5uint4lPKS1_RS2_E;
# 49 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE;
# 404 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE;
# 89 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
struct _ZSaI6real44E;
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseI6real44SaIS0_EE12_Vector_implE;
# 73 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt12_Vector_baseI6real44SaIS0_EE;
# 208 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt6vectorI6real44SaIS0_EE;
# 89 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
struct _ZSaIdE;
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseIdSaIdEE12_Vector_implE;
# 73 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt12_Vector_baseIdSaIdEE;
# 208 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt6vectorIdSaIdEE;
# 89 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
struct _ZSaI6uchar3E;
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseI6uchar3SaIS0_EE12_Vector_implE;
# 73 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt12_Vector_baseI6uchar3SaIS0_EE;
# 208 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt6vectorI6uchar3SaIS0_EE;
# 89 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
struct _ZSaI4int4E;
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseI4int4SaIS0_EE12_Vector_implE;
# 73 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt12_Vector_baseI4int4SaIS0_EE;
# 208 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt6vectorI4int4SaIS0_EE;
# 310 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorIPmEUt_E { _ZNSt20__is_normal_iteratorIPmE7__valueE};
# 261 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIiEUt_E { _ZNSt13__is_floatingIiE7__valueE};
# 99 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__traitorISt12__is_integerIiESt13__is_floatingIiEEUt_E { _ZNSt9__traitorISt12__is_integerIiESt13__is_floatingIiEE7__valueE = 1};
# 293 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_pointerIiEUt_E { _ZNSt12__is_pointerIiE7__valueE};
# 99 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__traitorISt15__is_arithmeticIiESt12__is_pointerIiEEUt_E { _ZNSt9__traitorISt15__is_arithmeticIiESt12__is_pointerIiEE7__valueE = 1};
# 310 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorIP6float3EUt_E { _ZNSt20__is_normal_iteratorIP6float3E7__valueE};
# 375 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteI6float3EUt_E { _ZNSt9__is_byteI6float3E7__valueE};
# 139 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerI6float3EUt_E { _ZNSt12__is_integerI6float3E7__valueE};
# 261 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingI6float3EUt_E { _ZNSt13__is_floatingI6float3E7__valueE};
# 99 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__traitorISt12__is_integerI6float3ESt13__is_floatingIS1_EEUt_E { _ZNSt9__traitorISt12__is_integerI6float3ESt13__is_floatingIS1_EE7__valueE};
# 293 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_pointerI6float3EUt_E { _ZNSt12__is_pointerI6float3E7__valueE};
# 99 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__traitorISt15__is_arithmeticI6float3ESt12__is_pointerIS1_EEUt_E { _ZNSt9__traitorISt15__is_arithmeticI6float3ESt12__is_pointerIS1_EE7__valueE};
# 107 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt10__are_sameIPK6float3PS0_EUt_E { _ZNSt10__are_sameIPK6float3PS0_E7__valueE};
# 406 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt18__is_move_iteratorIN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS2_SaIS2_EEEEEUt_E { _ZNSt18__is_move_iteratorIN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS2_SaIS2_EEEEE7__valueE};
# 318 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorIN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS2_SaIS2_EEEEEUt_E { _ZNSt20__is_normal_iteratorIN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS2_SaIS2_EEEEE7__valueE = 1};
# 300 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_pointerIPK6float3EUt_E { _ZNSt12__is_pointerIPK6float3E7__valueE = 1}; enum _ZNSt12__is_pointerIP6float3EUt_E { _ZNSt12__is_pointerIP6float3E7__valueE = 1};
# 114 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt10__are_sameI6float3S0_EUt_E { _ZNSt10__are_sameI6float3S0_E7__valueE = 1}; enum _ZNSt10__are_sameIP6float3S1_EUt_E { _ZNSt10__are_sameIP6float3S1_E7__valueE = 1};
# 318 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorIN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS2_SaIS2_EEEEEUt_E { _ZNSt20__is_normal_iteratorIN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS2_SaIS2_EEEEE7__valueE = 1};
# 406 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt18__is_move_iteratorIP6float3EUt_E { _ZNSt18__is_move_iteratorIP6float3E7__valueE}; enum _ZNSt18__is_move_iteratorISt16istream_iteratorI6float3cSt11char_traitsIcElEEUt_E { _ZNSt18__is_move_iteratorISt16istream_iteratorI6float3cSt11char_traitsIcElEE7__valueE};
# 310 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorISt16istream_iteratorI6float3cSt11char_traitsIcElEEUt_E { _ZNSt20__is_normal_iteratorISt16istream_iteratorI6float3cSt11char_traitsIcElEE7__valueE}; enum _ZNSt20__is_normal_iteratorISt20back_insert_iteratorISt6vectorI6float3SaIS2_EEEEUt_E { _ZNSt20__is_normal_iteratorISt20back_insert_iteratorISt6vectorI6float3SaIS2_EEEE7__valueE};
# 293 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_pointerISt16istream_iteratorI6float3cSt11char_traitsIcElEEUt_E { _ZNSt12__is_pointerISt16istream_iteratorI6float3cSt11char_traitsIcElEE7__valueE}; enum _ZNSt12__is_pointerISt20back_insert_iteratorISt6vectorI6float3SaIS2_EEEEUt_E { _ZNSt12__is_pointerISt20back_insert_iteratorISt6vectorI6float3SaIS2_EEEE7__valueE};
# 107 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt10__are_sameI6float3vEUt_E { _ZNSt10__are_sameI6float3vE7__valueE}; enum _ZNSt10__are_sameIPK5uint4PS0_EUt_E { _ZNSt10__are_sameIPK5uint4PS0_E7__valueE};
# 406 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt18__is_move_iteratorIN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS2_SaIS2_EEEEEUt_E { _ZNSt18__is_move_iteratorIN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS2_SaIS2_EEEEE7__valueE};
# 318 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorIN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS2_SaIS2_EEEEEUt_E { _ZNSt20__is_normal_iteratorIN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS2_SaIS2_EEEEE7__valueE = 1};
# 310 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorIP5uint4EUt_E { _ZNSt20__is_normal_iteratorIP5uint4E7__valueE};
# 300 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_pointerIPK5uint4EUt_E { _ZNSt12__is_pointerIPK5uint4E7__valueE = 1}; enum _ZNSt12__is_pointerIP5uint4EUt_E { _ZNSt12__is_pointerIP5uint4E7__valueE = 1};
# 114 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt10__are_sameI5uint4S0_EUt_E { _ZNSt10__are_sameI5uint4S0_E7__valueE = 1}; enum _ZNSt10__are_sameIP5uint4S1_EUt_E { _ZNSt10__are_sameIP5uint4S1_E7__valueE = 1};
# 318 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorIN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS2_SaIS2_EEEEEUt_E { _ZNSt20__is_normal_iteratorIN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS2_SaIS2_EEEEE7__valueE = 1};
# 406 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt18__is_move_iteratorIP5uint4EUt_E { _ZNSt18__is_move_iteratorIP5uint4E7__valueE}; enum _ZNSt18__is_move_iteratorISt16istream_iteratorI5uint4cSt11char_traitsIcElEEUt_E { _ZNSt18__is_move_iteratorISt16istream_iteratorI5uint4cSt11char_traitsIcElEE7__valueE};
# 310 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorISt16istream_iteratorI5uint4cSt11char_traitsIcElEEUt_E { _ZNSt20__is_normal_iteratorISt16istream_iteratorI5uint4cSt11char_traitsIcElEE7__valueE}; enum _ZNSt20__is_normal_iteratorISt20back_insert_iteratorISt6vectorI5uint4SaIS2_EEEEUt_E { _ZNSt20__is_normal_iteratorISt20back_insert_iteratorISt6vectorI5uint4SaIS2_EEEE7__valueE};
# 293 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_pointerISt16istream_iteratorI5uint4cSt11char_traitsIcElEEUt_E { _ZNSt12__is_pointerISt16istream_iteratorI5uint4cSt11char_traitsIcElEE7__valueE}; enum _ZNSt12__is_pointerISt20back_insert_iteratorISt6vectorI5uint4SaIS2_EEEEUt_E { _ZNSt12__is_pointerISt20back_insert_iteratorISt6vectorI5uint4SaIS2_EEEE7__valueE};
# 107 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt10__are_sameI5uint4vEUt_E { _ZNSt10__are_sameI5uint4vE7__valueE}; enum _ZNSt10__are_sameIPK6real44PS0_EUt_E { _ZNSt10__are_sameIPK6real44PS0_E7__valueE};
# 310 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorIP6uchar3EUt_E { _ZNSt20__is_normal_iteratorIP6uchar3E7__valueE};
# 375 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteI6uchar3EUt_E { _ZNSt9__is_byteI6uchar3E7__valueE};
# 139 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerI6uchar3EUt_E { _ZNSt12__is_integerI6uchar3E7__valueE};
# 261 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingI6uchar3EUt_E { _ZNSt13__is_floatingI6uchar3E7__valueE};
# 99 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__traitorISt12__is_integerI6uchar3ESt13__is_floatingIS1_EEUt_E { _ZNSt9__traitorISt12__is_integerI6uchar3ESt13__is_floatingIS1_EE7__valueE};
# 293 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_pointerI6uchar3EUt_E { _ZNSt12__is_pointerI6uchar3E7__valueE};
# 99 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__traitorISt15__is_arithmeticI6uchar3ESt12__is_pointerIS1_EEUt_E { _ZNSt9__traitorISt15__is_arithmeticI6uchar3ESt12__is_pointerIS1_EE7__valueE};
# 114 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt10__are_sameIP6uchar3S1_EUt_E { _ZNSt10__are_sameIP6uchar3S1_E7__valueE = 1};
# 107 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt10__are_sameIPK6uchar3PS0_EUt_E { _ZNSt10__are_sameIPK6uchar3PS0_E7__valueE};
# 406 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt18__is_move_iteratorIN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS2_SaIS2_EEEEEUt_E { _ZNSt18__is_move_iteratorIN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS2_SaIS2_EEEEE7__valueE};
# 318 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorIN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS2_SaIS2_EEEEEUt_E { _ZNSt20__is_normal_iteratorIN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS2_SaIS2_EEEEE7__valueE = 1};
# 300 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_pointerIPK6uchar3EUt_E { _ZNSt12__is_pointerIPK6uchar3E7__valueE = 1}; enum _ZNSt12__is_pointerIP6uchar3EUt_E { _ZNSt12__is_pointerIP6uchar3E7__valueE = 1};
# 114 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt10__are_sameI6uchar3S0_EUt_E { _ZNSt10__are_sameI6uchar3S0_E7__valueE = 1};
# 154 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE;
# 310 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorISt16ostream_iteratorI6uchar3cSt11char_traitsIcEEEUt_E { _ZNSt20__is_normal_iteratorISt16ostream_iteratorI6uchar3cSt11char_traitsIcEEE7__valueE};
# 293 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_pointerISt16ostream_iteratorI6uchar3cSt11char_traitsIcEEEUt_E { _ZNSt12__is_pointerISt16ostream_iteratorI6uchar3cSt11char_traitsIcEEE7__valueE};
# 107 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt10__are_sameI6uchar3vEUt_E { _ZNSt10__are_sameI6uchar3vE7__valueE};
# 310 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorIP4int4EUt_E { _ZNSt20__is_normal_iteratorIP4int4E7__valueE};
# 375 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteI4int4EUt_E { _ZNSt9__is_byteI4int4E7__valueE};
# 139 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerI4int4EUt_E { _ZNSt12__is_integerI4int4E7__valueE};
# 261 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingI4int4EUt_E { _ZNSt13__is_floatingI4int4E7__valueE};
# 99 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__traitorISt12__is_integerI4int4ESt13__is_floatingIS1_EEUt_E { _ZNSt9__traitorISt12__is_integerI4int4ESt13__is_floatingIS1_EE7__valueE};
# 293 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_pointerI4int4EUt_E { _ZNSt12__is_pointerI4int4E7__valueE};
# 99 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt9__traitorISt15__is_arithmeticI4int4ESt12__is_pointerIS1_EEUt_E { _ZNSt9__traitorISt15__is_arithmeticI4int4ESt12__is_pointerIS1_EE7__valueE};
# 114 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt10__are_sameIP4int4S1_EUt_E { _ZNSt10__are_sameIP4int4S1_E7__valueE = 1};
# 107 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt10__are_sameIPK4int4PS0_EUt_E { _ZNSt10__are_sameIPK4int4PS0_E7__valueE};
# 406 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt18__is_move_iteratorIN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS2_SaIS2_EEEEEUt_E { _ZNSt18__is_move_iteratorIN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS2_SaIS2_EEEEE7__valueE};
# 318 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorIN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS2_SaIS2_EEEEEUt_E { _ZNSt20__is_normal_iteratorIN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS2_SaIS2_EEEEE7__valueE = 1};
# 300 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_pointerIPK4int4EUt_E { _ZNSt12__is_pointerIPK4int4E7__valueE = 1}; enum _ZNSt12__is_pointerIP4int4EUt_E { _ZNSt12__is_pointerIP4int4E7__valueE = 1};
# 114 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt10__are_sameI4int4S0_EUt_E { _ZNSt10__are_sameI4int4S0_E7__valueE = 1};
# 154 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE;
# 310 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorISt16ostream_iteratorI4int4cSt11char_traitsIcEEEUt_E { _ZNSt20__is_normal_iteratorISt16ostream_iteratorI4int4cSt11char_traitsIcEEE7__valueE};
# 293 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_pointerISt16ostream_iteratorI4int4cSt11char_traitsIcEEEUt_E { _ZNSt12__is_pointerISt16ostream_iteratorI4int4cSt11char_traitsIcEEE7__valueE};
# 107 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/cpp_type_traits.h" 3
enum _ZNSt10__are_sameI4int4vEUt_E { _ZNSt10__are_sameI4int4vE7__valueE};
# 54 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/new_allocator.h" 3
struct _ZN9__gnu_cxx13new_allocatorI6float3EE; struct _ZN9__gnu_cxx13new_allocatorI5uint4EE; struct _ZN9__gnu_cxx13new_allocatorI6real44EE; struct _ZN9__gnu_cxx13new_allocatorIdEE; struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE; struct _ZN9__gnu_cxx13new_allocatorI4int4EE;
# 710 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE; struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE; struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE; struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE; struct _ZN9__gnu_cxx17__normal_iteratorIPK6real44St6vectorIS1_SaIS1_EEEE; struct _ZN9__gnu_cxx17__normal_iteratorIP6uchar3St6vectorIS1_SaIS1_EEEE; struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE; struct _ZN9__gnu_cxx17__normal_iteratorIP4int4St6vectorIS1_SaIS1_EEEE; struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE;
# 64 "/usr/include/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_;
# 213 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/include/stddef.h" 3
typedef unsigned long size_t;
#include "crt/host_runtime.h"
struct __C3 { struct __C2 *regions; void **obj_table; struct __C1 *array_table; unsigned short saved_region_number;char __nv_no_debug_dummy[6];}; struct __C5 { const struct __type_info *tinfo; unsigned char flags; unsigned char *ptr_flags;}; struct __C6 { long setjmp_buffer[25]; struct __C5 *catch_entries; void *rtinfo; unsigned short region_number;char __nv_no_debug_dummy[6];}; union __C7 { struct __C6 try_block; struct __C3 function; struct __C5 *throw_spec;}; struct __C8 { struct __C8 *next; unsigned char kind; union __C7 variant;};
# 49 "/usr/include/stdio.h" 3
typedef struct _IO_FILE FILE;
# 87 "/usr/include/wchar.h" 3
union _ZN11__mbstate_tUt_E {

unsigned __wch;



char __wchb[4];};
# 84 "/usr/include/wchar.h" 3
struct __mbstate_t {
int __count;
# 94 "/usr/include/wchar.h" 3
union _ZN11__mbstate_tUt_E __value;};
typedef struct __mbstate_t __mbstate_t;
# 153 "/usr/include/sys/types.h" 3
typedef unsigned uint;
# 61 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_internal_list {

struct __pthread_internal_list *__prev;
struct __pthread_internal_list *__next;};
typedef struct __pthread_internal_list __pthread_list_t;
# 78 "/usr/include/bits/pthreadtypes.h" 3
struct _ZN15pthread_mutex_t17__pthread_mutex_sE {

int __lock;
unsigned __count;
int __owner;

unsigned __nusers;



int __kind;

int __spins;
__pthread_list_t __list;};
# 77 "/usr/include/bits/pthreadtypes.h" 3
union pthread_mutex_t {
# 101 "/usr/include/bits/pthreadtypes.h" 3
struct _ZN15pthread_mutex_t17__pthread_mutex_sE __data;
char __size[40];
long __align;};
typedef union pthread_mutex_t pthread_mutex_t;
# 74 "/usr/local/cuda/include/cuda_texture_types.h"
struct _Z7textureI4int4Li2EL19cudaTextureReadMode0EE { struct textureReference __b_16textureReference;};
# 106 "/usr/include/wchar.h" 3
typedef __mbstate_t mbstate_t;
# 56 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/x86_64-unknown-linux-gnu/bits/gthr-default.h" 3
typedef pthread_mutex_t __gthread_mutex_t;
# 9 "common.h"
typedef float3 real3;
typedef float4 real4;
typedef real3 vertex_type;
typedef uint4 tri_type;

struct real44 {
real4 rows[4];};




typedef struct real44 transform_type;
# 65 "cuPrintf.cu"
struct cuPrintfRestriction {
int threadid;
int blockid;} __attribute__((__aligned__(8)));
typedef struct cuPrintfRestriction cuPrintfRestriction;
# 85 "cuPrintf.cu"
struct cuPrintfHeader {
unsigned short magic;
unsigned short fmtoffset;
unsigned short blockid;
unsigned short threadid;} __attribute__((__aligned__(8)));
typedef struct cuPrintfHeader cuPrintfHeader;



struct cuPrintfHeaderSM10 {
unsigned short magic;
unsigned short unused;
unsigned thread_index;
unsigned thread_buf_len;
unsigned offset;} __attribute__((__aligned__(16)));
typedef struct cuPrintfHeaderSM10 cuPrintfHeaderSM10;
# 173 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/x86_64-unknown-linux-gnu/bits/c++config.h" 3
typedef unsigned long _ZSt6size_t;
typedef long _ZSt9ptrdiff_t;
# 62 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/exception" 3
struct _ZSt9exception { const long *__vptr;};
# 56 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/new" 3
struct _ZSt9bad_alloc { struct _ZSt9exception __b_St9exception;};
# 100 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/postypes.h" 3
typedef _ZSt9ptrdiff_t _ZSt10streamsize;
# 159 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/iosfwd" 3
typedef struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE _ZSt8ifstream;
# 119 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator_base_types.h" 3
struct _ZSt8iteratorISt19output_iterator_tagvvvvE {char __nv_no_debug_dummy;};
# 238 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/char_traits.h" 3
typedef int _ZNSt11char_traitsIcE8int_typeE;


typedef mbstate_t _ZNSt11char_traitsIcE10state_typeE;
# 235 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/char_traits.h" 3
struct _ZSt11char_traitsIcE {char __nv_no_debug_dummy;};
# 64 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/locale_classes.h" 3
struct _ZSt6locale {
# 282 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/locale_classes.h" 3
struct _ZNSt6locale5_ImplE *_M_impl;};
# 257 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
typedef enum _ZSt13_Ios_Fmtflags _ZNSt8ios_base8fmtflagsE;
# 332 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
typedef enum _ZSt12_Ios_Iostate _ZNSt8ios_base7iostateE;
# 363 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
typedef enum _ZSt13_Ios_Openmode _ZNSt8ios_base8openmodeE;
# 501 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
struct _ZNSt8ios_base6_WordsE {

void *_M_pword;
long _M_iword;};
# 535 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
struct _ZNSt8ios_base4InitE {char __nv_no_debug_dummy;};
# 201 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
struct _ZSt8ios_base { const long *__vptr;
# 454 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
_ZSt10streamsize _M_precision;
_ZSt10streamsize _M_width;
_ZNSt8ios_base8fmtflagsE _M_flags;
_ZNSt8ios_base7iostateE _M_exception;
_ZNSt8ios_base7iostateE _M_streambuf_state;
# 492 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
struct _ZNSt8ios_base14_Callback_listE *_M_callbacks;
# 509 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
struct _ZNSt8ios_base6_WordsE _M_word_zero;




struct _ZNSt8ios_base6_WordsE _M_local_word[8];


int _M_word_size;
struct _ZNSt8ios_base6_WordsE *_M_word;
# 524 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
struct _ZSt6locale _M_ios_locale;};
# 126 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/streambuf" 3
typedef char _ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE;
typedef struct _ZSt11char_traitsIcE _ZNSt15basic_streambufIcSt11char_traitsIcEE11traits_typeE;
# 82 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/iosfwd" 3
struct _ZSt15basic_streambufIcSt11char_traitsIcEE { const long *__vptr;
# 182 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/streambuf" 3
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_in_beg;
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_in_cur;
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_in_end;
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_out_beg;
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_out_cur;
_ZNSt15basic_streambufIcSt11char_traitsIcEE9char_typeE *_M_out_end;


struct _ZSt6locale _M_buf_locale;};
# 73 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/basic_ios.h" 3
typedef char _ZNSt9basic_iosIcSt11char_traitsIcEE9char_typeE;
# 84 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/basic_ios.h" 3
typedef struct _ZSt5ctypeIcE _ZNSt9basic_iosIcSt11char_traitsIcEE12__ctype_typeE;

typedef struct _ZSt7num_putIcSt19ostreambuf_iteratorIcSt11char_traitsIcEEE _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_put_typeE;

typedef struct _ZSt7num_getIcSt19istreambuf_iteratorIcSt11char_traitsIcEEE _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_get_typeE;
# 79 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/iosfwd" 3
struct _ZSt9basic_iosIcSt11char_traitsIcEE { struct _ZSt8ios_base __b_St8ios_base;
# 93 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/basic_ios.h" 3
struct _ZSo *_M_tie;
_ZNSt9basic_iosIcSt11char_traitsIcEE9char_typeE _M_fill;
char _M_fill_init;
struct _ZSt15basic_streambufIcSt11char_traitsIcEE *_M_streambuf;


const _ZNSt9basic_iosIcSt11char_traitsIcEE12__ctype_typeE *_M_ctype;

const _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_put_typeE *_M_num_put;

const _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_get_typeE *_M_num_get;};
# 69 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ostream" 3
typedef struct _ZSo _ZNSo14__ostream_typeE;
# 88 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/iosfwd" 3
struct _ZSo { const long *__vptr; struct _ZSt9basic_iosIcSt11char_traitsIcEE __v_St9basic_iosIcSt11char_traitsIcEE;};
# 61 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/istream" 3
typedef _ZNSt11char_traitsIcE8int_typeE _ZNSi8int_typeE;
# 69 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/istream" 3
typedef struct _ZSi _ZNSi14__istream_typeE;
# 85 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/iosfwd" 3
struct _ZSi { const long *__vptr;
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/istream" 3
_ZSt10streamsize _M_gcount; struct _ZSt9basic_iosIcSt11char_traitsIcEE __v_St9basic_iosIcSt11char_traitsIcEE;};
# 85 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/iosfwd" 3
struct __SO__Si { const long *__vptr;
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/istream" 3
_ZSt10streamsize _M_gcount;};
# 43 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/x86_64-unknown-linux-gnu/bits/c++io.h" 3
typedef __gthread_mutex_t _ZSt8__c_lock;


typedef FILE _ZSt8__c_file;
# 54 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/x86_64-unknown-linux-gnu/bits/basic_file.h" 3
struct _ZSt12__basic_fileIcE {


_ZSt8__c_file *_M_cfile;


char _M_cfile_created;char __nv_no_debug_dummy[7];};
# 73 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
typedef char _ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE;
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
typedef struct _ZSt13basic_filebufIcSt11char_traitsIcEE _ZNSt13basic_filebufIcSt11char_traitsIcEE14__filebuf_typeE;
typedef struct _ZSt12__basic_fileIcE _ZNSt13basic_filebufIcSt11char_traitsIcEE11__file_typeE;
typedef _ZNSt11char_traitsIcE10state_typeE _ZNSt13basic_filebufIcSt11char_traitsIcEE12__state_typeE;
typedef struct _ZSt7codecvtIcc11__mbstate_tE _ZNSt13basic_filebufIcSt11char_traitsIcEE14__codecvt_typeE;
# 110 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/iosfwd" 3
struct _ZSt13basic_filebufIcSt11char_traitsIcEE { struct _ZSt15basic_streambufIcSt11char_traitsIcEE __b_St15basic_streambufIcSt11char_traitsIcEE;
# 90 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
_ZSt8__c_lock _M_lock;


_ZNSt13basic_filebufIcSt11char_traitsIcEE11__file_typeE _M_file;


_ZNSt8ios_base8openmodeE _M_mode;


_ZNSt13basic_filebufIcSt11char_traitsIcEE12__state_typeE _M_state_beg;




_ZNSt13basic_filebufIcSt11char_traitsIcEE12__state_typeE _M_state_cur;



_ZNSt13basic_filebufIcSt11char_traitsIcEE12__state_typeE _M_state_last;


_ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE *_M_buf;
# 118 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
_ZSt6size_t _M_buf_size;


char _M_buf_allocated;
# 130 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
char _M_reading;
char _M_writing;
# 139 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
_ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE _M_pback;
_ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE *_M_pback_cur_save;
_ZNSt13basic_filebufIcSt11char_traitsIcEE9char_typeE *_M_pback_end_save;
char _M_pback_init;



const _ZNSt13basic_filebufIcSt11char_traitsIcEE14__codecvt_typeE *_M_codecvt;
# 153 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
char *_M_ext_buf;




_ZSt10streamsize _M_ext_buf_size;
# 165 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
const char *_M_ext_next;
char *_M_ext_end;};
# 431 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
typedef struct _ZSt13basic_filebufIcSt11char_traitsIcEE _ZNSt14basic_ifstreamIcSt11char_traitsIcEE14__filebuf_typeE;
# 113 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/iosfwd" 3
struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE { struct __SO__Si __b_Si;
# 435 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
_ZNSt14basic_ifstreamIcSt11char_traitsIcEE14__filebuf_typeE _M_filebuf; struct _ZSt9basic_iosIcSt11char_traitsIcEE __v_St9basic_iosIcSt11char_traitsIcEE;};
# 94 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
typedef vertex_type *_ZNSaI6float3E7pointerE;
typedef const vertex_type *_ZNSaI6float3E13const_pointerE;
typedef vertex_type *_ZNSaI6float3E9referenceE;
typedef const vertex_type *_ZNSaI6float3E15const_referenceE;




typedef struct _ZSaI6float3E _ZNSaI6float3E6rebindIS_E5otherE;
# 89 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
struct _ZSaI6float3E {char __nv_no_debug_dummy;};
# 202 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI6float3E6rebindIS_E5otherE _ZN9__gnu_cxx14__alloc_traitsISaI6float3EE6rebindIS1_E5otherE;
# 76 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI6float3EE6rebindIS1_E5otherE _ZNSt12_Vector_baseI6float3SaIS0_EE14_Tp_alloc_typeE;
# 167 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI6float3E7pointerE _ZN9__gnu_cxx14__alloc_traitsISaI6float3EE7pointerE;
# 78 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI6float3EE7pointerE _ZNSt12_Vector_baseI6float3SaIS0_EE7pointerE;
# 111 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef struct _ZSaI6float3E _ZNSt12_Vector_baseI6float3SaIS0_EE14allocator_typeE;
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseI6float3SaIS0_EE12_Vector_implE {


_ZNSt12_Vector_baseI6float3SaIS0_EE7pointerE _M_start;
_ZNSt12_Vector_baseI6float3SaIS0_EE7pointerE _M_finish;
_ZNSt12_Vector_baseI6float3SaIS0_EE7pointerE _M_end_of_storage;};
# 73 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt12_Vector_baseI6float3SaIS0_EE {
# 165 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseI6float3SaIS0_EE12_Vector_implE _M_impl;};
# 220 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef vertex_type _ZNSt6vectorI6float3SaIS0_EE10value_typeE;
typedef _ZNSt12_Vector_baseI6float3SaIS0_EE7pointerE _ZNSt6vectorI6float3SaIS0_EE7pointerE;
# 168 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI6float3E13const_pointerE _ZN9__gnu_cxx14__alloc_traitsISaI6float3EE13const_pointerE;
# 222 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI6float3EE13const_pointerE _ZNSt6vectorI6float3SaIS0_EE13const_pointerE;
# 170 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI6float3E9referenceE _ZN9__gnu_cxx14__alloc_traitsISaI6float3EE9referenceE;
# 223 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI6float3EE9referenceE _ZNSt6vectorI6float3SaIS0_EE9referenceE;
# 171 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI6float3E15const_referenceE _ZN9__gnu_cxx14__alloc_traitsISaI6float3EE15const_referenceE;
# 224 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI6float3EE15const_referenceE _ZNSt6vectorI6float3SaIS0_EE15const_referenceE;
typedef struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE _ZNSt6vectorI6float3SaIS0_EE8iteratorE;

typedef struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE _ZNSt6vectorI6float3SaIS0_EE14const_iteratorE;


typedef _ZSt6size_t _ZNSt6vectorI6float3SaIS0_EE9size_typeE;

typedef struct _ZSaI6float3E _ZNSt6vectorI6float3SaIS0_EE14allocator_typeE;
# 208 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt6vectorI6float3SaIS0_EE { struct _ZSt12_Vector_baseI6float3SaIS0_EE __b_St12_Vector_baseI6float3SaIS0_EE;};
# 119 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator_base_types.h" 3
struct _ZSt8iteratorISt18input_iterator_tag6float3lPKS1_RS2_E {char __nv_no_debug_dummy;};
# 55 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
typedef struct _ZSi _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElE12istream_typeE;
# 49 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE {
# 58 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
_ZNSt16istream_iteratorI6float3cSt11char_traitsIcElE12istream_typeE *_M_stream;
vertex_type _M_value;
char _M_ok;char __nv_no_debug_dummy[3];};
# 404 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE {



struct _ZSt6vectorI6float3SaIS0_EE *container;};
# 94 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
typedef tri_type *_ZNSaI5uint4E7pointerE;
typedef const tri_type *_ZNSaI5uint4E13const_pointerE;
typedef tri_type *_ZNSaI5uint4E9referenceE;
typedef const tri_type *_ZNSaI5uint4E15const_referenceE;




typedef struct _ZSaI5uint4E _ZNSaI5uint4E6rebindIS_E5otherE;
# 89 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
struct _ZSaI5uint4E {char __nv_no_debug_dummy;};
# 202 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI5uint4E6rebindIS_E5otherE _ZN9__gnu_cxx14__alloc_traitsISaI5uint4EE6rebindIS1_E5otherE;
# 76 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI5uint4EE6rebindIS1_E5otherE _ZNSt12_Vector_baseI5uint4SaIS0_EE14_Tp_alloc_typeE;
# 167 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI5uint4E7pointerE _ZN9__gnu_cxx14__alloc_traitsISaI5uint4EE7pointerE;
# 78 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI5uint4EE7pointerE _ZNSt12_Vector_baseI5uint4SaIS0_EE7pointerE;

struct _ZNSt12_Vector_baseI5uint4SaIS0_EE12_Vector_implE {


_ZNSt12_Vector_baseI5uint4SaIS0_EE7pointerE _M_start;
_ZNSt12_Vector_baseI5uint4SaIS0_EE7pointerE _M_finish;
_ZNSt12_Vector_baseI5uint4SaIS0_EE7pointerE _M_end_of_storage;};
# 73 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt12_Vector_baseI5uint4SaIS0_EE {
# 165 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseI5uint4SaIS0_EE12_Vector_implE _M_impl;};
# 220 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef tri_type _ZNSt6vectorI5uint4SaIS0_EE10value_typeE;
typedef _ZNSt12_Vector_baseI5uint4SaIS0_EE7pointerE _ZNSt6vectorI5uint4SaIS0_EE7pointerE;
# 168 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI5uint4E13const_pointerE _ZN9__gnu_cxx14__alloc_traitsISaI5uint4EE13const_pointerE;
# 222 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI5uint4EE13const_pointerE _ZNSt6vectorI5uint4SaIS0_EE13const_pointerE;
# 170 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI5uint4E9referenceE _ZN9__gnu_cxx14__alloc_traitsISaI5uint4EE9referenceE;
# 223 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI5uint4EE9referenceE _ZNSt6vectorI5uint4SaIS0_EE9referenceE;
# 171 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI5uint4E15const_referenceE _ZN9__gnu_cxx14__alloc_traitsISaI5uint4EE15const_referenceE;
# 224 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI5uint4EE15const_referenceE _ZNSt6vectorI5uint4SaIS0_EE15const_referenceE;
typedef struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE _ZNSt6vectorI5uint4SaIS0_EE8iteratorE;

typedef struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE _ZNSt6vectorI5uint4SaIS0_EE14const_iteratorE;


typedef _ZSt6size_t _ZNSt6vectorI5uint4SaIS0_EE9size_typeE;
# 208 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt6vectorI5uint4SaIS0_EE { struct _ZSt12_Vector_baseI5uint4SaIS0_EE __b_St12_Vector_baseI5uint4SaIS0_EE;};
# 119 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator_base_types.h" 3
struct _ZSt8iteratorISt18input_iterator_tag5uint4lPKS1_RS2_E {char __nv_no_debug_dummy;};
# 55 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
typedef struct _ZSi _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElE12istream_typeE;
# 49 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE {
# 58 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
_ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElE12istream_typeE *_M_stream;
tri_type _M_value;
char _M_ok;char __nv_no_debug_dummy[15];};
# 404 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE {



struct _ZSt6vectorI5uint4SaIS0_EE *container;};
# 94 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
typedef struct real44 *_ZNSaI6real44E7pointerE;
typedef const struct real44 *_ZNSaI6real44E13const_pointerE;

typedef const struct real44 *_ZNSaI6real44E15const_referenceE;




typedef struct _ZSaI6real44E _ZNSaI6real44E6rebindIS_E5otherE;
# 89 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
struct _ZSaI6real44E {char __nv_no_debug_dummy;};
# 202 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI6real44E6rebindIS_E5otherE _ZN9__gnu_cxx14__alloc_traitsISaI6real44EE6rebindIS1_E5otherE;
# 76 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI6real44EE6rebindIS1_E5otherE _ZNSt12_Vector_baseI6real44SaIS0_EE14_Tp_alloc_typeE;
# 167 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI6real44E7pointerE _ZN9__gnu_cxx14__alloc_traitsISaI6real44EE7pointerE;
# 78 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI6real44EE7pointerE _ZNSt12_Vector_baseI6real44SaIS0_EE7pointerE;

struct _ZNSt12_Vector_baseI6real44SaIS0_EE12_Vector_implE {


_ZNSt12_Vector_baseI6real44SaIS0_EE7pointerE _M_start;
_ZNSt12_Vector_baseI6real44SaIS0_EE7pointerE _M_finish;
_ZNSt12_Vector_baseI6real44SaIS0_EE7pointerE _M_end_of_storage;};
# 73 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt12_Vector_baseI6real44SaIS0_EE {
# 165 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseI6real44SaIS0_EE12_Vector_implE _M_impl;};
# 168 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI6real44E13const_pointerE _ZN9__gnu_cxx14__alloc_traitsISaI6real44EE13const_pointerE;
# 222 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI6real44EE13const_pointerE _ZNSt6vectorI6real44SaIS0_EE13const_pointerE;
# 171 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI6real44E15const_referenceE _ZN9__gnu_cxx14__alloc_traitsISaI6real44EE15const_referenceE;
# 224 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI6real44EE15const_referenceE _ZNSt6vectorI6real44SaIS0_EE15const_referenceE;


typedef struct _ZN9__gnu_cxx17__normal_iteratorIPK6real44St6vectorIS1_SaIS1_EEEE _ZNSt6vectorI6real44SaIS0_EE14const_iteratorE;


typedef _ZSt6size_t _ZNSt6vectorI6real44SaIS0_EE9size_typeE;
# 208 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt6vectorI6real44SaIS0_EE { struct _ZSt12_Vector_baseI6real44SaIS0_EE __b_St12_Vector_baseI6real44SaIS0_EE;};
# 94 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
typedef double *_ZNSaIdE7pointerE;

typedef double *_ZNSaIdE9referenceE;
# 102 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
typedef struct _ZSaIdE _ZNSaIdE6rebindIdE5otherE;
# 89 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
struct _ZSaIdE {char __nv_no_debug_dummy;};
# 202 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaIdE6rebindIdE5otherE _ZN9__gnu_cxx14__alloc_traitsISaIdEE6rebindIdE5otherE;
# 76 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaIdEE6rebindIdE5otherE _ZNSt12_Vector_baseIdSaIdEE14_Tp_alloc_typeE;
# 167 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaIdE7pointerE _ZN9__gnu_cxx14__alloc_traitsISaIdEE7pointerE;
# 78 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaIdEE7pointerE _ZNSt12_Vector_baseIdSaIdEE7pointerE;

struct _ZNSt12_Vector_baseIdSaIdEE12_Vector_implE {


_ZNSt12_Vector_baseIdSaIdEE7pointerE _M_start;
_ZNSt12_Vector_baseIdSaIdEE7pointerE _M_finish;
_ZNSt12_Vector_baseIdSaIdEE7pointerE _M_end_of_storage;};
# 73 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt12_Vector_baseIdSaIdEE {
# 165 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseIdSaIdEE12_Vector_implE _M_impl;};
# 170 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaIdE9referenceE _ZN9__gnu_cxx14__alloc_traitsISaIdEE9referenceE;
# 223 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaIdEE9referenceE _ZNSt6vectorIdSaIdEE9referenceE;
# 230 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZSt6size_t _ZNSt6vectorIdSaIdEE9size_typeE;
# 208 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt6vectorIdSaIdEE { struct _ZSt12_Vector_baseIdSaIdEE __b_St12_Vector_baseIdSaIdEE;};
# 53 "cuda_side.cu"
typedef uchar3 _ZN9cuda_side10pixel_typeE;
# 94 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
typedef _ZN9cuda_side10pixel_typeE *_ZNSaI6uchar3E7pointerE;
typedef const _ZN9cuda_side10pixel_typeE *_ZNSaI6uchar3E13const_pointerE;
# 102 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
typedef struct _ZSaI6uchar3E _ZNSaI6uchar3E6rebindIS_E5otherE;
# 89 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
struct _ZSaI6uchar3E {char __nv_no_debug_dummy;};
# 202 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI6uchar3E6rebindIS_E5otherE _ZN9__gnu_cxx14__alloc_traitsISaI6uchar3EE6rebindIS1_E5otherE;
# 76 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI6uchar3EE6rebindIS1_E5otherE _ZNSt12_Vector_baseI6uchar3SaIS0_EE14_Tp_alloc_typeE;
# 167 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI6uchar3E7pointerE _ZN9__gnu_cxx14__alloc_traitsISaI6uchar3EE7pointerE;
# 78 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI6uchar3EE7pointerE _ZNSt12_Vector_baseI6uchar3SaIS0_EE7pointerE;
# 111 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef struct _ZSaI6uchar3E _ZNSt12_Vector_baseI6uchar3SaIS0_EE14allocator_typeE;
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseI6uchar3SaIS0_EE12_Vector_implE {


_ZNSt12_Vector_baseI6uchar3SaIS0_EE7pointerE _M_start;
_ZNSt12_Vector_baseI6uchar3SaIS0_EE7pointerE _M_finish;
_ZNSt12_Vector_baseI6uchar3SaIS0_EE7pointerE _M_end_of_storage;};
# 73 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt12_Vector_baseI6uchar3SaIS0_EE {
# 165 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseI6uchar3SaIS0_EE12_Vector_implE _M_impl;};
# 220 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9cuda_side10pixel_typeE _ZNSt6vectorI6uchar3SaIS0_EE10value_typeE;
typedef _ZNSt12_Vector_baseI6uchar3SaIS0_EE7pointerE _ZNSt6vectorI6uchar3SaIS0_EE7pointerE;
# 168 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI6uchar3E13const_pointerE _ZN9__gnu_cxx14__alloc_traitsISaI6uchar3EE13const_pointerE;
# 222 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI6uchar3EE13const_pointerE _ZNSt6vectorI6uchar3SaIS0_EE13const_pointerE;


typedef struct _ZN9__gnu_cxx17__normal_iteratorIP6uchar3St6vectorIS1_SaIS1_EEEE _ZNSt6vectorI6uchar3SaIS0_EE8iteratorE;

typedef struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE _ZNSt6vectorI6uchar3SaIS0_EE14const_iteratorE;


typedef _ZSt6size_t _ZNSt6vectorI6uchar3SaIS0_EE9size_typeE;

typedef struct _ZSaI6uchar3E _ZNSt6vectorI6uchar3SaIS0_EE14allocator_typeE;
# 208 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt6vectorI6uchar3SaIS0_EE { struct _ZSt12_Vector_baseI6uchar3SaIS0_EE __b_St12_Vector_baseI6uchar3SaIS0_EE;};
# 70 "cuda_side.cu"
typedef int4 _ZN9cuda_side16partial_sum_typeE;
# 94 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
typedef _ZN9cuda_side16partial_sum_typeE *_ZNSaI4int4E7pointerE;
typedef const _ZN9cuda_side16partial_sum_typeE *_ZNSaI4int4E13const_pointerE;
# 102 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
typedef struct _ZSaI4int4E _ZNSaI4int4E6rebindIS_E5otherE;
# 89 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
struct _ZSaI4int4E {char __nv_no_debug_dummy;};
# 202 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI4int4E6rebindIS_E5otherE _ZN9__gnu_cxx14__alloc_traitsISaI4int4EE6rebindIS1_E5otherE;
# 76 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI4int4EE6rebindIS1_E5otherE _ZNSt12_Vector_baseI4int4SaIS0_EE14_Tp_alloc_typeE;
# 167 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI4int4E7pointerE _ZN9__gnu_cxx14__alloc_traitsISaI4int4EE7pointerE;
# 78 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI4int4EE7pointerE _ZNSt12_Vector_baseI4int4SaIS0_EE7pointerE;
# 111 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef struct _ZSaI4int4E _ZNSt12_Vector_baseI4int4SaIS0_EE14allocator_typeE;
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseI4int4SaIS0_EE12_Vector_implE {


_ZNSt12_Vector_baseI4int4SaIS0_EE7pointerE _M_start;
_ZNSt12_Vector_baseI4int4SaIS0_EE7pointerE _M_finish;
_ZNSt12_Vector_baseI4int4SaIS0_EE7pointerE _M_end_of_storage;};
# 73 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt12_Vector_baseI4int4SaIS0_EE {
# 165 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZNSt12_Vector_baseI4int4SaIS0_EE12_Vector_implE _M_impl;};
# 220 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9cuda_side16partial_sum_typeE _ZNSt6vectorI4int4SaIS0_EE10value_typeE;
typedef _ZNSt12_Vector_baseI4int4SaIS0_EE7pointerE _ZNSt6vectorI4int4SaIS0_EE7pointerE;
# 168 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/alloc_traits.h" 3
typedef _ZNSaI4int4E13const_pointerE _ZN9__gnu_cxx14__alloc_traitsISaI4int4EE13const_pointerE;
# 222 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
typedef _ZN9__gnu_cxx14__alloc_traitsISaI4int4EE13const_pointerE _ZNSt6vectorI4int4SaIS0_EE13const_pointerE;


typedef struct _ZN9__gnu_cxx17__normal_iteratorIP4int4St6vectorIS1_SaIS1_EEEE _ZNSt6vectorI4int4SaIS0_EE8iteratorE;

typedef struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE _ZNSt6vectorI4int4SaIS0_EE14const_iteratorE;


typedef _ZSt6size_t _ZNSt6vectorI4int4SaIS0_EE9size_typeE;

typedef struct _ZSaI4int4E _ZNSt6vectorI4int4SaIS0_EE14allocator_typeE;
# 208 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
struct _ZSt6vectorI4int4SaIS0_EE { struct _ZSt12_Vector_baseI4int4SaIS0_EE __b_St12_Vector_baseI4int4SaIS0_EE;};
# 191 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator_base_types.h" 3
typedef _ZSt9ptrdiff_t _ZNSt15iterator_traitsIPK6uchar3E15difference_typeE;
# 721 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
typedef _ZNSt15iterator_traitsIPK6uchar3E15difference_typeE _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEE15difference_typeE;
# 162 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
typedef struct _ZSo _ZNSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE12ostream_typeE;
# 154 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE {
# 166 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
_ZNSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE12ostream_typeE *_M_stream;
const char *_M_string;};
# 191 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator_base_types.h" 3
typedef _ZSt9ptrdiff_t _ZNSt15iterator_traitsIPK4int4E15difference_typeE;
# 721 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
typedef _ZNSt15iterator_traitsIPK4int4E15difference_typeE _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEE15difference_typeE;
# 162 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
typedef struct _ZSo _ZNSt16ostream_iteratorI4int4cSt11char_traitsIcEE12ostream_typeE;
# 154 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE {
# 166 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
_ZNSt16ostream_iteratorI4int4cSt11char_traitsIcEE12ostream_typeE *_M_stream;
const char *_M_string;};
# 57 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/new_allocator.h" 3
typedef _ZSt6size_t _ZN9__gnu_cxx13new_allocatorI6float3E9size_typeE;

typedef vertex_type *_ZN9__gnu_cxx13new_allocatorI6float3E7pointerE;
# 54 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/new_allocator.h" 3
struct _ZN9__gnu_cxx13new_allocatorI6float3EE {char __nv_no_debug_dummy;};


typedef _ZSt6size_t _ZN9__gnu_cxx13new_allocatorI5uint4E9size_typeE;

typedef tri_type *_ZN9__gnu_cxx13new_allocatorI5uint4E7pointerE;
# 54 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/new_allocator.h" 3
struct _ZN9__gnu_cxx13new_allocatorI5uint4EE {char __nv_no_debug_dummy;}; struct _ZN9__gnu_cxx13new_allocatorI6real44EE {char __nv_no_debug_dummy;}; struct _ZN9__gnu_cxx13new_allocatorIdEE {char __nv_no_debug_dummy;};


typedef _ZSt6size_t _ZN9__gnu_cxx13new_allocatorI6uchar3E9size_typeE;

typedef _ZN9cuda_side10pixel_typeE *_ZN9__gnu_cxx13new_allocatorI6uchar3E7pointerE;
# 54 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/new_allocator.h" 3
struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE {char __nv_no_debug_dummy;};


typedef _ZSt6size_t _ZN9__gnu_cxx13new_allocatorI4int4E9size_typeE;

typedef _ZN9cuda_side16partial_sum_typeE *_ZN9__gnu_cxx13new_allocatorI4int4E7pointerE;
# 54 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/new_allocator.h" 3
struct _ZN9__gnu_cxx13new_allocatorI4int4EE {char __nv_no_debug_dummy;};
# 48 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/type_traits.h" 3
typedef vertex_type *_ZN9__gnu_cxx11__enable_ifILb1EP6float3E6__typeE;
# 710 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE {


_ZNSt6vectorI6float3SaIS0_EE13const_pointerE _M_current;};
# 710 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE {


_ZNSt6vectorI6float3SaIS0_EE7pointerE _M_current;};
# 710 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE {


_ZNSt6vectorI5uint4SaIS0_EE13const_pointerE _M_current;};
# 710 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE {


_ZNSt6vectorI5uint4SaIS0_EE7pointerE _M_current;};
# 710 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
struct _ZN9__gnu_cxx17__normal_iteratorIPK6real44St6vectorIS1_SaIS1_EEEE {


_ZNSt6vectorI6real44SaIS0_EE13const_pointerE _M_current;};
# 48 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/type_traits.h" 3
typedef _ZN9cuda_side10pixel_typeE *_ZN9__gnu_cxx11__enable_ifILb1EP6uchar3E6__typeE;
# 710 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
struct _ZN9__gnu_cxx17__normal_iteratorIP6uchar3St6vectorIS1_SaIS1_EEEE {


_ZNSt6vectorI6uchar3SaIS0_EE7pointerE _M_current;};
# 710 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE {


_ZNSt6vectorI6uchar3SaIS0_EE13const_pointerE _M_current;};
# 48 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/type_traits.h" 3
typedef _ZN9cuda_side16partial_sum_typeE *_ZN9__gnu_cxx11__enable_ifILb1EP4int4E6__typeE;
# 710 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
struct _ZN9__gnu_cxx17__normal_iteratorIP4int4St6vectorIS1_SaIS1_EEEE {


_ZNSt6vectorI4int4SaIS0_EE7pointerE _M_current;};
# 710 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE {


_ZNSt6vectorI4int4SaIS0_EE13const_pointerE _M_current;};
# 87 "cuda_side.cu"
typedef float4 _ZN9cuda_side19scanline_accum_typeE;
# 109 "cuda_side.cu"
typedef float3 _ZN9cuda_side10color_typeE;
# 64 "/usr/include/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_ { long double __l; int __i[3];};
# 326 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
typedef _ZNSt15iterator_traitsIPK6uchar3E15difference_typeE _ZZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPK6uchar3St16ostream_iteratorIS3_cSt11char_traitsIcEEEET0_T_SB_SA_E9_Distance_20894; typedef _ZNSt15iterator_traitsIPK4int4E15difference_typeE _ZZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPK4int4St16ostream_iteratorIS3_cSt11char_traitsIcEEEET0_T_SB_SA_E9_Distance_21504;
void *memcpy(void*, const void*, size_t); void *memset(void*, int, size_t);
# 138 "/usr/local/cuda/include/common_functions.h"
extern __attribute__((__externally_visible__)) __attribute__((visibility("default"))) void *_Znwm(_ZSt6size_t);

extern __attribute__((__externally_visible__)) __attribute__((visibility("default"))) void _ZdlPv(void *);
# 640 "/usr/local/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaThreadExit(void);
# 664 "/usr/local/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaThreadSynchronize(void);
# 887 "/usr/local/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaGetLastError(void);
# 942 "/usr/local/cuda/include/cuda_runtime_api.h"
extern const char *cudaGetErrorString(cudaError_t);
# 1715 "/usr/local/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaConfigureCall(dim3, dim3, size_t, cudaStream_t);
# 1933 "/usr/local/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc(void **, size_t);
# 2001 "/usr/local/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaMallocPitch(void **, size_t *, size_t, size_t);
# 2067 "/usr/local/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaFree(void *);
# 2087 "/usr/local/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaFreeHost(void *);
# 2168 "/usr/local/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaHostAlloc(void **, size_t, unsigned);
# 2267 "/usr/local/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaHostGetDevicePointer(void **, void *, unsigned);
# 2748 "/usr/local/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy(void *, const void *, size_t, enum cudaMemcpyKind);
# 2925 "/usr/local/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2D(void *, size_t, const void *, size_t, size_t, size_t, enum cudaMemcpyKind);
# 3084 "/usr/local/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyToSymbol(const char *, const void *, size_t, size_t, enum cudaMemcpyKind);
# 3119 "/usr/local/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyFromSymbol(void *, const char *, size_t, size_t, enum cudaMemcpyKind);
# 3161 "/usr/local/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyAsync(void *, const void *, size_t, enum cudaMemcpyKind, cudaStream_t);
# 3531 "/usr/local/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaMemset(void *, int, size_t);
# 4274 "/usr/local/cuda/include/cuda_runtime_api.h"
extern struct cudaChannelFormatDesc cudaCreateChannelDesc(int, int, int, int, enum cudaChannelFormatKind);
# 4372 "/usr/local/cuda/include/cuda_runtime_api.h"
extern cudaError_t cudaBindTexture2D(size_t *, const struct textureReference *, const void *, const struct cudaChannelFormatDesc *, size_t, size_t, size_t);
# 70 "/usr/local/cuda/include/common_functions.h"
extern void *memset(void *, int, size_t);
# 282 "/usr/include/string.h" 3
extern __attribute__((__pure__)) size_t strcspn(const char *, const char *);
# 102 "/usr/local/cuda/include/common_functions.h"
extern int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 101 "/usr/local/cuda/include/common_functions.h"
extern int printf(const char *__restrict__, ...);
# 662 "/usr/include/stdio.h" 3
extern int fputs(const char *__restrict__, FILE *__restrict__);
# 117 "/usr/local/cuda/include/common_functions.h"
extern __attribute__((__noreturn__)) void __assert_fail(const char *, const char *, unsigned, const char *);
# 190 "/usr/local/cuda/include/math_functions.h"
extern unsigned umin(unsigned, unsigned);
# 1070 "/usr/local/cuda/include/math_functions.h"
extern __attribute__((__const__)) float truncf(float);
# 1860 "/usr/local/cuda/include/math_functions.h"
extern __attribute__((__const__)) float copysignf(float, float);
# 2199 "/usr/local/cuda/include/math_functions.h"
extern float modff(float, float *);
# 38 "/usr/include/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbitf */ __inline__ __attribute__((__const__)) int __signbitf(float);
# 50 "/usr/include/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbit */ __inline__ __attribute__((__const__)) int __signbit(double);
# 62 "/usr/include/bits/mathinline.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: __signbitl */ __inline__ __attribute__((__const__)) int __signbitl(long double);
extern int setjmp();
extern void __exception_caught();
# 532 "cuPrintf.cu"
static int _Z16outputPrintfDataPcS_(char *, char *);
# 634 "cuPrintf.cu"
static int _Z15doPrintfDisplayiiPcS_S_S_(int, int, char *, char *, char *, char *);
# 688 "cuPrintf.cu"
extern cudaError_t cudaPrintfInit(size_t);
# 301 "/usr/local/cuda/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolI19cuPrintfRestrictionE9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolI19cuPrintfRestrictionE9cudaErrorRKT_PKvmm14cudaMemcpyKind(const cuPrintfRestriction *, const void *, size_t, size_t, enum cudaMemcpyKind);
# 301 "/usr/local/cuda/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolIPVcE9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolIPVcE9cudaErrorRKT_PKvmm14cudaMemcpyKind(volatile char *const *, const void *, size_t, size_t, enum cudaMemcpyKind);
# 301 "/usr/local/cuda/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolIiE9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolIiE9cudaErrorRKT_PKvmm14cudaMemcpyKind(const int *, const void *, size_t, size_t, enum cudaMemcpyKind);
# 721 "cuPrintf.cu"
extern void cudaPrintfEnd(void);
# 747 "cuPrintf.cu"
extern cudaError_t cudaPrintfDisplay(void *, char);
# 355 "/usr/local/cuda/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z20cudaMemcpyFromSymbolIPVcE9cudaErrorPvRKT_mm14cudaMemcpyKind */ __inline__ cudaError_t _Z20cudaMemcpyFromSymbolIPVcE9cudaErrorPvRKT_mm14cudaMemcpyKind(void *, volatile char *const *, size_t, size_t, enum cudaMemcpyKind);
# 34 "cuda_side.cu"
extern void Echo(void);
# 115 "cuda_side.cu"
extern void _Z6Ensure9cudaErrori(cudaError_t, int);
# 129 "cuda_side.cu"
extern void CUDASetup(unsigned, unsigned, char, char, char, char, struct _ZSt6vectorI6float3SaIS0_EE *, struct _ZSt6vectorI5uint4SaIS0_EE *);
# 301 "/usr/local/cuda/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolI6float2E9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolI6float2E9cudaErrorRKT_PKvmm14cudaMemcpyKind(const float2 *, const void *, size_t, size_t, enum cudaMemcpyKind);
# 301 "/usr/local/cuda/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolIfE9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolIfE9cudaErrorRKT_PKvmm14cudaMemcpyKind(const float *, const void *, size_t, size_t, enum cudaMemcpyKind);
# 252 "/usr/local/cuda/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z10cudaMallocI6uchar3E9cudaErrorPPT_m */ __inline__ cudaError_t _Z10cudaMallocI6uchar3E9cudaErrorPPT_m(_ZN9cuda_side10pixel_typeE **, size_t);
# 232 "/usr/local/cuda/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z13cudaHostAllocI6uchar3E9cudaErrorPPT_mj */ __inline__ cudaError_t _Z13cudaHostAllocI6uchar3E9cudaErrorPPT_mj(_ZN9cuda_side10pixel_typeE **, size_t, unsigned);
# 242 "/usr/local/cuda/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z24cudaHostGetDevicePointerI6uchar3E9cudaErrorPPT_Pvj */ __inline__ cudaError_t _Z24cudaHostGetDevicePointerI6uchar3E9cudaErrorPPT_Pvj(_ZN9cuda_side10pixel_typeE **, void *, unsigned);
# 271 "/usr/local/cuda/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z15cudaMallocPitchI4int4E9cudaErrorPPT_Pmmm */ __inline__ cudaError_t _Z15cudaMallocPitchI4int4E9cudaErrorPPT_Pmmm(_ZN9cuda_side16partial_sum_typeE **, size_t *, size_t, size_t);
# 252 "/usr/local/cuda/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z10cudaMallocI6float3E9cudaErrorPPT_m */ __inline__ cudaError_t _Z10cudaMallocI6float3E9cudaErrorPPT_m(vertex_type **, size_t);
extern void *memset();
# 227 "cuda_side.cu"
extern void CUDATeardown(void);
# 354 "cuda_side.cu"
extern void CUDAUpdate(unsigned char *);
# 301 "/usr/local/cuda/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolI6float4E9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolI6float4E9cudaErrorRKT_PKvmm14cudaMemcpyKind(const float4 *, const void *, size_t, size_t, enum cudaMemcpyKind);
# 355 "/usr/local/cuda/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z20cudaMemcpyFromSymbolI6float4E9cudaErrorPvRKT_mm14cudaMemcpyKind */ __inline__ cudaError_t _Z20cudaMemcpyFromSymbolI6float4E9cudaErrorPvRKT_mm14cudaMemcpyKind(void *, const float4 *, size_t, size_t, enum cudaMemcpyKind);
# 616 "cuda_side.cu"
extern void CUDATryConfiguration(const struct _ZSt6vectorI6real44SaIS0_EE *, struct _ZSt6vectorIdSaIdEE *);
# 301 "/usr/local/cuda/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolIA16_6real44E9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolIA16_6real44E9cudaErrorRKT_PKvmm14cudaMemcpyKind(const transform_type (*)[16], const void *, size_t, size_t, enum cudaMemcpyKind);
# 301 "/usr/local/cuda/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolIA256_fE9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolIA256_fE9cudaErrorRKT_PKvmm14cudaMemcpyKind(const float (*)[256], const void *, size_t, size_t, enum cudaMemcpyKind);
# 355 "/usr/local/cuda/include/cuda_runtime.h"
extern  __attribute__((__weak__)) /* COMDAT group: _Z20cudaMemcpyFromSymbolIA256_fE9cudaErrorPvRKT_mm14cudaMemcpyKind */ __inline__ cudaError_t _Z20cudaMemcpyFromSymbolIA256_fE9cudaErrorPvRKT_mm14cudaMemcpyKind(void *, const float (*)[256], size_t, size_t, enum cudaMemcpyKind);
# 760 "cuda_side.cu"
extern void CUDADump(struct _ZSo *);
# 753 "cuda_side.cu"
extern  __attribute__((__weak__)) /* COMDAT group: _Z19DownloadToStdVectorI6uchar3ESt6vectorIT_SaIS2_EEPKS2_NS4_9size_typeE */ void _Z19DownloadToStdVectorI6uchar3ESt6vectorIT_SaIS2_EEPKS2_NS4_9size_typeE(struct _ZSt6vectorI6uchar3SaIS0_EE *, const _ZN9cuda_side10pixel_typeE *, _ZNSt6vectorI6uchar3SaIS0_EE9size_typeE);
# 744 "cuda_side.cu"
extern  __attribute__((__weak__)) /* COMDAT group: _Z28PrintStdVectorAsRowMajMatrixISo6uchar3EvRT_RKSt6vectorIT0_SaIS4_EEjj */ void _Z28PrintStdVectorAsRowMajMatrixISo6uchar3EvRT_RKSt6vectorIT0_SaIS4_EEjj(struct _ZSo *, const struct _ZSt6vectorI6uchar3SaIS0_EE *, unsigned, unsigned);
# 753 "cuda_side.cu"
extern  __attribute__((__weak__)) /* COMDAT group: _Z19DownloadToStdVectorI4int4ESt6vectorIT_SaIS2_EEPKS2_NS4_9size_typeE */ void _Z19DownloadToStdVectorI4int4ESt6vectorIT_SaIS2_EEPKS2_NS4_9size_typeE(struct _ZSt6vectorI4int4SaIS0_EE *, const _ZN9cuda_side16partial_sum_typeE *, _ZNSt6vectorI4int4SaIS0_EE9size_typeE);
# 744 "cuda_side.cu"
extern  __attribute__((__weak__)) /* COMDAT group: _Z28PrintStdVectorAsRowMajMatrixISo4int4EvRT_RKSt6vectorIT0_SaIS4_EEjj */ void _Z28PrintStdVectorAsRowMajMatrixISo4int4EvRT_RKSt6vectorIT0_SaIS4_EEjj(struct _ZSo *, const struct _ZSt6vectorI4int4SaIS0_EE *, unsigned, unsigned);
extern __attribute__((__noreturn__)) void __rethrow();
# 63 "vectorOP.h"
extern  __attribute__((__weak__)) /* COMDAT group: _ZrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_R6float3 */ struct _ZSi *_ZrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_R6float3(struct _ZSi *, float3 *);
extern void __suppress_optim_on_vars_in_try();
# 62 "vectorOP.h"
extern  __attribute__((__weak__)) /* COMDAT group: _ZrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_R5uint4 */ struct _ZSi *_ZrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_R5uint4(struct _ZSi *, uint4 *);
# 61 "vectorOP.h"
extern  __attribute__((__weak__)) /* COMDAT group: _ZlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_RK6uchar3 */ struct _ZSo *_ZlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_RK6uchar3(struct _ZSo *, const uchar3 *);



extern  __attribute__((__weak__)) /* COMDAT group: _ZlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_RK4int4 */ struct _ZSo *_ZlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_RK4int4(struct _ZSo *, const int4 *);
extern int __cudaLaunch();
extern int __cudaSetupArgSimple();
# 76 "/usr/local/cuda/include/cuda_texture_types.h"
extern  __attribute__((__weak__)) /* COMDAT group: _ZN7textureI4int4Li2EL19cudaTextureReadMode0EEC1Ei21cudaTextureFilterMode22cudaTextureAddressMode */ __inline__ void _ZN7textureI4int4Li2EL19cudaTextureReadMode0EEC1Ei21cudaTextureFilterMode22cudaTextureAddressMode(struct _Z7textureI4int4Li2EL19cudaTextureReadMode0EE *const, int, enum cudaTextureFilterMode, enum cudaTextureAddressMode);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN7textureI4int4Li2EL19cudaTextureReadMode0EEC2Ei21cudaTextureFilterMode22cudaTextureAddressMode */ __inline__ void _ZN7textureI4int4Li2EL19cudaTextureReadMode0EEC2Ei21cudaTextureFilterMode22cudaTextureAddressMode(struct _Z7textureI4int4Li2EL19cudaTextureReadMode0EE *const, int, enum cudaTextureFilterMode, enum cudaTextureAddressMode);
# 324 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPK6uchar3St16ostream_iteratorIS3_cSt11char_traitsIcEEEET0_T_SB_SA_ */ __inline__ __attribute__((visibility("default"))) void _ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPK6uchar3St16ostream_iteratorIS3_cSt11char_traitsIcEEEET0_T_SB_SA_(struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *, const _ZN9cuda_side10pixel_typeE *, const _ZN9cuda_side10pixel_typeE *, struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *);
# 324 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPK4int4St16ostream_iteratorIS3_cSt11char_traitsIcEEEET0_T_SB_SA_ */ __inline__ __attribute__((visibility("default"))) void _ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPK4int4St16ostream_iteratorIS3_cSt11char_traitsIcEEEET0_T_SB_SA_(struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *, const _ZN9cuda_side16partial_sum_typeE *, const _ZN9cuda_side16partial_sum_typeE *, struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *);
# 183 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/locale_classes.h" 3
extern __attribute__((visibility("default"))) void _ZNSt6localeD1Ev(struct _ZSt6locale *const);
# 780 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
extern __attribute__((visibility("default"))) void _ZNSt8ios_baseD1Ev(struct _ZSt8ios_base *const);
extern __attribute__((visibility("default"))) void _ZNSt8ios_baseD2Ev(struct _ZSt8ios_base *const);

extern __attribute__((visibility("default"))) void _ZNSt8ios_baseC1Ev(struct _ZSt8ios_base *const);
extern __attribute__((visibility("default"))) void _ZNSt8ios_baseC2Ev(struct _ZSt8ios_base *const);
# 539 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ios_base.h" 3
extern __attribute__((visibility("default"))) void _ZNSt8ios_base4InitC1Ev(struct _ZNSt8ios_base4InitE *const);
extern __attribute__((visibility("default"))) void _ZNSt8ios_base4InitD1Ev(struct _ZNSt8ios_base4InitE *const);
# 195 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/streambuf" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev(struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEED0Ev(struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev(struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const);
# 140 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/basic_ios.h" 3
extern __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const, _ZNSt8ios_base7iostateE);
# 274 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/basic_ios.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEED1Ev(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEED0Ev(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const);
# 452 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/basic_ios.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEEC1Ev(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const);
# 464 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/basic_ios.h" 3
extern __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E(struct _ZSt9basic_iosIcSt11char_traitsIcEE *const, struct _ZSt15basic_streambufIcSt11char_traitsIcEE *);
# 187 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ostream" 3
extern __attribute__((visibility("default"))) _ZNSo14__ostream_typeE *_ZNSolsEi(struct _ZSo *const, int);
# 101 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/istream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSiD2Ev(struct _ZSi *const, const long *const *);
extern __inline__ __attribute__((visibility("default"))) void _ZNSiD0Ev(struct _ZSi *const);
extern __inline__ __attribute__((visibility("default"))) void _ZTv0_n24_NSiD0Ev(struct _ZSi *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSiD1Ev(struct _ZSi *const);
extern __inline__ __attribute__((visibility("default"))) void _ZTv0_n24_NSiD1Ev(struct _ZSi *const);
# 627 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/istream" 3
extern __attribute__((visibility("default"))) _ZNSi14__istream_typeE *_ZNSi6ignoreEli(struct _ZSi *const, _ZSt10streamsize, _ZNSi8int_typeE);
# 610 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/istream" 3
extern __attribute__((visibility("default"))) _ZNSi14__istream_typeE *_ZNSi10_M_extractIjEERSiRT_(struct _ZSi *const, unsigned *);
# 610 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/istream" 3
extern __attribute__((visibility("default"))) _ZNSi14__istream_typeE *_ZNSi10_M_extractIfEERSiRT_(struct _ZSi *const, float *);
# 86 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/x86_64-unknown-linux-gnu/bits/basic_file.h" 3
extern __attribute__((visibility("default"))) void _ZNSt12__basic_fileIcED1Ev(struct _ZSt12__basic_fileIcE *const);
# 210 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
extern __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEEC1Ev(struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const);





extern __inline__ __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEED1Ev(struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEED0Ev(struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev(struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const);
# 267 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
extern __attribute__((visibility("default"))) _ZNSt13basic_filebufIcSt11char_traitsIcEE14__filebuf_typeE *_ZNSt13basic_filebufIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode(struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const, const char *, _ZNSt8ios_base8openmodeE);
# 294 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
extern __attribute__((visibility("default"))) _ZNSt13basic_filebufIcSt11char_traitsIcEE14__filebuf_typeE *_ZNSt13basic_filebufIcSt11char_traitsIcEE5closeEv(struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const);
# 460 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC2EPKcSt13_Ios_Openmode(struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const, const long *const *, const char *, _ZNSt8ios_base8openmodeE);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode(struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const, const char *, _ZNSt8ios_base8openmodeE);
# 491 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev(struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const, const long *const *);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEED0Ev(struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZTv0_n24_NSt14basic_ifstreamIcSt11char_traitsIcEED0Ev(struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const);
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev(struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const);
extern __attribute__((visibility("default"))) void _ZTv0_n24_NSt14basic_ifstreamIcSt11char_traitsIcEED1Ev(struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const);
# 104 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI6float3EC1Ev */ __inline__ void _ZNSaI6float3EC1Ev(struct _ZSaI6float3E *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI6float3EC2Ev */ __inline__ void _ZNSaI6float3EC2Ev(struct _ZSaI6float3E *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI6float3EC1ERKS0_ */ __inline__ void _ZNSaI6float3EC1ERKS0_(struct _ZSaI6float3E *const, const struct _ZSaI6float3E *);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI6float3EC2ERKS0_ */ __inline__ void _ZNSaI6float3EC2ERKS0_(struct _ZSaI6float3E *const, const struct _ZSaI6float3E *);




extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI6float3ED1Ev */ __inline__ void _ZNSaI6float3ED1Ev(struct _ZSaI6float3E *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI6float3ED2Ev */ __inline__ void _ZNSaI6float3ED2Ev(struct _ZSaI6float3E *const);
# 125 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6float3SaIS0_EEC1Ev */ __inline__ void _ZNSt12_Vector_baseI6float3SaIS0_EEC1Ev(struct _ZSt12_Vector_baseI6float3SaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6float3SaIS0_EEC2Ev */ __inline__ void _ZNSt12_Vector_baseI6float3SaIS0_EEC2Ev(struct _ZSt12_Vector_baseI6float3SaIS0_EE *const);
# 135 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6float3SaIS0_EEC1EmRKS1_ */ __inline__ void _ZNSt12_Vector_baseI6float3SaIS0_EEC1EmRKS1_(struct _ZSt12_Vector_baseI6float3SaIS0_EE *const, _ZSt6size_t, const _ZNSt12_Vector_baseI6float3SaIS0_EE14allocator_typeE *);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6float3SaIS0_EEC2EmRKS1_ */ __inline__ void _ZNSt12_Vector_baseI6float3SaIS0_EEC2EmRKS1_(struct _ZSt12_Vector_baseI6float3SaIS0_EE *const, _ZSt6size_t, const _ZNSt12_Vector_baseI6float3SaIS0_EE14allocator_typeE *);
# 160 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6float3SaIS0_EED1Ev */ __inline__ void _ZNSt12_Vector_baseI6float3SaIS0_EED1Ev(struct _ZSt12_Vector_baseI6float3SaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6float3SaIS0_EED2Ev */ __inline__ void _ZNSt12_Vector_baseI6float3SaIS0_EED2Ev(struct _ZSt12_Vector_baseI6float3SaIS0_EE *const);
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6float3SaIS0_EE12_Vector_implD1Ev */ __inline__ void _ZNSt12_Vector_baseI6float3SaIS0_EE12_Vector_implD1Ev(struct _ZNSt12_Vector_baseI6float3SaIS0_EE12_Vector_implE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6float3SaIS0_EE12_Vector_implD2Ev */ __inline__ void _ZNSt12_Vector_baseI6float3SaIS0_EE12_Vector_implD2Ev(struct _ZNSt12_Vector_baseI6float3SaIS0_EE12_Vector_implE *const);
# 246 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EEC1Ev */ __inline__ void _ZNSt6vectorI6float3SaIS0_EEC1Ev(struct _ZSt6vectorI6float3SaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EEC2Ev */ __inline__ void _ZNSt6vectorI6float3SaIS0_EEC2Ev(struct _ZSt6vectorI6float3SaIS0_EE *const);
# 292 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EEC1EmRKS0_RKS1_ */ __inline__ void _ZNSt6vectorI6float3SaIS0_EEC1EmRKS0_RKS1_(struct _ZSt6vectorI6float3SaIS0_EE *const, _ZNSt6vectorI6float3SaIS0_EE9size_typeE, const _ZNSt6vectorI6float3SaIS0_EE10value_typeE *, const _ZNSt6vectorI6float3SaIS0_EE14allocator_typeE *);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EEC2EmRKS0_RKS1_ */ __inline__ void _ZNSt6vectorI6float3SaIS0_EEC2EmRKS0_RKS1_(struct _ZSt6vectorI6float3SaIS0_EE *const, _ZNSt6vectorI6float3SaIS0_EE9size_typeE, const _ZNSt6vectorI6float3SaIS0_EE10value_typeE *, const _ZNSt6vectorI6float3SaIS0_EE14allocator_typeE *);
# 402 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EED1Ev */ __inline__ void _ZNSt6vectorI6float3SaIS0_EED1Ev(struct _ZSt6vectorI6float3SaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EED2Ev */ __inline__ void _ZNSt6vectorI6float3SaIS0_EED2Ev(struct _ZSt6vectorI6float3SaIS0_EE *const);
# 162 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EEaSERKS2_ */ struct _ZSt6vectorI6float3SaIS0_EE *_ZNSt6vectorI6float3SaIS0_EEaSERKS2_(struct _ZSt6vectorI6float3SaIS0_EE *const, const struct _ZSt6vectorI6float3SaIS0_EE *);
# 643 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNKSt6vectorI6float3SaIS0_EE4sizeEv */ __inline__ _ZNSt6vectorI6float3SaIS0_EE9size_typeE _ZNKSt6vectorI6float3SaIS0_EE4sizeEv(const struct _ZSt6vectorI6float3SaIS0_EE *const);
# 768 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EEixEm */ __inline__ _ZNSt6vectorI6float3SaIS0_EE9referenceE _ZNSt6vectorI6float3SaIS0_EEixEm(struct _ZSt6vectorI6float3SaIS0_EE *const, _ZNSt6vectorI6float3SaIS0_EE9size_typeE);
# 837 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EE5frontEv */ __inline__ _ZNSt6vectorI6float3SaIS0_EE9referenceE _ZNSt6vectorI6float3SaIS0_EE5frontEv(struct _ZSt6vectorI6float3SaIS0_EE *const);
# 317 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_ */ void _ZNSt6vectorI6float3SaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_(struct _ZSt6vectorI6float3SaIS0_EE *const, _ZNSt6vectorI6float3SaIS0_EE8iteratorE, const _ZNSt6vectorI6float3SaIS0_EE10value_typeE *);
# 1124 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS0_S2_EEEEPS0_mT_SA_ */ __inline__ _ZNSt6vectorI6float3SaIS0_EE7pointerE _ZNSt6vectorI6float3SaIS0_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS0_S2_EEEEPS0_mT_SA_(struct _ZSt6vectorI6float3SaIS0_EE *const, _ZNSt6vectorI6float3SaIS0_EE9size_typeE, struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE, struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE);
# 64 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC1Ev */ __inline__ void _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC1Ev(struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC2Ev */ __inline__ void _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC2Ev(struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *const);


extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC1ERSi */ __inline__ void _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC1ERSi(struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *const, _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElE12istream_typeE *);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC2ERSi */ __inline__ void _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC2ERSi(struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *const, _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElE12istream_typeE *);
# 104 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI5uint4EC1Ev */ __inline__ void _ZNSaI5uint4EC1Ev(struct _ZSaI5uint4E *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI5uint4EC2Ev */ __inline__ void _ZNSaI5uint4EC2Ev(struct _ZSaI5uint4E *const);
# 112 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI5uint4ED1Ev */ __inline__ void _ZNSaI5uint4ED1Ev(struct _ZSaI5uint4E *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI5uint4ED2Ev */ __inline__ void _ZNSaI5uint4ED2Ev(struct _ZSaI5uint4E *const);
# 125 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI5uint4SaIS0_EEC1Ev */ __inline__ void _ZNSt12_Vector_baseI5uint4SaIS0_EEC1Ev(struct _ZSt12_Vector_baseI5uint4SaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI5uint4SaIS0_EEC2Ev */ __inline__ void _ZNSt12_Vector_baseI5uint4SaIS0_EEC2Ev(struct _ZSt12_Vector_baseI5uint4SaIS0_EE *const);
# 160 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI5uint4SaIS0_EED1Ev */ __inline__ void _ZNSt12_Vector_baseI5uint4SaIS0_EED1Ev(struct _ZSt12_Vector_baseI5uint4SaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI5uint4SaIS0_EED2Ev */ __inline__ void _ZNSt12_Vector_baseI5uint4SaIS0_EED2Ev(struct _ZSt12_Vector_baseI5uint4SaIS0_EE *const);
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI5uint4SaIS0_EE12_Vector_implD1Ev */ __inline__ void _ZNSt12_Vector_baseI5uint4SaIS0_EE12_Vector_implD1Ev(struct _ZNSt12_Vector_baseI5uint4SaIS0_EE12_Vector_implE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI5uint4SaIS0_EE12_Vector_implD2Ev */ __inline__ void _ZNSt12_Vector_baseI5uint4SaIS0_EE12_Vector_implD2Ev(struct _ZNSt12_Vector_baseI5uint4SaIS0_EE12_Vector_implE *const);
# 246 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI5uint4SaIS0_EEC1Ev */ __inline__ void _ZNSt6vectorI5uint4SaIS0_EEC1Ev(struct _ZSt6vectorI5uint4SaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI5uint4SaIS0_EEC2Ev */ __inline__ void _ZNSt6vectorI5uint4SaIS0_EEC2Ev(struct _ZSt6vectorI5uint4SaIS0_EE *const);
# 402 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI5uint4SaIS0_EED1Ev */ __inline__ void _ZNSt6vectorI5uint4SaIS0_EED1Ev(struct _ZSt6vectorI5uint4SaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI5uint4SaIS0_EED2Ev */ __inline__ void _ZNSt6vectorI5uint4SaIS0_EED2Ev(struct _ZSt6vectorI5uint4SaIS0_EE *const);
# 162 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI5uint4SaIS0_EEaSERKS2_ */ struct _ZSt6vectorI5uint4SaIS0_EE *_ZNSt6vectorI5uint4SaIS0_EEaSERKS2_(struct _ZSt6vectorI5uint4SaIS0_EE *const, const struct _ZSt6vectorI5uint4SaIS0_EE *);
# 643 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNKSt6vectorI5uint4SaIS0_EE4sizeEv */ __inline__ _ZNSt6vectorI5uint4SaIS0_EE9size_typeE _ZNKSt6vectorI5uint4SaIS0_EE4sizeEv(const struct _ZSt6vectorI5uint4SaIS0_EE *const);
# 768 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI5uint4SaIS0_EEixEm */ __inline__ _ZNSt6vectorI5uint4SaIS0_EE9referenceE _ZNSt6vectorI5uint4SaIS0_EEixEm(struct _ZSt6vectorI5uint4SaIS0_EE *const, _ZNSt6vectorI5uint4SaIS0_EE9size_typeE);
# 317 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI5uint4SaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_ */ void _ZNSt6vectorI5uint4SaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_(struct _ZSt6vectorI5uint4SaIS0_EE *const, _ZNSt6vectorI5uint4SaIS0_EE8iteratorE, const _ZNSt6vectorI5uint4SaIS0_EE10value_typeE *);
# 1124 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI5uint4SaIS0_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS0_S2_EEEEPS0_mT_SA_ */ __inline__ _ZNSt6vectorI5uint4SaIS0_EE7pointerE _ZNSt6vectorI5uint4SaIS0_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS0_S2_EEEEPS0_mT_SA_(struct _ZSt6vectorI5uint4SaIS0_EE *const, _ZNSt6vectorI5uint4SaIS0_EE9size_typeE, struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE, struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE);
# 64 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC1Ev */ __inline__ void _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC1Ev(struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC2Ev */ __inline__ void _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC2Ev(struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *const);


extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC1ERSi */ __inline__ void _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC1ERSi(struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *const, _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElE12istream_typeE *);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC2ERSi */ __inline__ void _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC2ERSi(struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *const, _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElE12istream_typeE *);
# 643 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNKSt6vectorI6real44SaIS0_EE4sizeEv */ __inline__ _ZNSt6vectorI6real44SaIS0_EE9size_typeE _ZNKSt6vectorI6real44SaIS0_EE4sizeEv(const struct _ZSt6vectorI6real44SaIS0_EE *const);
# 845 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNKSt6vectorI6real44SaIS0_EE5frontEv */ __inline__ _ZNSt6vectorI6real44SaIS0_EE15const_referenceE _ZNKSt6vectorI6real44SaIS0_EE5frontEv(const struct _ZSt6vectorI6real44SaIS0_EE *const);
# 768 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorIdSaIdEEixEm */ __inline__ _ZNSt6vectorIdSaIdEE9referenceE _ZNSt6vectorIdSaIdEEixEm(struct _ZSt6vectorIdSaIdEE *const, _ZNSt6vectorIdSaIdEE9size_typeE);
# 106 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI6uchar3EC1ERKS0_ */ __inline__ void _ZNSaI6uchar3EC1ERKS0_(struct _ZSaI6uchar3E *const, const struct _ZSaI6uchar3E *);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI6uchar3EC2ERKS0_ */ __inline__ void _ZNSaI6uchar3EC2ERKS0_(struct _ZSaI6uchar3E *const, const struct _ZSaI6uchar3E *);




extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI6uchar3ED1Ev */ __inline__ void _ZNSaI6uchar3ED1Ev(struct _ZSaI6uchar3E *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI6uchar3ED2Ev */ __inline__ void _ZNSaI6uchar3ED2Ev(struct _ZSaI6uchar3E *const);
# 135 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6uchar3SaIS0_EEC1EmRKS1_ */ __inline__ void _ZNSt12_Vector_baseI6uchar3SaIS0_EEC1EmRKS1_(struct _ZSt12_Vector_baseI6uchar3SaIS0_EE *const, _ZSt6size_t, const _ZNSt12_Vector_baseI6uchar3SaIS0_EE14allocator_typeE *);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6uchar3SaIS0_EEC2EmRKS1_ */ __inline__ void _ZNSt12_Vector_baseI6uchar3SaIS0_EEC2EmRKS1_(struct _ZSt12_Vector_baseI6uchar3SaIS0_EE *const, _ZSt6size_t, const _ZNSt12_Vector_baseI6uchar3SaIS0_EE14allocator_typeE *);
# 160 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6uchar3SaIS0_EED1Ev */ __inline__ void _ZNSt12_Vector_baseI6uchar3SaIS0_EED1Ev(struct _ZSt12_Vector_baseI6uchar3SaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6uchar3SaIS0_EED2Ev */ __inline__ void _ZNSt12_Vector_baseI6uchar3SaIS0_EED2Ev(struct _ZSt12_Vector_baseI6uchar3SaIS0_EE *const);
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6uchar3SaIS0_EE12_Vector_implD1Ev */ __inline__ void _ZNSt12_Vector_baseI6uchar3SaIS0_EE12_Vector_implD1Ev(struct _ZNSt12_Vector_baseI6uchar3SaIS0_EE12_Vector_implE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6uchar3SaIS0_EE12_Vector_implD2Ev */ __inline__ void _ZNSt12_Vector_baseI6uchar3SaIS0_EE12_Vector_implD2Ev(struct _ZNSt12_Vector_baseI6uchar3SaIS0_EE12_Vector_implE *const);
# 402 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6uchar3SaIS0_EED1Ev */ __inline__ void _ZNSt6vectorI6uchar3SaIS0_EED1Ev(struct _ZSt6vectorI6uchar3SaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6uchar3SaIS0_EED2Ev */ __inline__ void _ZNSt6vectorI6uchar3SaIS0_EED2Ev(struct _ZSt6vectorI6uchar3SaIS0_EE *const);
# 106 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI4int4EC1ERKS0_ */ __inline__ void _ZNSaI4int4EC1ERKS0_(struct _ZSaI4int4E *const, const struct _ZSaI4int4E *);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI4int4EC2ERKS0_ */ __inline__ void _ZNSaI4int4EC2ERKS0_(struct _ZSaI4int4E *const, const struct _ZSaI4int4E *);




extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI4int4ED1Ev */ __inline__ void _ZNSaI4int4ED1Ev(struct _ZSaI4int4E *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSaI4int4ED2Ev */ __inline__ void _ZNSaI4int4ED2Ev(struct _ZSaI4int4E *const);
# 135 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI4int4SaIS0_EEC1EmRKS1_ */ __inline__ void _ZNSt12_Vector_baseI4int4SaIS0_EEC1EmRKS1_(struct _ZSt12_Vector_baseI4int4SaIS0_EE *const, _ZSt6size_t, const _ZNSt12_Vector_baseI4int4SaIS0_EE14allocator_typeE *);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI4int4SaIS0_EEC2EmRKS1_ */ __inline__ void _ZNSt12_Vector_baseI4int4SaIS0_EEC2EmRKS1_(struct _ZSt12_Vector_baseI4int4SaIS0_EE *const, _ZSt6size_t, const _ZNSt12_Vector_baseI4int4SaIS0_EE14allocator_typeE *);
# 160 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI4int4SaIS0_EED1Ev */ __inline__ void _ZNSt12_Vector_baseI4int4SaIS0_EED1Ev(struct _ZSt12_Vector_baseI4int4SaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI4int4SaIS0_EED2Ev */ __inline__ void _ZNSt12_Vector_baseI4int4SaIS0_EED2Ev(struct _ZSt12_Vector_baseI4int4SaIS0_EE *const);
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI4int4SaIS0_EE12_Vector_implD1Ev */ __inline__ void _ZNSt12_Vector_baseI4int4SaIS0_EE12_Vector_implD1Ev(struct _ZNSt12_Vector_baseI4int4SaIS0_EE12_Vector_implE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI4int4SaIS0_EE12_Vector_implD2Ev */ __inline__ void _ZNSt12_Vector_baseI4int4SaIS0_EE12_Vector_implD2Ev(struct _ZNSt12_Vector_baseI4int4SaIS0_EE12_Vector_implE *const);
# 402 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI4int4SaIS0_EED1Ev */ __inline__ void _ZNSt6vectorI4int4SaIS0_EED1Ev(struct _ZSt6vectorI4int4SaIS0_EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI4int4SaIS0_EED2Ev */ __inline__ void _ZNSt6vectorI4int4SaIS0_EED2Ev(struct _ZSt6vectorI4int4SaIS0_EE *const);
# 296 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt11__copy_moveILb0ELb0ESt18input_iterator_tagE8__copy_mISt16istream_iteratorI6float3cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS4_SaIS4_EEEEET0_T_SE_SD_ */ __inline__ struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE _ZNSt11__copy_moveILb0ELb0ESt18input_iterator_tagE8__copy_mISt16istream_iteratorI6float3cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS4_SaIS4_EEEEET0_T_SE_SD_(struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *, struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *, struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE);
# 296 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZNSt11__copy_moveILb0ELb0ESt18input_iterator_tagE8__copy_mISt16istream_iteratorI5uint4cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS4_SaIS4_EEEEET0_T_SE_SD_ */ __inline__ struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE _ZNSt11__copy_moveILb0ELb0ESt18input_iterator_tagE8__copy_mISt16istream_iteratorI5uint4cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS4_SaIS4_EEEEET0_T_SE_SD_(struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *, struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *, struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE);
# 69 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/new_allocator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6float3EC1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6float3EC1Ev(struct _ZN9__gnu_cxx13new_allocatorI6float3EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6float3EC2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6float3EC2Ev(struct _ZN9__gnu_cxx13new_allocatorI6float3EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6float3EC1ERKS2_ */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6float3EC1ERKS2_(struct _ZN9__gnu_cxx13new_allocatorI6float3EE *const, const struct _ZN9__gnu_cxx13new_allocatorI6float3EE *);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6float3EC2ERKS2_ */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6float3EC2ERKS2_(struct _ZN9__gnu_cxx13new_allocatorI6float3EE *const, const struct _ZN9__gnu_cxx13new_allocatorI6float3EE *);



extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6float3ED1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6float3ED1Ev(struct _ZN9__gnu_cxx13new_allocatorI6float3EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6float3ED2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6float3ED2Ev(struct _ZN9__gnu_cxx13new_allocatorI6float3EE *const);
# 69 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/new_allocator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI5uint4EC1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI5uint4EC1Ev(struct _ZN9__gnu_cxx13new_allocatorI5uint4EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI5uint4EC2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI5uint4EC2Ev(struct _ZN9__gnu_cxx13new_allocatorI5uint4EE *const);





extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI5uint4ED1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI5uint4ED1Ev(struct _ZN9__gnu_cxx13new_allocatorI5uint4EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI5uint4ED2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI5uint4ED2Ev(struct _ZN9__gnu_cxx13new_allocatorI5uint4EE *const);
# 69 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/new_allocator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6uchar3EC1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6uchar3EC1Ev(struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6uchar3EC2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6uchar3EC2Ev(struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6uchar3EC1ERKS2_ */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6uchar3EC1ERKS2_(struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *const, const struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6uchar3EC2ERKS2_ */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6uchar3EC2ERKS2_(struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *const, const struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *);



extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6uchar3ED1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6uchar3ED1Ev(struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6uchar3ED2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6uchar3ED2Ev(struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *const);
# 69 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/new_allocator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI4int4EC1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI4int4EC1Ev(struct _ZN9__gnu_cxx13new_allocatorI4int4EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI4int4EC2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI4int4EC2Ev(struct _ZN9__gnu_cxx13new_allocatorI4int4EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI4int4EC1ERKS2_ */ __inline__ void _ZN9__gnu_cxx13new_allocatorI4int4EC1ERKS2_(struct _ZN9__gnu_cxx13new_allocatorI4int4EE *const, const struct _ZN9__gnu_cxx13new_allocatorI4int4EE *);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI4int4EC2ERKS2_ */ __inline__ void _ZN9__gnu_cxx13new_allocatorI4int4EC2ERKS2_(struct _ZN9__gnu_cxx13new_allocatorI4int4EE *const, const struct _ZN9__gnu_cxx13new_allocatorI4int4EE *);



extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI4int4ED1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI4int4ED1Ev(struct _ZN9__gnu_cxx13new_allocatorI4int4EE *const);
extern  __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI4int4ED2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI4int4ED2Ev(struct _ZN9__gnu_cxx13new_allocatorI4int4EE *const);
# 53 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/functexcept.h" 3
extern __attribute__((__noreturn__)) __attribute__((visibility("default"))) void _ZSt17__throw_bad_allocv(void);
# 73 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/functexcept.h" 3
extern __attribute__((__noreturn__)) __attribute__((visibility("default"))) void _ZSt20__throw_length_errorPKc(const char *);
# 76 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/ostream_insert.h" 3
extern struct _ZSo *_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l(struct _ZSo *, const char *, _ZSt10streamsize);
# 481 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt13back_inserterISt6vectorI6float3SaIS1_EEESt20back_insert_iteratorIT_ERS5_ */ __inline__ struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE _ZSt13back_inserterISt6vectorI6float3SaIS1_EEESt20back_insert_iteratorIT_ERS5_(struct _ZSt6vectorI6float3SaIS0_EE *);
# 444 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt4copyISt16istream_iteratorI6float3cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET0_T_SB_SA_ */ __inline__ struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE _ZSt4copyISt16istream_iteratorI6float3cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET0_T_SB_SA_(struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *, struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *, struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE);
# 481 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt13back_inserterISt6vectorI5uint4SaIS1_EEESt20back_insert_iteratorIT_ERS5_ */ __inline__ struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE _ZSt13back_inserterISt6vectorI5uint4SaIS1_EEESt20back_insert_iteratorIT_ERS5_(struct _ZSt6vectorI5uint4SaIS0_EE *);
# 444 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt4copyISt16istream_iteratorI5uint4cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET0_T_SB_SA_ */ __inline__ struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE _ZSt4copyISt16istream_iteratorI5uint4cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET0_T_SB_SA_(struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *, struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *, struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE);
# 187 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt3minImERKT_S2_S2_ */ __inline__ const size_t *_ZSt3minImERKT_S2_S2_(const size_t *, const size_t *);
# 220 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_uninitialized.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt20uninitialized_fill_nIP6float3mS0_EvT_T0_RKT1_ */ __inline__ void _ZSt20uninitialized_fill_nIP6float3mS0_EvT_T0_RKT1_(vertex_type *, unsigned long, const _ZNSt6vectorI6float3SaIS0_EE10value_typeE *);
# 729 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt10__fill_n_aIP6float3mS0_EN9__gnu_cxx11__enable_ifIXntsr3std11__is_scalarIT1_EE7__valueET_E6__typeES5_T0_RKS4_ */ __inline__ _ZN9__gnu_cxx11__enable_ifILb1EP6float3E6__typeE _ZSt10__fill_n_aIP6float3mS0_EN9__gnu_cxx11__enable_ifIXntsr3std11__is_scalarIT1_EE7__valueET_E6__typeES5_T0_RKS4_(vertex_type *, unsigned long, const _ZNSt6vectorI6float3SaIS0_EE10value_typeE *);
# 124 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_construct.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt8_DestroyIP6float3EvT_S2_ */ __inline__ void _ZSt8_DestroyIP6float3EvT_S2_(vertex_type *, vertex_type *);
# 109 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_uninitialized.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS2_SaIS2_EEEEPS2_ET0_T_SB_SA_ */ __inline__ vertex_type *_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS2_SaIS2_EEEEPS2_ET0_T_SB_SA_(struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE, struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE, vertex_type *);
# 373 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0EPK6float3PS0_ET1_T0_S5_S4_ */ __inline__ vertex_type *_ZSt13__copy_move_aILb0EPK6float3PS0_ET1_T0_S5_S4_(const vertex_type *, const vertex_type *, vertex_type *);
# 124 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_construct.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS2_SaIS2_EEEEEvT_S8_ */ __inline__ void _ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS2_SaIS2_EEEEEvT_S8_(struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE, struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE);
# 373 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0EP6float3S1_ET1_T0_S3_S2_ */ __inline__ vertex_type *_ZSt13__copy_move_aILb0EP6float3S1_ET1_T0_S3_S2_(vertex_type *, vertex_type *, vertex_type *);
# 109 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_uninitialized.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt18uninitialized_copyIP6float3S1_ET0_T_S3_S2_ */ __inline__ vertex_type *_ZSt18uninitialized_copyIP6float3S1_ET0_T_S3_S2_(vertex_type *, vertex_type *, vertex_type *);
# 373 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0ESt16istream_iteratorI6float3cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET1_T0_SB_SA_ */ __inline__ struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE _ZSt13__copy_move_aILb0ESt16istream_iteratorI6float3cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET1_T0_SB_SA_(struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *, struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *, struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE);
# 568 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt22__copy_move_backward_aILb0EP6float3S1_ET1_T0_S3_S2_ */ __inline__ vertex_type *_ZSt22__copy_move_backward_aILb0EP6float3S1_ET1_T0_S3_S2_(vertex_type *, vertex_type *, vertex_type *);
# 210 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt3maxImERKT_S2_S2_ */ __inline__ const _ZNSt6vectorI6float3SaIS0_EE9size_typeE *_ZSt3maxImERKT_S2_S2_(const _ZNSt6vectorI6float3SaIS0_EE9size_typeE *, const _ZNSt6vectorI6float3SaIS0_EE9size_typeE *);
# 124 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_construct.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt8_DestroyIP5uint4EvT_S2_ */ __inline__ void _ZSt8_DestroyIP5uint4EvT_S2_(tri_type *, tri_type *);
# 109 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_uninitialized.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS2_SaIS2_EEEEPS2_ET0_T_SB_SA_ */ __inline__ tri_type *_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS2_SaIS2_EEEEPS2_ET0_T_SB_SA_(struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE, struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE, tri_type *);
# 373 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0EPK5uint4PS0_ET1_T0_S5_S4_ */ __inline__ tri_type *_ZSt13__copy_move_aILb0EPK5uint4PS0_ET1_T0_S5_S4_(const tri_type *, const tri_type *, tri_type *);
# 124 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_construct.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS2_SaIS2_EEEEEvT_S8_ */ __inline__ void _ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS2_SaIS2_EEEEEvT_S8_(struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE, struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE);
# 373 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0EP5uint4S1_ET1_T0_S3_S2_ */ __inline__ tri_type *_ZSt13__copy_move_aILb0EP5uint4S1_ET1_T0_S3_S2_(tri_type *, tri_type *, tri_type *);
# 109 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_uninitialized.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt18uninitialized_copyIP5uint4S1_ET0_T_S3_S2_ */ __inline__ tri_type *_ZSt18uninitialized_copyIP5uint4S1_ET0_T_S3_S2_(tri_type *, tri_type *, tri_type *);
# 373 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0ESt16istream_iteratorI5uint4cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET1_T0_SB_SA_ */ __inline__ struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE _ZSt13__copy_move_aILb0ESt16istream_iteratorI5uint4cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET1_T0_SB_SA_(struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *, struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *, struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE);
# 568 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt22__copy_move_backward_aILb0EP5uint4S1_ET1_T0_S3_S2_ */ __inline__ tri_type *_ZSt22__copy_move_backward_aILb0EP5uint4S1_ET1_T0_S3_S2_(tri_type *, tri_type *, tri_type *);
# 124 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_construct.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt8_DestroyIP6uchar3EvT_S2_ */ __inline__ void _ZSt8_DestroyIP6uchar3EvT_S2_(_ZN9cuda_side10pixel_typeE *, _ZN9cuda_side10pixel_typeE *);
# 220 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_uninitialized.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt20uninitialized_fill_nIP6uchar3mS0_EvT_T0_RKT1_ */ __inline__ void _ZSt20uninitialized_fill_nIP6uchar3mS0_EvT_T0_RKT1_(_ZN9cuda_side10pixel_typeE *, unsigned long, const _ZNSt6vectorI6uchar3SaIS0_EE10value_typeE *);
# 729 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt10__fill_n_aIP6uchar3mS0_EN9__gnu_cxx11__enable_ifIXntsr3std11__is_scalarIT1_EE7__valueET_E6__typeES5_T0_RKS4_ */ __inline__ _ZN9__gnu_cxx11__enable_ifILb1EP6uchar3E6__typeE _ZSt10__fill_n_aIP6uchar3mS0_EN9__gnu_cxx11__enable_ifIXntsr3std11__is_scalarIT1_EE7__valueET_E6__typeES5_T0_RKS4_(_ZN9cuda_side10pixel_typeE *, unsigned long, const _ZNSt6vectorI6uchar3SaIS0_EE10value_typeE *);
# 373 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0EPK6uchar3St16ostream_iteratorIS0_cSt11char_traitsIcEEET1_T0_S8_S7_ */ __inline__ void _ZSt13__copy_move_aILb0EPK6uchar3St16ostream_iteratorIS0_cSt11char_traitsIcEEET1_T0_S8_S7_(struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *, const _ZN9cuda_side10pixel_typeE *, const _ZN9cuda_side10pixel_typeE *, struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *);
# 124 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_construct.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt8_DestroyIP4int4EvT_S2_ */ __inline__ void _ZSt8_DestroyIP4int4EvT_S2_(_ZN9cuda_side16partial_sum_typeE *, _ZN9cuda_side16partial_sum_typeE *);
# 220 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_uninitialized.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt20uninitialized_fill_nIP4int4mS0_EvT_T0_RKT1_ */ __inline__ void _ZSt20uninitialized_fill_nIP4int4mS0_EvT_T0_RKT1_(_ZN9cuda_side16partial_sum_typeE *, unsigned long, const _ZNSt6vectorI4int4SaIS0_EE10value_typeE *);
# 729 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt10__fill_n_aIP4int4mS0_EN9__gnu_cxx11__enable_ifIXntsr3std11__is_scalarIT1_EE7__valueET_E6__typeES5_T0_RKS4_ */ __inline__ _ZN9__gnu_cxx11__enable_ifILb1EP4int4E6__typeE _ZSt10__fill_n_aIP4int4mS0_EN9__gnu_cxx11__enable_ifIXntsr3std11__is_scalarIT1_EE7__valueET_E6__typeES5_T0_RKS4_(_ZN9cuda_side16partial_sum_typeE *, unsigned long, const _ZNSt6vectorI4int4SaIS0_EE10value_typeE *);
# 373 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
extern  __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0EPK4int4St16ostream_iteratorIS0_cSt11char_traitsIcEEET1_T0_S8_S7_ */ __inline__ void _ZSt13__copy_move_aILb0EPK4int4St16ostream_iteratorIS0_cSt11char_traitsIcEEET1_T0_S8_S7_(struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *, const _ZN9cuda_side16partial_sum_typeE *, const _ZN9cuda_side16partial_sum_typeE *, struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *);
extern int __cudaRegisterBinary();
extern int __cudaRegisterEntry();
extern int __cudaRegisterVariable();
extern int __cudaRegisterGlobalTexture();
static void __sti___17_cuda_side_cpp1_ii_51e07f2f(void) __attribute__((__constructor__));
extern int __cxa_atexit();
# 146 "/usr/include/stdio.h" 3
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
extern struct __C8 *__curr_eh_stack_entry;
extern unsigned short __eh_curr_region;
extern int __catch_clause_number;
# 514 "cuPrintf.cu"
static FILE *printf_fp;

static char *printfbuf_start;
static char *printfbuf_device;
static int printfbuf_len;
static const char __T20[129];
static const char __T21[182];
static const char __T22[127];
static const char __T23[180];
extern  __attribute__((__weak__)) /* COMDAT group: _ZTSSt9exception */ const char _ZTSSt9exception[13] __attribute__((visibility("default")));
extern  __attribute__((__weak__)) /* COMDAT group: _ZTSSt9bad_alloc */ const char _ZTSSt9bad_alloc[13] __attribute__((visibility("default")));
# 75 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/iostream" 3
static struct _ZNSt8ios_base4InitE _ZSt8__ioinit __attribute__((visibility("default"))) = {0};
# 54 "cuda_side.cu"
extern _ZN9cuda_side10pixel_typeE *_ZN9cuda_side6devImgE;
extern _ZN9cuda_side10pixel_typeE *_ZN9cuda_side7hostImgE;
extern _ZN9cuda_side10pixel_typeE *_ZN9cuda_side3imgE;
extern unsigned _ZN9cuda_side13img_sz_in_bytE;
extern unsigned _ZN9cuda_side4rowsE;
extern unsigned _ZN9cuda_side4colsE;
extern unsigned _ZN9cuda_side15img_pitch_in_pxE;





float4 _ZN9cuda_side13norm_u_pr_t_kE = {0};




extern _ZN9cuda_side16partial_sum_typeE *_ZN9cuda_side16line_partial_sumE;
__loc_sc__(__text__,,) struct _Z7textureI4int4Li2EL19cudaTextureReadMode0EE __text_var(_ZN9cuda_side13l_p_s_tex_refE,cuda_side::l_p_s_tex_ref);


extern size_t _ZN9cuda_side11l_p_s_pitchE;


extern unsigned _ZN9cuda_side9num_vertsE;
extern vertex_type *_ZN9cuda_side20world_space_verticesE;
extern vertex_type *_ZN9cuda_side20transformed_verticesE;




float _ZN9cuda_side25opt_obj_gpu_acc_memsetterE[256];
# 107 "cuda_side.cu"
extern unsigned _ZN9cuda_side9tri_countE;
extern vertex_type *_ZN9cuda_side9tri_vertsE;

extern _ZN9cuda_side10color_typeE *_ZN9cuda_side10tri_colorsE;
extern void *__dso_handle __attribute__((visibility("hidden")));
# 516 "cuPrintf.cu"
static char *printfbuf_start = ((char *)0LL);
static char *printfbuf_device = ((char *)0LL);
static int printfbuf_len = 0;
static const char __T20[129] = "std::vector<T, std::allocator<T>> DownloadToStdVector(const T *, std::vector<T, std::allocator<T>>::size_type) [with T = uchar3]" "";
static const char __T21[182] = "void PrintStdVectorAsRowMajMatrix(S &, const std::vector<T, std::allocator<T>> &, unsigned int, unsigned int) [with S = std::bas" "ic_ostream<char, std::char_traits<char>>, T = uchar3]";
static const char __T22[127] = "std::vector<T, std::allocator<T>> DownloadToStdVector(const T *, std::vector<T, std::allocator<T>>::size_type) [with T = int4]";
static const char __T23[180] = "void PrintStdVectorAsRowMajMatrix(S &, const std::vector<T, std::allocator<T>> &, unsigned int, unsigned int) [with S = std::bas" "ic_ostream<char, std::char_traits<char>>, T = int4]";
 __attribute__((__weak__)) /* COMDAT group: _ZTSSt9exception */ const char _ZTSSt9exception[13] __attribute__((visibility("default"))) = "St9exception";
 __attribute__((__weak__)) /* COMDAT group: _ZTSSt9bad_alloc */ const char _ZTSSt9bad_alloc[13] __attribute__((visibility("default"))) = "St9bad_alloc";
# 54 "cuda_side.cu"
_ZN9cuda_side10pixel_typeE *_ZN9cuda_side6devImgE = ((_ZN9cuda_side10pixel_typeE *)0LL);
_ZN9cuda_side10pixel_typeE *_ZN9cuda_side7hostImgE = ((_ZN9cuda_side10pixel_typeE *)0LL);
_ZN9cuda_side10pixel_typeE *_ZN9cuda_side3imgE = ((_ZN9cuda_side10pixel_typeE *)0LL);
unsigned _ZN9cuda_side13img_sz_in_bytE = 0U;
unsigned _ZN9cuda_side4rowsE = 0U;
unsigned _ZN9cuda_side4colsE = 0U;
unsigned _ZN9cuda_side15img_pitch_in_pxE = 0U;
# 71 "cuda_side.cu"
_ZN9cuda_side16partial_sum_typeE *_ZN9cuda_side16line_partial_sumE = ((_ZN9cuda_side16partial_sum_typeE *)0LL);



size_t _ZN9cuda_side11l_p_s_pitchE = 0UL;


unsigned _ZN9cuda_side9num_vertsE = 0U;
vertex_type *_ZN9cuda_side20world_space_verticesE = ((vertex_type *)0LL);
vertex_type *_ZN9cuda_side20transformed_verticesE = ((vertex_type *)0LL);
# 107 "cuda_side.cu"
unsigned _ZN9cuda_side9tri_countE = 0U;
vertex_type *_ZN9cuda_side9tri_vertsE = ((vertex_type *)0LL);

_ZN9cuda_side10color_typeE *_ZN9cuda_side10tri_colorsE = ((_ZN9cuda_side10color_typeE *)0LL);
# 38 "/usr/include/bits/mathinline.h" 3
 __attribute__((__weak__)) /* COMDAT group: __signbitf */ __inline__ __attribute__((__const__)) int __signbitf( float __x)
{




 int __cuda_local_var_6675_7_non_const___m;
__asm("pmovmskb %1, %0" : "=r" (__cuda_local_var_6675_7_non_const___m) : "x" (__x));
return __cuda_local_var_6675_7_non_const___m & 8;

}

 __attribute__((__weak__)) /* COMDAT group: __signbit */ __inline__ __attribute__((__const__)) int __signbit( double __x)
{




 int __cuda_local_var_6687_7_non_const___m;
__asm("pmovmskb %1, %0" : "=r" (__cuda_local_var_6687_7_non_const___m) : "x" (__x));
return __cuda_local_var_6687_7_non_const___m & 128;

}

 __attribute__((__weak__)) /* COMDAT group: __signbitl */ __inline__ __attribute__((__const__)) int __signbitl( long double __x)
{
 union _ZZ10__signbitlEUt_ __cuda_local_var_6695_56_non_const___u;
# 64 "/usr/include/bits/mathinline.h" 3
(__cuda_local_var_6695_56_non_const___u.__l) = __x;
return (int)(((((__cuda_local_var_6695_56_non_const___u.__i))[2]) & 32768) != 0);
}
# 532 "cuPrintf.cu"
static int _Z16outputPrintfDataPcS_( char *fmt,  char *data)
{
# 540 "cuPrintf.cu"
 char *__cuda_local_var_45420_11_non_const_p;
# 535 "cuPrintf.cu"
fmt += 8UL;




__cuda_local_var_45420_11_non_const_p = (__builtin_strchr(((const char *)fmt), 37));
while (__cuda_local_var_45420_11_non_const_p != ((char *)0LL))
{
# 549 "cuPrintf.cu"
 char *__cuda_local_var_45429_15_non_const_format;
# 559 "cuPrintf.cu"
 int __cuda_local_var_45439_13_non_const_arglen;
# 568 "cuPrintf.cu"
 char __cuda_local_var_45448_14_non_const_specifier;
 char __cuda_local_var_45449_14_non_const_c;
# 544 "cuPrintf.cu"
(*__cuda_local_var_45420_11_non_const_p) = ((char)0);
fputs(((const char *)fmt), printf_fp);
(*__cuda_local_var_45420_11_non_const_p) = ((char)37);


__cuda_local_var_45429_15_non_const_format = (__cuda_local_var_45420_11_non_const_p++);
__cuda_local_var_45420_11_non_const_p += (strcspn(((const char *)__cuda_local_var_45420_11_non_const_p), ((const char *)"%cdiouxXeEfgGaAnps")));
if (((int)(*__cuda_local_var_45420_11_non_const_p)) == 0)
{
fmt = __cuda_local_var_45429_15_non_const_format;
goto __T25;
}



__cuda_local_var_45439_13_non_const_arglen = (*((int *)data));
if (__cuda_local_var_45439_13_non_const_arglen > 256)
{
fputs(((const char *)"Corrupt printf buffer data - aborting\n"), printf_fp);
return 0;
}

data += 8UL;

__cuda_local_var_45448_14_non_const_specifier = (*(__cuda_local_var_45420_11_non_const_p++));
__cuda_local_var_45449_14_non_const_c = (*__cuda_local_var_45420_11_non_const_p);
(*__cuda_local_var_45420_11_non_const_p) = ((char)0);
switch ((int)__cuda_local_var_45448_14_non_const_specifier)
{

case 99:
case 100:
case 105:
case 111:
case 117:
case 120:
case 88:
case 112:
fprintf(printf_fp, ((const char *)__cuda_local_var_45429_15_non_const_format), (*((int *)data)));
goto __T26;


case 101:
case 69:
case 102:
case 103:
case 71:
case 97:
case 65:
if (__cuda_local_var_45439_13_non_const_arglen == 4) {
fprintf(printf_fp, ((const char *)__cuda_local_var_45429_15_non_const_format), ((double)(*((float *)data)))); } else  {

fprintf(printf_fp, ((const char *)__cuda_local_var_45429_15_non_const_format), (*((double *)data))); }
goto __T26;


case 115:
fprintf(printf_fp, ((const char *)__cuda_local_var_45429_15_non_const_format), ((char *)data));
goto __T26;


case 37:
fprintf(printf_fp, ((const char *)"%%"));
goto __T26;


default:
fprintf(printf_fp, ((const char *)"%s"), __cuda_local_var_45429_15_non_const_format);
goto __T26;
} __T26:;
data += 8UL;
(*__cuda_local_var_45420_11_non_const_p) = __cuda_local_var_45449_14_non_const_c;
fmt = __cuda_local_var_45420_11_non_const_p;
__cuda_local_var_45420_11_non_const_p = (__builtin_strchr(((const char *)fmt), 37));
} __T25:;


fputs(((const char *)fmt), printf_fp);
return 1;
}
# 634 "cuPrintf.cu"
static int _Z15doPrintfDisplayiiPcS_S_S_( int headings,  int clear,  char *bufstart,  char *bufend,  char *bufptr,  char *endptr)
{


 int __cuda_local_var_45509_9_non_const_printf_count;
 char __cuda_local_var_45510_10_non_const_printfbuf_local[257];
# 638 "cuPrintf.cu"
__cuda_local_var_45509_9_non_const_printf_count = 0;

((__cuda_local_var_45510_10_non_const_printfbuf_local)[256]) = ((char)0);

while (bufptr != endptr)
{
# 653 "cuPrintf.cu"
 cuPrintfHeader *__cuda_local_var_45524_25_non_const_hdr;
# 645 "cuPrintf.cu"
if (bufptr == bufend) {
bufptr = bufstart; }


cudaMemcpy(((void *)(__cuda_local_var_45510_10_non_const_printfbuf_local)), ((const void *)bufptr), 256UL, cudaMemcpyDeviceToHost);



__cuda_local_var_45524_25_non_const_hdr = ((cuPrintfHeader *)(__cuda_local_var_45510_10_non_const_printfbuf_local));
if ((((int)(__cuda_local_var_45524_25_non_const_hdr->magic)) != 51217) || (((int)(__cuda_local_var_45524_25_non_const_hdr->fmtoffset)) >= 256))
{

goto __T27;
}


if (headings) {
fprintf(printf_fp, ((const char *)"[%d, %d]: "), ((int)(__cuda_local_var_45524_25_non_const_hdr->blockid)), ((int)(__cuda_local_var_45524_25_non_const_hdr->threadid))); }
if (((int)(__cuda_local_var_45524_25_non_const_hdr->fmtoffset)) == 0) {
fprintf(printf_fp, ((const char *)"printf buffer overflow\n")); } else  {
if (!(_Z16outputPrintfDataPcS_(((__cuda_local_var_45510_10_non_const_printfbuf_local) + (__cuda_local_var_45524_25_non_const_hdr->fmtoffset)), ((__cuda_local_var_45510_10_non_const_printfbuf_local) + 8UL)))) {
goto __T27; } }
__cuda_local_var_45509_9_non_const_printf_count++;


if (clear) {
cudaMemset(((void *)bufptr), 0, 256UL); }


bufptr += 256;
} __T27:;

return __cuda_local_var_45509_9_non_const_printf_count;
}
# 688 "cuPrintf.cu"
cudaError_t cudaPrintfInit( size_t bufferLen)
{  char *__T28;
# 703 "cuPrintf.cu"
 cuPrintfRestriction __cuda_local_var_45566_29_non_const_restrict;
# 691 "cuPrintf.cu"
bufferLen = ((bufferLen < 256UL) ? 256UL : bufferLen);
if ((bufferLen % 256UL) > 0UL) {
bufferLen += (256UL - (bufferLen % 256UL)); }
printfbuf_len = ((int)bufferLen);


if (((int)(cudaMalloc(((void **)(&printfbuf_device)), ((size_t)printfbuf_len)))) != 0) {
return cudaErrorInitializationError; }
cudaMemset(((void *)printfbuf_device), 0, ((size_t)printfbuf_len));
printfbuf_start = printfbuf_device;



(__cuda_local_var_45566_29_non_const_restrict.threadid) = ((__cuda_local_var_45566_29_non_const_restrict.blockid) = (-1));
_Z18cudaMemcpyToSymbolI19cuPrintfRestrictionE9cudaErrorRKT_PKvmm14cudaMemcpyKind((((const cuPrintfRestriction *)&restrictRules)), ((const void *)(&__cuda_local_var_45566_29_non_const_restrict)), 8UL, 0UL, cudaMemcpyHostToDevice);


{ __T28 = globalPrintfBuffer; { cudaMemcpyToSymbol(((const char *)__T28), ((const void *)(&printfbuf_device)), 8UL, 0UL, cudaMemcpyHostToDevice); } }
_Z18cudaMemcpyToSymbolIPVcE9cudaErrorRKT_PKvmm14cudaMemcpyKind((((volatile char *const *)&printfBufferPtr)), ((const void *)(&printfbuf_device)), 8UL, 0UL, cudaMemcpyHostToDevice);
_Z18cudaMemcpyToSymbolIiE9cudaErrorRKT_PKvmm14cudaMemcpyKind((((const int *)&printfBufferLength)), ((const void *)(&printfbuf_len)), 4UL, 0UL, cudaMemcpyHostToDevice);

return cudaSuccess;
}
# 301 "/usr/local/cuda/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolI19cuPrintfRestrictionE9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolI19cuPrintfRestrictionE9cudaErrorRKT_PKvmm14cudaMemcpyKind(
const cuPrintfRestriction *symbol, 
const void *src, 
size_t count, 
size_t offset, 
enum cudaMemcpyKind kind)

{
return cudaMemcpyToSymbol(((const char *)symbol), src, count, offset, kind);
}
# 301 "/usr/local/cuda/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolIPVcE9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolIPVcE9cudaErrorRKT_PKvmm14cudaMemcpyKind(
volatile char *const *symbol, 
const void *src, 
size_t count, 
size_t offset, 
enum cudaMemcpyKind kind)

{
return cudaMemcpyToSymbol(((const char *)symbol), src, count, offset, kind);
}
# 301 "/usr/local/cuda/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolIiE9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolIiE9cudaErrorRKT_PKvmm14cudaMemcpyKind(
const int *symbol, 
const void *src, 
size_t count, 
size_t offset, 
enum cudaMemcpyKind kind)

{
return cudaMemcpyToSymbol(((const char *)symbol), src, count, offset, kind);
}
# 721 "cuPrintf.cu"
void cudaPrintfEnd(void)
{
if ((!(printfbuf_start)) || (!(printfbuf_device))) {
return; }

cudaFree(((void *)printfbuf_device));
printfbuf_start = (printfbuf_device = ((char *)0LL)); 
}
# 747 "cuPrintf.cu"
cudaError_t cudaPrintfDisplay( void *outputFP,  char showThreadID)
{
# 754 "cuPrintf.cu"
 char __cuda_local_var_45600_10_non_const_sync_printfs;
 char __cuda_local_var_45601_14_non_const_clearOnPrint;
# 764 "cuPrintf.cu"
 unsigned short __cuda_local_var_45610_20_non_const_magic;
# 749 "cuPrintf.cu"
printf_fp = ((FILE *)((outputFP == ((void *)0LL)) ? ((void *)stdout) : outputFP));




__cuda_local_var_45600_10_non_const_sync_printfs = ((char)1);
__cuda_local_var_45601_14_non_const_clearOnPrint = ((char)0);


if (((!(printfbuf_start)) || (!(printfbuf_device))) || (!(printf_fp))) {
return cudaErrorMissingConfiguration; }
# 765 "cuPrintf.cu"
cudaMemcpy(((void *)(&__cuda_local_var_45610_20_non_const_magic)), ((const void *)printfbuf_device), 2UL, cudaMemcpyDeviceToHost);
# 771 "cuPrintf.cu"
if (((int)__cuda_local_var_45610_20_non_const_magic) == 51216)
{


 int __cuda_local_var_45621_13_non_const_blocklen;
 char *__cuda_local_var_45622_15_non_const_blockptr;
# 773 "cuPrintf.cu"
__cuda_local_var_45600_10_non_const_sync_printfs = ((char)1);
__cuda_local_var_45601_14_non_const_clearOnPrint = ((char)0);
__cuda_local_var_45621_13_non_const_blocklen = 0;
__cuda_local_var_45622_15_non_const_blockptr = printfbuf_device;
while (__cuda_local_var_45622_15_non_const_blockptr < (printfbuf_device + printfbuf_len)) {
{
 cuPrintfHeaderSM10 __cuda_local_var_45625_32_non_const_hdr;
cudaMemcpy(((void *)(&__cuda_local_var_45625_32_non_const_hdr)), ((const void *)__cuda_local_var_45622_15_non_const_blockptr), 16UL, cudaMemcpyDeviceToHost);


if ((__cuda_local_var_45625_32_non_const_hdr.thread_buf_len) != 0U) {
__cuda_local_var_45621_13_non_const_blocklen = ((int)(__cuda_local_var_45625_32_non_const_hdr.thread_buf_len)); }


if (((int)(__cuda_local_var_45625_32_non_const_hdr.magic)) != 51216)
{
if (__cuda_local_var_45621_13_non_const_blocklen == 0)
{
fprintf(printf_fp, ((const char *)"No printf headers found at all!\n"));
goto __T29;
}
__cuda_local_var_45622_15_non_const_blockptr += __cuda_local_var_45621_13_non_const_blocklen;
goto __T210;
}


if ((__cuda_local_var_45625_32_non_const_hdr.offset) > 0U)
{

if (__cuda_local_var_45600_10_non_const_sync_printfs) {
_Z15doPrintfDisplayiiPcS_S_S_(((int)showThreadID), ((int)__cuda_local_var_45601_14_non_const_clearOnPrint), (__cuda_local_var_45622_15_non_const_blockptr + 256), (__cuda_local_var_45622_15_non_const_blockptr + (__cuda_local_var_45625_32_non_const_hdr.thread_buf_len)), ((__cuda_local_var_45622_15_non_const_blockptr + (__cuda_local_var_45625_32_non_const_hdr.offset)) + 256), (__cuda_local_var_45622_15_non_const_blockptr + (__cuda_local_var_45625_32_non_const_hdr.thread_buf_len))); }
_Z15doPrintfDisplayiiPcS_S_S_(((int)showThreadID), ((int)__cuda_local_var_45601_14_non_const_clearOnPrint), (__cuda_local_var_45622_15_non_const_blockptr + 256), (__cuda_local_var_45622_15_non_const_blockptr + (__cuda_local_var_45625_32_non_const_hdr.thread_buf_len)), (__cuda_local_var_45622_15_non_const_blockptr + 256), ((__cuda_local_var_45622_15_non_const_blockptr + (__cuda_local_var_45625_32_non_const_hdr.offset)) + 256));
}


__cuda_local_var_45622_15_non_const_blockptr += (__cuda_local_var_45625_32_non_const_hdr.thread_buf_len);
} __T210:; } __T29:;
} else  {

if (((int)__cuda_local_var_45610_20_non_const_magic) == 51217)
{

 char *__cuda_local_var_45661_15_non_const_printfbuf_end;



 char *__cuda_local_var_45665_15_non_const_bufptr;
 char *__cuda_local_var_45666_15_non_const_endptr;
# 815 "cuPrintf.cu"
__cuda_local_var_45661_15_non_const_printfbuf_end = ((char *)0LL);
_Z20cudaMemcpyFromSymbolIPVcE9cudaErrorPvRKT_mm14cudaMemcpyKind(((void *)(&__cuda_local_var_45661_15_non_const_printfbuf_end)), (((volatile char *const *)&printfBufferPtr)), 8UL, 0UL, cudaMemcpyDeviceToHost);


__cuda_local_var_45665_15_non_const_bufptr = (((printfbuf_start - printfbuf_device) % ((long)printfbuf_len)) + printfbuf_device);
__cuda_local_var_45666_15_non_const_endptr = (((__cuda_local_var_45661_15_non_const_printfbuf_end - printfbuf_device) % ((long)printfbuf_len)) + printfbuf_device);



if (__cuda_local_var_45600_10_non_const_sync_printfs) {
_Z15doPrintfDisplayiiPcS_S_S_(((int)showThreadID), ((int)__cuda_local_var_45601_14_non_const_clearOnPrint), printfbuf_device, (printfbuf_device + printfbuf_len), __cuda_local_var_45666_15_non_const_endptr, (printfbuf_device + printfbuf_len)); }
_Z15doPrintfDisplayiiPcS_S_S_(((int)showThreadID), ((int)__cuda_local_var_45601_14_non_const_clearOnPrint), printfbuf_device, (printfbuf_device + printfbuf_len), __cuda_local_var_45665_15_non_const_bufptr, __cuda_local_var_45666_15_non_const_endptr);

printfbuf_start = __cuda_local_var_45661_15_non_const_printfbuf_end;
} else  {

; } }



if (__cuda_local_var_45600_10_non_const_sync_printfs) {
cudaMemset(((void *)printfbuf_device), 0, ((size_t)printfbuf_len)); }

return cudaSuccess;
}
# 355 "/usr/local/cuda/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z20cudaMemcpyFromSymbolIPVcE9cudaErrorPvRKT_mm14cudaMemcpyKind */ __inline__ cudaError_t _Z20cudaMemcpyFromSymbolIPVcE9cudaErrorPvRKT_mm14cudaMemcpyKind(
void *dst, 
volatile char *const *symbol, 
size_t count, 
size_t offset, 
enum cudaMemcpyKind kind)

{
return cudaMemcpyFromSymbol(dst, ((const char *)symbol), count, offset, kind);
}
# 34 "cuda_side.cu"
void Echo(void) {


 dim3 __cuda_local_var_45708_7_non_const_dimGrid;
 dim3 __cuda_local_var_45709_7_non_const_dimBlock;
# 35 "cuda_side.cu"
printf(((const char *)"ECHO[::\n"));
cudaPrintfInit(1048576UL);
{ (__cuda_local_var_45708_7_non_const_dimGrid.x) = 2U; (__cuda_local_var_45708_7_non_const_dimGrid.y) = 2U; (__cuda_local_var_45708_7_non_const_dimGrid.z) = 1U; }
{ (__cuda_local_var_45709_7_non_const_dimBlock.x) = 2U; (__cuda_local_var_45709_7_non_const_dimBlock.y) = 2U; (__cuda_local_var_45709_7_non_const_dimBlock.z) = 2U; }
(cudaConfigureCall(__cuda_local_var_45708_7_non_const_dimGrid, __cuda_local_var_45709_7_non_const_dimBlock, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z10EchoKernelv());
cudaThreadSynchronize();
cudaPrintfDisplay(((void *)stdout), ((char)1));
cudaPrintfEnd();
cudaThreadExit();
printf(((const char *)"::]ENDECHO\n")); 
}
# 115 "cuda_side.cu"
void _Z6Ensure9cudaErrori( cudaError_t rc,  int line) { static const char __T211[28] = "void Ensure(cudaError, int)";
if (((int)rc) != 0) {
fprintf(stderr, ((const char *)"%d:%s!=cudaSuccess at line %d.\n"), ((int)rc), (cudaGetErrorString(rc)), line);

__assert_fail(((const char *)"0"), ((const char *)"cuda_side.cu"), 119U, __T211);
} 
}
# 129 "cuda_side.cu"
void CUDASetup( unsigned width,  unsigned height,  char copy_to_device,  char page_locked_mem,  char cuda_array,  char indexed,  struct _ZSt6vectorI6float3SaIS0_EE *main_verts,  struct _ZSt6vectorI5uint4SaIS0_EE *main_tris) { static const char __T212[179] = "void CUDASetup(unsigned int, unsigned int, __nv_bool, __nv_bool, __nv_bool, __nv_bool, std::vector<float3, std::allocator<float3" ">> &, std::vector<uint4, std::allocator<uint4>> &)";
 int __T213;
# 166 "cuda_side.cu"
 struct cudaChannelFormatDesc __cuda_local_var_45819_24_non_const_channelDesc;
# 130 "cuda_side.cu"
((copy_to_device) || (page_locked_mem)) ? ((void)0) : (__assert_fail(((const char *)"copy_to_device||page_locked_mem"), ((const char *)"cuda_side.cu"), 130U, __T212));
((!(cuda_array)) || (copy_to_device)) ? ((void)0) : (__assert_fail(((const char *)"!cuda_array||copy_to_device"), ((const char *)"cuda_side.cu"), 131U, __T212));
{
 float2 __cuda_local_var_45786_10_non_const_s;
# 140 "cuda_side.cu"
 float __cuda_local_var_45793_9_non_const_a;
# 133 "cuda_side.cu"
(__cuda_local_var_45786_10_non_const_s.x) = ((0.5F) * ((float)(_ZN9cuda_side4colsE = width))); (__cuda_local_var_45786_10_non_const_s.y) = ((0.5F) * ((float)(_ZN9cuda_side4rowsE = height)));
_ZN9cuda_side15img_pitch_in_pxE = (((_ZN9cuda_side4rowsE + 63U) / 64U) * 64U);
printf(((const char *)"%d %d\n"), _ZN9cuda_side15img_pitch_in_pxE, _ZN9cuda_side4rowsE);
(_ZN9cuda_side15img_pitch_in_pxE >= _ZN9cuda_side4rowsE) ? ((void)0) : (__assert_fail(((const char *)"img_pitch_in_px>=rows"), ((const char *)"cuda_side.cu"), 136U, __T212));
(_ZN9cuda_side15img_pitch_in_pxE < (_ZN9cuda_side4rowsE + 64U)) ? ((void)0) : (__assert_fail(((const char *)"img_pitch_in_px<rows+64"), ((const char *)"cuda_side.cu"), 137U, __T212));
_ZN9cuda_side13img_sz_in_bytE = ((unsigned)(((unsigned long)(_ZN9cuda_side15img_pitch_in_pxE * _ZN9cuda_side4colsE)) * 3UL));
_Z6Ensure9cudaErrori((_Z18cudaMemcpyToSymbolI6float2E9cudaErrorRKT_PKvmm14cudaMemcpyKind((((const float2 *)&_ZN9cuda_side18half_viewport_sizeE)), ((const void *)(&__cuda_local_var_45786_10_non_const_s)), 8UL, 0UL, cudaMemcpyHostToDevice)), 139);
__cuda_local_var_45793_9_non_const_a = ((float)(((double)width) / ((double)height)));
_Z6Ensure9cudaErrori((_Z18cudaMemcpyToSymbolIfE9cudaErrorRKT_PKvmm14cudaMemcpyKind((((const float *)&_ZN9cuda_side15viewport_aspectE)), ((const void *)(&__cuda_local_var_45793_9_non_const_a)), 4UL, 0UL, cudaMemcpyHostToDevice)), 141);
}
if (copy_to_device) {
if (cuda_array) {
__assert_fail(((const char *)"0"), ((const char *)"cuda_side.cu"), 145U, __T212);
} else  {
_Z6Ensure9cudaErrori((_Z10cudaMallocI6uchar3E9cudaErrorPPT_m((&_ZN9cuda_side6devImgE), ((size_t)_ZN9cuda_side13img_sz_in_bytE))), 147);
(_ZN9cuda_side6devImgE) ? ((void)0) : (__assert_fail(((const char *)"devImg"), ((const char *)"cuda_side.cu"), 148U, __T212));
_ZN9cuda_side3imgE = _ZN9cuda_side6devImgE;
}
}
if (page_locked_mem) {
_Z6Ensure9cudaErrori((_Z13cudaHostAllocI6uchar3E9cudaErrorPPT_mj((&_ZN9cuda_side7hostImgE), ((size_t)_ZN9cuda_side13img_sz_in_bytE), ((unsigned)(4 | ((copy_to_device) ? 0 : 2))))), 153);
(_ZN9cuda_side7hostImgE) ? ((void)0) : (__assert_fail(((const char *)"hostImg"), ((const char *)"cuda_side.cu"), 154U, __T212));
if (!(copy_to_device)) {
_Z6Ensure9cudaErrori((_Z24cudaHostGetDevicePointerI6uchar3E9cudaErrorPPT_Pvj((&_ZN9cuda_side3imgE), ((void *)_ZN9cuda_side7hostImgE), 0U)), 156);
}
}


_Z6Ensure9cudaErrori((_Z15cudaMallocPitchI4int4E9cudaErrorPPT_Pmmm((&_ZN9cuda_side16line_partial_sumE), (&_ZN9cuda_side11l_p_s_pitchE), (((unsigned long)_ZN9cuda_side4rowsE) * 16UL), ((size_t)(_ZN9cuda_side4colsE + 1U)))), 161);
(_ZN9cuda_side11l_p_s_pitchE >= (((unsigned long)_ZN9cuda_side4rowsE) * 16UL)) ? ((void)0) : (__assert_fail(((const char *)"l_p_s_pitch>=rows*sizeof(partial_sum_type)"), ((const char *)"cuda_side.cu"), 162U, __T212));
((_ZN9cuda_side11l_p_s_pitchE % 16UL) == 0UL) ? ((void)0) : (__assert_fail(((const char *)"l_p_s_pitch%sizeof(partial_sum_type)==0"), ((const char *)"cuda_side.cu"), 163U, __T212));
_ZN9cuda_side11l_p_s_pitchE /= 16UL;
(_ZN9cuda_side16line_partial_sumE) ? ((void)0) : (__assert_fail(((const char *)"line_partial_sum"), ((const char *)"cuda_side.cu"), 165U, __T212));
__cuda_local_var_45819_24_non_const_channelDesc = ((__T213 = 32) , (cudaCreateChannelDesc(__T213, __T213, __T213, __T213, cudaChannelFormatKindSigned)));
_Z6Ensure9cudaErrori((cudaBindTexture2D(((size_t *)0LL), ((const struct textureReference *)(&__text_var(_ZN9cuda_side13l_p_s_tex_refE,cuda_side::l_p_s_tex_ref).__b_16textureReference)), ((const void *)_ZN9cuda_side16line_partial_sumE), ((const struct cudaChannelFormatDesc *)(&__cuda_local_var_45819_24_non_const_channelDesc)), ((size_t)_ZN9cuda_side4rowsE), ((size_t)(_ZN9cuda_side4colsE + 1U)), (_ZN9cuda_side11l_p_s_pitchE * 16UL))), 167);
(!(indexed)) ? ((void)0) : (__assert_fail(((const char *)"!indexed"), ((const char *)"cuda_side.cu"), 168U, __T212));

{


 struct _ZSt6vectorI6float3SaIS0_EE __cuda_local_var_45826_23_non_const_verts;
 struct _ZSt6vectorI5uint4SaIS0_EE __cuda_local_var_45827_20_non_const_tris;
 struct _ZSt6vectorI6float3SaIS0_EE __cuda_local_var_45828_22_non_const_colors_;
# 173 "cuda_side.cu"
_ZNSt6vectorI6float3SaIS0_EEC1Ev((&__cuda_local_var_45826_23_non_const_verts)); {  struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE __T214;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE __T215;
# 173 "cuda_side.cu"
 _ZSt8ifstream __cuda_local_var_45826_41_non_const_s;
# 173 "cuda_side.cu"
_ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode((&__cuda_local_var_45826_41_non_const_s), ((const char *)"verts.txt"), ((_ZNSt8ios_base8openmodeE)8)); _ZSt4copyISt16istream_iteratorI6float3cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET0_T_SB_SA_(((_ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC1ERSi((&__T214), (((struct _ZSi *)&__cuda_local_var_45826_41_non_const_s)))) , (&__T214)), ((_ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC1Ev((&__T215))) , (&__T215)), (_ZSt13back_inserterISt6vectorI6float3SaIS1_EEESt20back_insert_iteratorIT_ERS5_((&__cuda_local_var_45826_23_non_const_verts)))); _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev((&__cuda_local_var_45826_41_non_const_s)); } ;
_ZNSt6vectorI5uint4SaIS0_EEC1Ev((&__cuda_local_var_45827_20_non_const_tris)); {  struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE __T216;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE __T217;
# 174 "cuda_side.cu"
 _ZSt8ifstream __cuda_local_var_45827_37_non_const_s;
# 174 "cuda_side.cu"
_ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode((&__cuda_local_var_45827_37_non_const_s), ((const char *)"tris.txt"), ((_ZNSt8ios_base8openmodeE)8)); _ZSt4copyISt16istream_iteratorI5uint4cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET0_T_SB_SA_(((_ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC1ERSi((&__T216), (((struct _ZSi *)&__cuda_local_var_45827_37_non_const_s)))) , (&__T216)), ((_ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC1Ev((&__T217))) , (&__T217)), (_ZSt13back_inserterISt6vectorI5uint4SaIS1_EEESt20back_insert_iteratorIT_ERS5_((&__cuda_local_var_45827_20_non_const_tris)))); _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev((&__cuda_local_var_45827_37_non_const_s)); } ;
_ZNSt6vectorI6float3SaIS0_EEC1Ev((&__cuda_local_var_45828_22_non_const_colors_)); {  struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE __T218;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE __T219;
# 175 "cuda_side.cu"
 _ZSt8ifstream __cuda_local_var_45828_42_non_const_s;
# 175 "cuda_side.cu"
_ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode((&__cuda_local_var_45828_42_non_const_s), ((const char *)"colors_.txt"), ((_ZNSt8ios_base8openmodeE)8)); _ZSt4copyISt16istream_iteratorI6float3cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET0_T_SB_SA_(((_ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC1ERSi((&__T218), (((struct _ZSi *)&__cuda_local_var_45828_42_non_const_s)))) , (&__T218)), ((_ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC1Ev((&__T219))) , (&__T219)), (_ZSt13back_inserterISt6vectorI6float3SaIS1_EEESt20back_insert_iteratorIT_ERS5_((&__cuda_local_var_45828_22_non_const_colors_)))); _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev((&__cuda_local_var_45828_42_non_const_s)); } ;

_ZNSt6vectorI6float3SaIS0_EEaSERKS2_(main_verts, (((const struct _ZSt6vectorI6float3SaIS0_EE *)&__cuda_local_var_45826_23_non_const_verts)));
_ZNSt6vectorI5uint4SaIS0_EEaSERKS2_(main_tris, (((const struct _ZSt6vectorI5uint4SaIS0_EE *)&__cuda_local_var_45827_20_non_const_tris)));




_ZN9cuda_side9tri_countE = ((unsigned)(_ZNKSt6vectorI5uint4SaIS0_EE4sizeEv((((const struct _ZSt6vectorI5uint4SaIS0_EE *)&__cuda_local_var_45827_20_non_const_tris)))));
# 193 "cuda_side.cu"
_Z6Ensure9cudaErrori((_Z10cudaMallocI6float3E9cudaErrorPPT_m((&_ZN9cuda_side9tri_vertsE), (((unsigned long)(_ZN9cuda_side9tri_countE * 3U)) * 12UL))), 193);
(_ZN9cuda_side9tri_vertsE) ? ((void)0) : (__assert_fail(((const char *)"tri_verts"), ((const char *)"cuda_side.cu"), 194U, __T212));
;
_Z6Ensure9cudaErrori((_Z10cudaMallocI6float3E9cudaErrorPPT_m((&_ZN9cuda_side10tri_colorsE), (((unsigned long)_ZN9cuda_side9tri_countE) * 12UL))), 196);
(_ZN9cuda_side10tri_colorsE) ? ((void)0) : (__assert_fail(((const char *)"tri_colors"), ((const char *)"cuda_side.cu"), 197U, __T212));


{  _ZNSt6vectorI6float3SaIS0_EE10value_typeE __T220;
 _ZNSt6vectorI6float3SaIS0_EE14allocator_typeE __T221;
 _ZNSt6vectorI6float3SaIS0_EE10value_typeE __T222;
 _ZNSt6vectorI6float3SaIS0_EE14allocator_typeE __T223;
# 201 "cuda_side.cu"
 struct _ZSt6vectorI6float3SaIS0_EE __cuda_local_var_45846_29_non_const_tvb;
 struct _ZSt6vectorI6float3SaIS0_EE __cuda_local_var_45847_28_non_const_coloring;
# 201 "cuda_side.cu"
_ZNSt6vectorI6float3SaIS0_EEC1EmRKS0_RKS1_((&__cuda_local_var_45846_29_non_const_tvb), ((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)(_ZN9cuda_side9tri_countE * 3U)), ((memset(((void *)(&__T220)), 0, 12UL)) , (((const _ZNSt6vectorI6float3SaIS0_EE10value_typeE *)&__T220))), ((_ZNSaI6float3EC1Ev((&__T221))) , (((const _ZNSt6vectorI6float3SaIS0_EE14allocator_typeE *)&__T221)))); _ZNSaI6float3ED1Ev((&__T221));
_ZNSt6vectorI6float3SaIS0_EEC1EmRKS0_RKS1_((&__cuda_local_var_45847_28_non_const_coloring), ((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)_ZN9cuda_side9tri_countE), ((memset(((void *)(&__T222)), 0, 12UL)) , (((const _ZNSt6vectorI6float3SaIS0_EE10value_typeE *)&__T222))), ((_ZNSaI6float3EC1Ev((&__T223))) , (((const _ZNSt6vectorI6float3SaIS0_EE14allocator_typeE *)&__T223)))); _ZNSaI6float3ED1Ev((&__T223)); {


 unsigned i;
# 205 "cuda_side.cu"
i = 0U; for (; (i < _ZN9cuda_side9tri_countE); ++i) {
(((unsigned long)((_ZNSt6vectorI5uint4SaIS0_EEixEm((&__cuda_local_var_45827_20_non_const_tris), ((_ZNSt6vectorI5uint4SaIS0_EE9size_typeE)i)))->w)) < (_ZNKSt6vectorI6float3SaIS0_EE4sizeEv((((const struct _ZSt6vectorI6float3SaIS0_EE *)&__cuda_local_var_45828_22_non_const_colors_))))) ? ((void)0) : (__assert_fail(((const char *)"tris[i].w<colors_.size()"), ((const char *)"cuda_side.cu"), 206U, __T212));

(*(_ZNSt6vectorI6float3SaIS0_EEixEm((&__cuda_local_var_45846_29_non_const_tvb), ((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)((i * 3U) + 0U))))) = (*(_ZNSt6vectorI6float3SaIS0_EEixEm((&__cuda_local_var_45826_23_non_const_verts), ((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)((_ZNSt6vectorI5uint4SaIS0_EEixEm((&__cuda_local_var_45827_20_non_const_tris), ((_ZNSt6vectorI5uint4SaIS0_EE9size_typeE)i)))->x))))); ;
(*(_ZNSt6vectorI6float3SaIS0_EEixEm((&__cuda_local_var_45846_29_non_const_tvb), ((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)((i * 3U) + 1U))))) = (*(_ZNSt6vectorI6float3SaIS0_EEixEm((&__cuda_local_var_45826_23_non_const_verts), ((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)((_ZNSt6vectorI5uint4SaIS0_EEixEm((&__cuda_local_var_45827_20_non_const_tris), ((_ZNSt6vectorI5uint4SaIS0_EE9size_typeE)i)))->y))))); ;
(*(_ZNSt6vectorI6float3SaIS0_EEixEm((&__cuda_local_var_45846_29_non_const_tvb), ((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)((i * 3U) + 2U))))) = (*(_ZNSt6vectorI6float3SaIS0_EEixEm((&__cuda_local_var_45826_23_non_const_verts), ((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)((_ZNSt6vectorI5uint4SaIS0_EEixEm((&__cuda_local_var_45827_20_non_const_tris), ((_ZNSt6vectorI5uint4SaIS0_EE9size_typeE)i)))->z))))); ;

(*(_ZNSt6vectorI6float3SaIS0_EEixEm((&__cuda_local_var_45847_28_non_const_coloring), ((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)i)))) = (*(_ZNSt6vectorI6float3SaIS0_EEixEm((&__cuda_local_var_45828_22_non_const_colors_), ((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)((_ZNSt6vectorI5uint4SaIS0_EEixEm((&__cuda_local_var_45827_20_non_const_tris), ((_ZNSt6vectorI5uint4SaIS0_EE9size_typeE)i)))->w)))));
} } {
 int i;
# 214 "cuda_side.cu"
i = 0; for (; (((unsigned)i) < (_ZN9cuda_side9tri_countE * 3U)); ++i) {
printf(((const char *)"%f %f %f\n"), ((double)((_ZNSt6vectorI6float3SaIS0_EEixEm((&__cuda_local_var_45846_29_non_const_tvb), ((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)i)))->x)), ((double)((_ZNSt6vectorI6float3SaIS0_EEixEm((&__cuda_local_var_45846_29_non_const_tvb), ((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)i)))->y)), ((double)((_ZNSt6vectorI6float3SaIS0_EEixEm((&__cuda_local_var_45846_29_non_const_tvb), ((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)i)))->z)));
} }
_Z6Ensure9cudaErrori((cudaMemcpy(((void *)_ZN9cuda_side9tri_vertsE), ((const void *)(_ZNSt6vectorI6float3SaIS0_EE5frontEv((&__cuda_local_var_45846_29_non_const_tvb)))), (((unsigned long)(_ZN9cuda_side9tri_countE * 3U)) * 12UL), cudaMemcpyHostToDevice)), 217);
_Z6Ensure9cudaErrori((cudaMemcpy(((void *)_ZN9cuda_side10tri_colorsE), ((const void *)(_ZNSt6vectorI6float3SaIS0_EE5frontEv((&__cuda_local_var_45847_28_non_const_coloring)))), (((unsigned long)_ZN9cuda_side9tri_countE) * 12UL), cudaMemcpyHostToDevice)), 218);


;

_ZNSt6vectorI6float3SaIS0_EED1Ev((&__cuda_local_var_45847_28_non_const_coloring)); _ZNSt6vectorI6float3SaIS0_EED1Ev((&__cuda_local_var_45846_29_non_const_tvb)); }
_ZNSt6vectorI6float3SaIS0_EED1Ev((&__cuda_local_var_45828_22_non_const_colors_)); _ZNSt6vectorI5uint4SaIS0_EED1Ev((&__cuda_local_var_45827_20_non_const_tris)); _ZNSt6vectorI6float3SaIS0_EED1Ev((&__cuda_local_var_45826_23_non_const_verts)); } 
}
# 301 "/usr/local/cuda/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolI6float2E9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolI6float2E9cudaErrorRKT_PKvmm14cudaMemcpyKind(
const float2 *symbol, 
const void *src, 
size_t count, 
size_t offset, 
enum cudaMemcpyKind kind)

{
return cudaMemcpyToSymbol(((const char *)symbol), src, count, offset, kind);
}
# 301 "/usr/local/cuda/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolIfE9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolIfE9cudaErrorRKT_PKvmm14cudaMemcpyKind(
const float *symbol, 
const void *src, 
size_t count, 
size_t offset, 
enum cudaMemcpyKind kind)

{
return cudaMemcpyToSymbol(((const char *)symbol), src, count, offset, kind);
}
# 252 "/usr/local/cuda/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z10cudaMallocI6uchar3E9cudaErrorPPT_m */ __inline__ cudaError_t _Z10cudaMallocI6uchar3E9cudaErrorPPT_m(
_ZN9cuda_side10pixel_typeE **devPtr, 
size_t size)

{
return cudaMalloc(((void **)((void *)devPtr)), size);
}
# 232 "/usr/local/cuda/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z13cudaHostAllocI6uchar3E9cudaErrorPPT_mj */ __inline__ cudaError_t _Z13cudaHostAllocI6uchar3E9cudaErrorPPT_mj(
_ZN9cuda_side10pixel_typeE **ptr, 
size_t size, 
unsigned flags)

{
return cudaHostAlloc(((void **)((void *)ptr)), size, flags);
}


 __attribute__((__weak__)) /* COMDAT group: _Z24cudaHostGetDevicePointerI6uchar3E9cudaErrorPPT_Pvj */ __inline__ cudaError_t _Z24cudaHostGetDevicePointerI6uchar3E9cudaErrorPPT_Pvj(
_ZN9cuda_side10pixel_typeE **pDevice, 
void *pHost, 
unsigned flags)

{
return cudaHostGetDevicePointer(((void **)((void *)pDevice)), pHost, flags);
}
# 271 "/usr/local/cuda/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z15cudaMallocPitchI4int4E9cudaErrorPPT_Pmmm */ __inline__ cudaError_t _Z15cudaMallocPitchI4int4E9cudaErrorPPT_Pmmm(
_ZN9cuda_side16partial_sum_typeE **devPtr, 
size_t *pitch, 
size_t width, 
size_t height)

{
return cudaMallocPitch(((void **)((void *)devPtr)), pitch, width, height);
}
# 252 "/usr/local/cuda/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z10cudaMallocI6float3E9cudaErrorPPT_m */ __inline__ cudaError_t _Z10cudaMallocI6float3E9cudaErrorPPT_m(
vertex_type **devPtr, 
size_t size)

{
return cudaMalloc(((void **)((void *)devPtr)), size);
}
# 227 "cuda_side.cu"
void CUDATeardown(void) { static const char __T224[20] = "void CUDATeardown()";
if (_ZN9cuda_side7hostImgE) { _Z6Ensure9cudaErrori((cudaFreeHost(((void *)_ZN9cuda_side7hostImgE))), 228); }
if (_ZN9cuda_side6devImgE) { _Z6Ensure9cudaErrori((cudaFree(((void *)_ZN9cuda_side6devImgE))), 229); }
(_ZN9cuda_side16line_partial_sumE) ? ((void)0) : (__assert_fail(((const char *)"line_partial_sum"), ((const char *)"cuda_side.cu"), 230U, __T224)); _Z6Ensure9cudaErrori((cudaFree(((void *)_ZN9cuda_side16line_partial_sumE))), 230);

(_ZN9cuda_side9tri_vertsE) ? ((void)0) : (__assert_fail(((const char *)"tri_verts"), ((const char *)"cuda_side.cu"), 232U, __T224)); _Z6Ensure9cudaErrori((cudaFree(((void *)_ZN9cuda_side9tri_vertsE))), 232);
(_ZN9cuda_side10tri_colorsE) ? ((void)0) : (__assert_fail(((const char *)"tri_colors"), ((const char *)"cuda_side.cu"), 233U, __T224)); _Z6Ensure9cudaErrori((cudaFree(((void *)_ZN9cuda_side10tri_colorsE))), 233); 

}
# 354 "cuda_side.cu"
void CUDAUpdate( unsigned char *pixels) { static const char __T225[33] = "void CUDAUpdate(unsigned char *)";

;




if (_ZN9cuda_side7hostImgE) {
_Z6Ensure9cudaErrori((cudaMemcpy2D(((void *)_ZN9cuda_side7hostImgE), (((unsigned long)_ZN9cuda_side15img_pitch_in_pxE) * 3UL), ((const void *)pixels), (((unsigned long)_ZN9cuda_side4rowsE) * 3UL), (((unsigned long)_ZN9cuda_side4rowsE) * 3UL), ((size_t)_ZN9cuda_side4colsE), cudaMemcpyHostToHost)), 362); ;
if (_ZN9cuda_side6devImgE) {
_Z6Ensure9cudaErrori((cudaMemcpyAsync(((void *)_ZN9cuda_side6devImgE), ((const void *)_ZN9cuda_side7hostImgE), ((size_t)_ZN9cuda_side13img_sz_in_bytE), cudaMemcpyHostToDevice, ((cudaStream_t)0LL))), 364);
}
} else  {
(_ZN9cuda_side6devImgE) ? ((void)0) : (__assert_fail(((const char *)"devImg"), ((const char *)"cuda_side.cu"), 367U, __T225));
_Z6Ensure9cudaErrori((cudaMemcpy2D(((void *)_ZN9cuda_side6devImgE), (((unsigned long)_ZN9cuda_side15img_pitch_in_pxE) * 3UL), ((const void *)pixels), (((unsigned long)_ZN9cuda_side4rowsE) * 3UL), (((unsigned long)_ZN9cuda_side4rowsE) * 3UL), ((size_t)_ZN9cuda_side4colsE), cudaMemcpyHostToDevice)), 368); ;
}
_Z6Ensure9cudaErrori((cudaThreadSynchronize()), 370);
_Z6Ensure9cudaErrori((cudaGetLastError()), 371);

;

{  float4 __T226;
 float4 __cuda_local_var_46006_10_non_const_s;
# 376 "cuda_side.cu"
__cuda_local_var_46006_10_non_const_s = ((((((__T226.x) = (0.0F)) , (void)((__T226.y) = (0.0F))) , (void)((__T226.z) = (0.0F))) , (void)((__T226.w) = (0.0F))) , __T226);
_Z6Ensure9cudaErrori((_Z18cudaMemcpyToSymbolI6float4E9cudaErrorRKT_PKvmm14cudaMemcpyKind((((const float4 *)&_ZN9cuda_side20preprocess_sum_accumE)), ((const void *)(&__cuda_local_var_46006_10_non_const_s)), 16UL, 0UL, cudaMemcpyHostToDevice)), 377);
_Z6Ensure9cudaErrori((_Z18cudaMemcpyToSymbolI6float4E9cudaErrorRKT_PKvmm14cudaMemcpyKind((((const float4 *)&_ZN9cuda_side23preprocess_normsq_accumE)), ((const void *)(&__cuda_local_var_46006_10_non_const_s)), 16UL, 0UL, cudaMemcpyHostToDevice)), 378);
}


;
;
{  dim3 __T227;
 unsigned __T228;
 dim3 __T229;
 unsigned __T230;
# 384 "cuda_side.cu"
 int __cuda_local_var_46014_8_non_const_threadsPerBlock;
# 384 "cuda_side.cu"
 int __cuda_local_var_46014_168_non_const_blocksPerGrid;
# 384 "cuda_side.cu"
__cuda_local_var_46014_8_non_const_threadsPerBlock = 256; (__cuda_local_var_46014_8_non_const_threadsPerBlock <= 256) ? ((void)0) : (__assert_fail(((const char *)"threadsPerBlock<=256"), ((const char *)"cuda_side.cu"), 384U, __T225)); __cuda_local_var_46014_168_non_const_blocksPerGrid = ((int)(((_ZN9cuda_side4rowsE + ((unsigned)__cuda_local_var_46014_8_non_const_threadsPerBlock)) - 1U) / ((unsigned)__cuda_local_var_46014_8_non_const_threadsPerBlock))); (cudaConfigureCall((((void)((__T228 = ((unsigned)__cuda_local_var_46014_168_non_const_blocksPerGrid)) , (void)((((__T227.x) = __T228) , (void)((__T227.y) = 1U)) , ((__T227.z) = 1U)))) , __T227), (((void)((__T230 = ((unsigned)__cuda_local_var_46014_8_non_const_threadsPerBlock)) , (void)((((__T229.x) = __T230) , (void)((__T229.y) = 1U)) , ((__T229.z) = 1U)))) , __T229), 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z10PreprocessP4int4iPK6uchar3iiif(_ZN9cuda_side16line_partial_sumE, ((int)_ZN9cuda_side11l_p_s_pitchE), ((const _ZN9cuda_side10pixel_typeE *)_ZN9cuda_side3imgE), ((int)_ZN9cuda_side4rowsE), ((int)_ZN9cuda_side15img_pitch_in_pxE), ((int)(_ZN9cuda_side15img_pitch_in_pxE * _ZN9cuda_side4colsE)), ((float)((1.0) / ((double)(_ZN9cuda_side4rowsE * _ZN9cuda_side4colsE)))))); } ;
;
;

;
{  float __T231;
 float __T232;
 float __T233;
 float __T234;
# 390 "cuda_side.cu"
 float4 __cuda_local_var_46020_10_non_const_s;
_Z6Ensure9cudaErrori((_Z20cudaMemcpyFromSymbolI6float4E9cudaErrorPvRKT_mm14cudaMemcpyKind(((void *)(&__cuda_local_var_46020_10_non_const_s)), (((const float4 *)&_ZN9cuda_side23preprocess_normsq_accumE)), 16UL, 0UL, cudaMemcpyDeviceToHost)), 391);

(_ZN9cuda_side13norm_u_pr_t_kE.x) = ((__T231 = (__cuda_local_var_46020_10_non_const_s.x)) , (__builtin_sqrtf(__T231))); ; (_ZN9cuda_side13norm_u_pr_t_kE.y) = ((__T232 = (__cuda_local_var_46020_10_non_const_s.y)) , (__builtin_sqrtf(__T232))); ; (_ZN9cuda_side13norm_u_pr_t_kE.z) = ((__T233 = (__cuda_local_var_46020_10_non_const_s.z)) , (__builtin_sqrtf(__T233))); ; (_ZN9cuda_side13norm_u_pr_t_kE.w) = ((__T234 = (__cuda_local_var_46020_10_non_const_s.w)) , (__builtin_sqrtf(__T234))); ; ;




}
_Z6Ensure9cudaErrori((cudaThreadSynchronize()), 399);
_Z6Ensure9cudaErrori((cudaGetLastError()), 400);

; 
}
# 301 "/usr/local/cuda/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolI6float4E9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolI6float4E9cudaErrorRKT_PKvmm14cudaMemcpyKind(
const float4 *symbol, 
const void *src, 
size_t count, 
size_t offset, 
enum cudaMemcpyKind kind)

{
return cudaMemcpyToSymbol(((const char *)symbol), src, count, offset, kind);
}
# 355 "/usr/local/cuda/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z20cudaMemcpyFromSymbolI6float4E9cudaErrorPvRKT_mm14cudaMemcpyKind */ __inline__ cudaError_t _Z20cudaMemcpyFromSymbolI6float4E9cudaErrorPvRKT_mm14cudaMemcpyKind(
void *dst, 
const float4 *symbol, 
size_t count, 
size_t offset, 
enum cudaMemcpyKind kind)

{
return cudaMemcpyFromSymbol(dst, ((const char *)symbol), count, offset, kind);
}
# 616 "cuda_side.cu"
void CUDATryConfiguration( const struct _ZSt6vectorI6real44SaIS0_EE *wvps,  struct _ZSt6vectorIdSaIdEE *out) { static const char __T235[126] = "void CUDATryConfiguration(const std::vector<real44, std::allocator<real44>> &, std::vector<double, std::allocator<double>> &)";
;
_Z6Ensure9cudaErrori((cudaGetLastError()), 618); {



 unsigned batchBase;
# 622 "cuda_side.cu"
batchBase = 0U; for (; (((unsigned long)batchBase) < (_ZNKSt6vectorI6real44SaIS0_EE4sizeEv(wvps))); batchBase += 16U) {
# 671 "cuda_side.cu"
static float gpu_acc[256];
 size_t __T236;
 unsigned long __T237;
# 624 "cuda_side.cu"
 unsigned __cuda_local_var_46213_12_non_const_n;
 unsigned __cuda_local_var_46214_12_non_const_m;
# 657 "cuda_side.cu"
 int __cuda_local_var_46227_7_non_const_rdc_stride;
# 624 "cuda_side.cu"
__cuda_local_var_46213_12_non_const_n = ((unsigned)(*(_ZSt3minImERKT_S2_S2_(((__T236 = 16UL) , (((const size_t *)&__T236))), ((__T237 = ((_ZNKSt6vectorI6real44SaIS0_EE4sizeEv(wvps)) - ((unsigned long)batchBase))) , (((const size_t *)&__T237)))))));
__cuda_local_var_46214_12_non_const_m = (256U / __cuda_local_var_46213_12_non_const_n);

_Z6Ensure9cudaErrori((_Z18cudaMemcpyToSymbolIA16_6real44E9cudaErrorRKT_PKvmm14cudaMemcpyKind((((const transform_type ( *)[16])&_ZN9cuda_side14wvp_transformsE)), ((const void *)((_ZNKSt6vectorI6real44SaIS0_EE5frontEv(wvps)) + batchBase)), (64UL * ((unsigned long)__cuda_local_var_46213_12_non_const_n)), 0UL, cudaMemcpyHostToDevice)), 627);
# 636 "cuda_side.cu"
(void)0;
memset(((void *)(_ZN9cuda_side25opt_obj_gpu_acc_memsetterE)), 0, 1024UL);

_Z6Ensure9cudaErrori((_Z18cudaMemcpyToSymbolIA256_fE9cudaErrorRKT_PKvmm14cudaMemcpyKind((((const float ( *)[256])&_ZN9cuda_side15opt_obj_gpu_accE)), ((const void *)(_ZN9cuda_side25opt_obj_gpu_acc_memsetterE)), 1024UL, 0UL, cudaMemcpyHostToDevice)), 639);
_Z6Ensure9cudaErrori((cudaThreadSynchronize()), 640);
# 654 "cuda_side.cu"
_Z6Ensure9cudaErrori((cudaGetLastError()), 654);
;

__cuda_local_var_46227_7_non_const_rdc_stride = ((int)__cuda_local_var_46213_12_non_const_n);
while (((unsigned)(2 * __cuda_local_var_46227_7_non_const_rdc_stride)) < (__cuda_local_var_46213_12_non_const_n * __cuda_local_var_46214_12_non_const_m)) { __cuda_local_var_46227_7_non_const_rdc_stride <<= 1; }


{  dim3 __T238;
 unsigned __T239;
 dim3 __cuda_local_var_46233_9_non_const_threadsPerBlock;

 int __cuda_local_var_46235_8_non_const_blocksPerGrid;
# 663 "cuda_side.cu"
{ (__cuda_local_var_46233_9_non_const_threadsPerBlock.x) = __cuda_local_var_46213_12_non_const_n; (__cuda_local_var_46233_9_non_const_threadsPerBlock.y) = __cuda_local_var_46214_12_non_const_m; (__cuda_local_var_46233_9_non_const_threadsPerBlock.z) = 1U; }
((__cuda_local_var_46213_12_non_const_n * __cuda_local_var_46214_12_non_const_m) <= 256U) ? ((void)0) : (__assert_fail(((const char *)"n*m<=256"), ((const char *)"cuda_side.cu"), 664U, __T235));
__cuda_local_var_46235_8_non_const_blocksPerGrid = ((int)(((_ZN9cuda_side9tri_countE + __cuda_local_var_46214_12_non_const_m) - 1U) / __cuda_local_var_46214_12_non_const_m));
(cudaConfigureCall((((void)((__T239 = ((unsigned)__cuda_local_var_46235_8_non_const_blocksPerGrid)) , (void)((((__T238.x) = __T239) , (void)((__T238.y) = 1U)) , ((__T238.z) = 1U)))) , __T238), __cuda_local_var_46233_9_non_const_threadsPerBlock, 0UL, ((cudaStream_t)0LL))) ? ((void)0) : (__device_stub__Z19EvalObjFuncGPUPhaseP6float3S0_ii(_ZN9cuda_side9tri_vertsE, _ZN9cuda_side10tri_colorsE, __cuda_local_var_46227_7_non_const_rdc_stride, ((int)_ZN9cuda_side9tri_countE)));

}
_Z6Ensure9cudaErrori((cudaGetLastError()), 669);
_Z6Ensure9cudaErrori((cudaThreadSynchronize()), 670);

_Z6Ensure9cudaErrori((_Z20cudaMemcpyFromSymbolIA256_fE9cudaErrorPvRKT_mm14cudaMemcpyKind(((void *)(gpu_acc)), (((const float ( *)[256])&_ZN9cuda_side15opt_obj_gpu_accE)), (((unsigned long)(__cuda_local_var_46213_12_non_const_n * 16U)) * 4UL), 0UL, cudaMemcpyDeviceToHost)), 672); {
 int j;
# 673 "cuda_side.cu"
j = 0; for (; (((unsigned)j) < __cuda_local_var_46213_12_non_const_n); ++j) {  float __T240;
 float __T241;
 float __T242;
 float3 __T243;
 float __T244;
 float __T245;
 float __T246;
 float3 __T247;
 float __T248;
 float __T249;
 float __T250;
 float3 __T251;
 float __T252;
 float __T253;
 float __T254;
 float3 __T255;
 float3 __T256;
 float __T257;
 float __T258;
 float __T259;
 float3 __T260;
 float3 __T261;
 float __T262;
 float __T263;
 float __T264;
 float3 __T265;
 float3 __T266;
 float3 __T267;
 float __T268;
 float __T269;
 float __T270;
 float3 __T271;
 float3 __T272;
 float3 __T273;
 float __T274;
 float __T275;
 float __T276;
 float3 __T277;
 float3 __T278;
 float3 __T279;
 float __T280;
 float __T281;
 float __T282;
 float3 __T283;
 float3 __T284;
 float __T285;
 float __T286;
 float __T287;
 float __T288;
 float3 __T289;
 float3 __T290;
 float3 __T291;
 float __T292;
 float __T293;
 float __T294;
 float3 __T295;
 float3 __T296;
 float3 __T297;
 float __T298;
 float __T299;
 float __T2100;
 float3 __T2101;
 float3 __T2102;
 float3 __T2103;
 float __T2104;
 float __T2105;
 float __T2106;
 float3 __T2107;
 float __T2108;
 float __T2109;
 float __T2110;
# 674 "cuda_side.cu"
 float *__cuda_local_var_46244_11_non_const_f;
 float3 __cuda_local_var_46245_11_non_const_sum_Z;
 float __cuda_local_var_46246_10_non_const_sum_n_q;
 float3 __cuda_local_var_46247_11_non_const_sum_n_q_by_c;
 float3 __cuda_local_var_46248_11_non_const_sum_Z_by_c;
 float3 __cuda_local_var_46249_11_non_const_sum_n_q_by_c_2;
 float3 __cuda_local_var_46250_11_non_const_G;
 float3 __cuda_local_var_46251_11_non_const_B;
 float3 __cuda_local_var_46252_11_non_const_A;
 float3 __cuda_local_var_46253_11_non_const_tar;
# 674 "cuda_side.cu"
__cuda_local_var_46244_11_non_const_f = (gpu_acc + (16 * j));
__cuda_local_var_46245_11_non_const_sum_Z = ((((__T240 = (__cuda_local_var_46244_11_non_const_f[0])) , (void)(__T241 = (__cuda_local_var_46244_11_non_const_f[1]))) , (void)(__T242 = (__cuda_local_var_46244_11_non_const_f[2]))) , (((((__T243.x) = __T240) , (void)((__T243.y) = __T241)) , (void)((__T243.z) = __T242)) , __T243));
__cuda_local_var_46246_10_non_const_sum_n_q = (__cuda_local_var_46244_11_non_const_f[3]);
__cuda_local_var_46247_11_non_const_sum_n_q_by_c = ((((__T244 = (__cuda_local_var_46244_11_non_const_f[4])) , (void)(__T245 = (__cuda_local_var_46244_11_non_const_f[5]))) , (void)(__T246 = (__cuda_local_var_46244_11_non_const_f[6]))) , (((((__T247.x) = __T244) , (void)((__T247.y) = __T245)) , (void)((__T247.z) = __T246)) , __T247));
__cuda_local_var_46248_11_non_const_sum_Z_by_c = ((((__T248 = (__cuda_local_var_46244_11_non_const_f[7])) , (void)(__T249 = (__cuda_local_var_46244_11_non_const_f[8]))) , (void)(__T250 = (__cuda_local_var_46244_11_non_const_f[9]))) , (((((__T251.x) = __T248) , (void)((__T251.y) = __T249)) , (void)((__T251.z) = __T250)) , __T251));
__cuda_local_var_46249_11_non_const_sum_n_q_by_c_2 = ((((__T252 = (__cuda_local_var_46244_11_non_const_f[10])) , (void)(__T253 = (__cuda_local_var_46244_11_non_const_f[11]))) , (void)(__T254 = (__cuda_local_var_46244_11_non_const_f[12]))) , (((((__T255.x) = __T252) , (void)((__T255.y) = __T253)) , (void)((__T255.z) = __T254)) , __T255));
__cuda_local_var_46250_11_non_const_G = ((__T256 = __cuda_local_var_46247_11_non_const_sum_n_q_by_c) , ((((__T257 = ((__T256.x) / __cuda_local_var_46246_10_non_const_sum_n_q)) , (void)(__T258 = ((__T256.y) / __cuda_local_var_46246_10_non_const_sum_n_q))) , (void)(__T259 = ((__T256.z) / __cuda_local_var_46246_10_non_const_sum_n_q))) , (((((__T260.x) = __T257) , (void)((__T260.y) = __T258)) , (void)((__T260.z) = __T259)) , __T260)));
__cuda_local_var_46251_11_non_const_B = (((__T290 = (((__T272 = __cuda_local_var_46249_11_non_const_sum_n_q_by_c_2) , (void)(__T273 = (((__T266 = ((__T261 = __cuda_local_var_46250_11_non_const_G) , ((((__T262 = ((2.0F) * (__T261.x))) , (void)(__T263 = ((2.0F) * (__T261.y)))) , (void)(__T264 = ((2.0F) * (__T261.z)))) , (((((__T265.x) = __T262) , (void)((__T265.y) = __T263)) , (void)((__T265.z) = __T264)) , __T265)))) , (void)(__T267 = __cuda_local_var_46247_11_non_const_sum_n_q_by_c)) , ((((__T268 = ((__T266.x) * (__T267.x))) , (void)(__T269 = ((__T266.y) * (__T267.y)))) , (void)(__T270 = ((__T266.z) * (__T267.z)))) , (((((__T271.x) = __T268) , (void)((__T271.y) = __T269)) , (void)((__T271.z) = __T270)) , __T271))))) , ((((__T274 = ((__T272.x) - (__T273.x))) , (void)(__T275 = ((__T272.y) - (__T273.y)))) , (void)(__T276 = ((__T272.z) - (__T273.z)))) , (((((__T277.x) = __T274) , (void)((__T277.y) = __T275)) , (void)((__T277.z) = __T276)) , __T277)))) , (void)(__T291 = (((__T284 = (((__T278 = __cuda_local_var_46250_11_non_const_G) , (void)(__T279 = __cuda_local_var_46250_11_non_const_G)) , ((((__T280 = ((__T278.x) * (__T279.x))) , (void)(__T281 = ((__T278.y) * (__T279.y)))) , (void)(__T282 = ((__T278.z) * (__T279.z)))) , (((((__T283.x) = __T280) , (void)((__T283.y) = __T281)) , (void)((__T283.z) = __T282)) , __T283)))) , (void)(__T285 = __cuda_local_var_46246_10_non_const_sum_n_q)) , ((((__T286 = ((__T284.x) * __T285)) , (void)(__T287 = ((__T284.y) * __T285))) , (void)(__T288 = ((__T284.z) * __T285))) , (((((__T289.x) = __T286) , (void)((__T289.y) = __T287)) , (void)((__T289.z) = __T288)) , __T289))))) , ((((__T292 = ((__T290.x) + (__T291.x))) , (void)(__T293 = ((__T290.y) + (__T291.y)))) , (void)(__T294 = ((__T290.z) + (__T291.z)))) , (((((__T295.x) = __T292) , (void)((__T295.y) = __T293)) , (void)((__T295.z) = __T294)) , __T295)));
__cuda_local_var_46252_11_non_const_A = (((__T2102 = __cuda_local_var_46248_11_non_const_sum_Z_by_c) , (void)(__T2103 = (((__T296 = __cuda_local_var_46250_11_non_const_G) , (void)(__T297 = __cuda_local_var_46245_11_non_const_sum_Z)) , ((((__T298 = ((__T296.x) * (__T297.x))) , (void)(__T299 = ((__T296.y) * (__T297.y)))) , (void)(__T2100 = ((__T296.z) * (__T297.z)))) , (((((__T2101.x) = __T298) , (void)((__T2101.y) = __T299)) , (void)((__T2101.z) = __T2100)) , __T2101))))) , ((((__T2104 = ((__T2102.x) - (__T2103.x))) , (void)(__T2105 = ((__T2102.y) - (__T2103.y)))) , (void)(__T2106 = ((__T2102.z) - (__T2103.z)))) , (((((__T2107.x) = __T2104) , (void)((__T2107.y) = __T2105)) , (void)((__T2107.z) = __T2106)) , __T2107)));


(__cuda_local_var_46253_11_non_const_tar.x) = ((__cuda_local_var_46252_11_non_const_A.x) / (((__T2108 = (__cuda_local_var_46251_11_non_const_B.x)) , (__builtin_sqrtf(__T2108))) * (_ZN9cuda_side13norm_u_pr_t_kE.x))); ; (__cuda_local_var_46253_11_non_const_tar.y) = ((__cuda_local_var_46252_11_non_const_A.y) / (((__T2109 = (__cuda_local_var_46251_11_non_const_B.y)) , (__builtin_sqrtf(__T2109))) * (_ZN9cuda_side13norm_u_pr_t_kE.y))); ; (__cuda_local_var_46253_11_non_const_tar.z) = ((__cuda_local_var_46252_11_non_const_A.z) / (((__T2110 = (__cuda_local_var_46251_11_non_const_B.z)) , (__builtin_sqrtf(__T2110))) * (_ZN9cuda_side13norm_u_pr_t_kE.z))); ; ;
# 697 "cuda_side.cu"
(*(_ZNSt6vectorIdSaIdEEixEm(out, ((_ZNSt6vectorIdSaIdEE9size_typeE)(batchBase + ((unsigned)j)))))) = ((double)(((__cuda_local_var_46253_11_non_const_tar.x) + (__cuda_local_var_46253_11_non_const_tar.y)) + (__cuda_local_var_46253_11_non_const_tar.z)));

} }
;
;
# 726 "cuda_side.cu"
} }


; 
}
# 301 "/usr/local/cuda/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolIA16_6real44E9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolIA16_6real44E9cudaErrorRKT_PKvmm14cudaMemcpyKind(
const transform_type (*symbol)[16], 
const void *src, 
size_t count, 
size_t offset, 
enum cudaMemcpyKind kind)

{
return cudaMemcpyToSymbol(((const char *)symbol), src, count, offset, kind);
}
# 301 "/usr/local/cuda/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z18cudaMemcpyToSymbolIA256_fE9cudaErrorRKT_PKvmm14cudaMemcpyKind */ __inline__ cudaError_t _Z18cudaMemcpyToSymbolIA256_fE9cudaErrorRKT_PKvmm14cudaMemcpyKind(
const float (*symbol)[256], 
const void *src, 
size_t count, 
size_t offset, 
enum cudaMemcpyKind kind)

{
return cudaMemcpyToSymbol(((const char *)symbol), src, count, offset, kind);
}
# 355 "/usr/local/cuda/include/cuda_runtime.h"
 __attribute__((__weak__)) /* COMDAT group: _Z20cudaMemcpyFromSymbolIA256_fE9cudaErrorPvRKT_mm14cudaMemcpyKind */ __inline__ cudaError_t _Z20cudaMemcpyFromSymbolIA256_fE9cudaErrorPvRKT_mm14cudaMemcpyKind(
void *dst, 
const float (*symbol)[256], 
size_t count, 
size_t offset, 
enum cudaMemcpyKind kind)

{
return cudaMemcpyFromSymbol(dst, ((const char *)symbol), count, offset, kind);
}
# 760 "cuda_side.cu"
void CUDADump( struct _ZSo *s) {  struct _ZSt6vectorI6uchar3SaIS0_EE __T2111;
 struct _ZSt6vectorI4int4SaIS0_EE __T2112;
(_Z28PrintStdVectorAsRowMajMatrixISo6uchar3EvRT_RKSt6vectorIT0_SaIS4_EEjj(s, ((_Z19DownloadToStdVectorI6uchar3ESt6vectorIT_SaIS2_EEPKS2_NS4_9size_typeE((&__T2111), ((const _ZN9cuda_side10pixel_typeE *)_ZN9cuda_side3imgE), ((_ZNSt6vectorI6uchar3SaIS0_EE9size_typeE)(_ZN9cuda_side15img_pitch_in_pxE * _ZN9cuda_side4colsE)))) , (((const struct _ZSt6vectorI6uchar3SaIS0_EE *)&__T2111))), _ZN9cuda_side4colsE, _ZN9cuda_side15img_pitch_in_pxE)) , (void)(_ZNSt6vectorI6uchar3SaIS0_EED1Ev((&__T2111)));

(_Z28PrintStdVectorAsRowMajMatrixISo4int4EvRT_RKSt6vectorIT0_SaIS4_EEjj(s, ((_Z19DownloadToStdVectorI4int4ESt6vectorIT_SaIS2_EEPKS2_NS4_9size_typeE((&__T2112), ((const _ZN9cuda_side16partial_sum_typeE *)_ZN9cuda_side16line_partial_sumE), (_ZN9cuda_side11l_p_s_pitchE * ((unsigned long)(_ZN9cuda_side4colsE + 1U))))) , (((const struct _ZSt6vectorI4int4SaIS0_EE *)&__T2112))), (_ZN9cuda_side4colsE + 1U), ((unsigned)_ZN9cuda_side11l_p_s_pitchE))) , (void)(_ZNSt6vectorI4int4SaIS0_EED1Ev((&__T2112))); 
}
# 753 "cuda_side.cu"
 __attribute__((__weak__)) /* COMDAT group: _Z19DownloadToStdVectorI6uchar3ESt6vectorIT_SaIS2_EEPKS2_NS4_9size_typeE */ void _Z19DownloadToStdVectorI6uchar3ESt6vectorIT_SaIS2_EEPKS2_NS4_9size_typeE( struct _ZSt6vectorI6uchar3SaIS0_EE *__T2113,  const _ZN9cuda_side10pixel_typeE *src_on_device,  _ZNSt6vectorI6uchar3SaIS0_EE9size_typeE n) {  _ZNSt6vectorI6uchar3SaIS0_EE10value_typeE __T2114;
 _ZNSt6vectorI6uchar3SaIS0_EE14allocator_typeE __T2115;
 const _ZNSt6vectorI6uchar3SaIS0_EE10value_typeE *__T2116;
 const _ZNSt6vectorI6uchar3SaIS0_EE14allocator_typeE *__T2117;
 _ZN9cuda_side10pixel_typeE *__T2118;
 struct _ZN9__gnu_cxx17__normal_iteratorIP6uchar3St6vectorIS1_SaIS1_EEEE __T2119;
 _ZNSt6vectorI6uchar3SaIS0_EE8iteratorE __T2120;
 _ZNSt6vectorI6uchar3SaIS0_EE8iteratorE __T2121;
 const struct _ZN9__gnu_cxx17__normal_iteratorIP6uchar3St6vectorIS1_SaIS1_EEEE *__T2122;
# 754 "cuda_side.cu"
{ __T2116 = ((memset(((void *)(&__T2114)), 0, 3UL)) , (((const _ZNSt6vectorI6uchar3SaIS0_EE10value_typeE *)&__T2114))); __T2117 = ((_ZN9__gnu_cxx13new_allocatorI6uchar3EC1Ev(((struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *)(&__T2115)))) , (((const _ZNSt6vectorI6uchar3SaIS0_EE14allocator_typeE *)&__T2115))); { { _ZNSt12_Vector_baseI6uchar3SaIS0_EEC1EmRKS1_((&(__T2113->__b_St12_Vector_baseI6uchar3SaIS0_EE)), n, __T2117); } { { __T2118 = (((__T2113->__b_St12_Vector_baseI6uchar3SaIS0_EE)._M_impl)._M_start); { _ZSt20uninitialized_fill_nIP6uchar3mS0_EvT_T0_RKT1_(__T2118, n, __T2116); } } (((__T2113->__b_St12_Vector_baseI6uchar3SaIS0_EE)._M_impl)._M_finish) = (((__T2113->__b_St12_Vector_baseI6uchar3SaIS0_EE)._M_impl)._M_end_of_storage); } } } { _ZN9__gnu_cxx13new_allocatorI6uchar3ED1Ev(((struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *)(&__T2115))); }
(((_ZNSt6vectorI6uchar3SaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI6uchar3SaIS0_EE *)__T2113)->__b_St12_Vector_baseI6uchar3SaIS0_EE)._M_impl)._M_finish) - (((((const struct _ZSt6vectorI6uchar3SaIS0_EE *)__T2113)->__b_St12_Vector_baseI6uchar3SaIS0_EE)._M_impl)._M_start))) == n) ? ((void)0) : (__assert_fail(((const char *)"r.size()==n"), ((const char *)"cuda_side.cu"), 755U, __T20));
_Z6Ensure9cudaErrori((cudaMemcpy(((void *)((__T2122 = ((__T2119 = (*((const struct _ZN9__gnu_cxx17__normal_iteratorIP6uchar3St6vectorIS1_SaIS1_EEEE *)((__T2120 = (((void)((__T2121._M_current) = (*(((const _ZNSt6vectorI6uchar3SaIS0_EE7pointerE *)&(((__T2113->__b_St12_Vector_baseI6uchar3SaIS0_EE)._M_impl)._M_start)))))) , __T2121)) , (&__T2120))))) , ((const struct _ZN9__gnu_cxx17__normal_iteratorIP6uchar3St6vectorIS1_SaIS1_EEEE *)&__T2119))) , (__T2122->_M_current))), ((const void *)src_on_device), (n * 3UL), cudaMemcpyDeviceToHost)), 756);
return;
}
# 744 "cuda_side.cu"
 __attribute__((__weak__)) /* COMDAT group: _Z28PrintStdVectorAsRowMajMatrixISo6uchar3EvRT_RKSt6vectorIT0_SaIS4_EEjj */ void _Z28PrintStdVectorAsRowMajMatrixISo6uchar3EvRT_RKSt6vectorIT0_SaIS4_EEjj( struct _ZSo *s,  const struct _ZSt6vectorI6uchar3SaIS0_EE *v,  unsigned r,  unsigned c) {
(((_ZNSt6vectorI6uchar3SaIS0_EE9size_typeE)((((v->__b_St12_Vector_baseI6uchar3SaIS0_EE)._M_impl)._M_finish) - (((v->__b_St12_Vector_baseI6uchar3SaIS0_EE)._M_impl)._M_start))) == ((unsigned long)(r * c))) ? ((void)0) : (__assert_fail(((const char *)"v.size() == r*c"), ((const char *)"cuda_side.cu"), 745U, __T21)); {  _ZNSt6vectorI6uchar3SaIS0_EE14const_iteratorE __T2123;
 _ZNSt6vectorI6uchar3SaIS0_EE13const_pointerE __T2124;
 const _ZNSt6vectorI6uchar3SaIS0_EE13const_pointerE *__T2125;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE __T2126;
 _ZNSt6vectorI6uchar3SaIS0_EE14const_iteratorE __T2127;
 _ZNSt6vectorI6uchar3SaIS0_EE14const_iteratorE __T2128;
 _ZNSt6vectorI6uchar3SaIS0_EE13const_pointerE __T2129;
 const _ZNSt6vectorI6uchar3SaIS0_EE13const_pointerE *__T2130;
 const struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE *__T2131;
 _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEE15difference_typeE __T2132;
 const _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEE15difference_typeE *__T2133;
# 746 "cuda_side.cu"
 _ZNSt6vectorI6uchar3SaIS0_EE14const_iteratorE i;
# 746 "cuda_side.cu"
i = (((void)((__T2125 = ((__T2124 = ((_ZNSt6vectorI6uchar3SaIS0_EE13const_pointerE)(((v->__b_St12_Vector_baseI6uchar3SaIS0_EE)._M_impl)._M_start))) , (((const _ZNSt6vectorI6uchar3SaIS0_EE13const_pointerE *)&__T2124)))) , (void)((__T2123._M_current) = (*__T2125)))) , __T2123); for (; ((__T2131 = ((__T2126 = (*((const struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE *)((__T2127 = (((void)((__T2130 = ((__T2129 = ((_ZNSt6vectorI6uchar3SaIS0_EE13const_pointerE)(((v->__b_St12_Vector_baseI6uchar3SaIS0_EE)._M_impl)._M_finish))) , (((const _ZNSt6vectorI6uchar3SaIS0_EE13const_pointerE *)&__T2129)))) , (void)((__T2128._M_current) = (*__T2130)))) , __T2128)) , (&__T2127))))) , ((const struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE *)&__T2126))) , ((char)((*((const _ZNSt6vectorI6uchar3SaIS0_EE13const_pointerE *)&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE *)&i))._M_current))) != (*(&(__T2131->_M_current)))))); (__T2133 = ((__T2132 = ((_ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEE15difference_typeE)c)) , (((const _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEE15difference_typeE *)&__T2132)))) , (void)(((i._M_current) += (*__T2133)) , (&i))) {  struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE __T2134;
 _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEE15difference_typeE __T2135;
 const _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEE15difference_typeE *__T2136;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE __T2137;
 _ZNSt6vectorI6uchar3SaIS0_EE13const_pointerE __T2138;
 const _ZNSt6vectorI6uchar3SaIS0_EE13const_pointerE *__T2139;
 struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE __T2140;
 const char *__T2141;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE __T2142;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE __T2143;
 struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *__T2144;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE __T2145;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE __T2146;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE __T2147;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE __T2148;
 struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE __T2149;
 const struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *__T2150;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE __T2151;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE __T2152;
 struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *__T2153;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE __T2154;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE __T2155;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE __T2156;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE __T2157;
 struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE __T2158;
 struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE __T2159;
 const struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *__T2160;
 struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *__T2161;
 struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE __T2162;
 const struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *__T2163;
 struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *__T2164;
 const struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *__T2165;
 char __T2166;
# 747 "cuda_side.cu"
(((__T2142 = i) , (void)(__T2143 = ((__T2136 = ((__T2135 = ((_ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEE15difference_typeE)c)) , (((const _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEE15difference_typeE *)&__T2135)))) , (((void)((__T2139 = ((__T2138 = ((((*(const struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE *)&i))._M_current) + (*__T2136))) , (((const _ZNSt6vectorI6uchar3SaIS0_EE13const_pointerE *)&__T2138)))) , (void)((__T2137._M_current) = (*__T2139)))) , __T2137)))) , (void)(__T2144 = (((void)((__T2141 = ((const char *)"\t")) , (void)(((__T2140._M_stream) = s) , ((__T2140._M_string) = __T2141)))) , (&__T2140)))) , (void)((((__T2151 = ((__T2145 = __T2142) , ((__T2146 = __T2145) , __T2146))) , (void)(__T2152 = ((__T2147 = __T2143) , ((__T2148 = __T2147) , __T2148)))) , (void)(__T2153 = (((void)((__T2150 = ((const struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *)__T2144)) , (void)(((__T2149._M_stream) = (__T2150->_M_stream)) , ((__T2149._M_string) = (__T2150->_M_string))))) , (&__T2149)))) , (void)(_ZSt13__copy_move_aILb0EPK6uchar3St16ostream_iteratorIS0_cSt11char_traitsIcEEET1_T0_S8_S7_((&__T2134), ((__T2154 = __T2151) , ((__T2155 = __T2154) , (*((const _ZNSt6vectorI6uchar3SaIS0_EE13const_pointerE *)&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE *)&__T2155))._M_current))))), ((__T2156 = __T2152) , ((__T2157 = __T2156) , (*((const _ZNSt6vectorI6uchar3SaIS0_EE13const_pointerE *)&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIPK6uchar3St6vectorIS1_SaIS1_EEEE *)&__T2157))._M_current))))), (((__T2161 = (((void)((__T2160 = ((const struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *)__T2153)) , (void)(((__T2159._M_stream) = (__T2160->_M_stream)) , ((__T2159._M_string) = (__T2160->_M_string))))) , (&__T2159))) , (void)((void)((__T2164 = (((void)((__T2163 = ((const struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *)__T2161)) , (void)(((__T2162._M_stream) = (__T2163->_M_stream)) , ((__T2162._M_string) = (__T2163->_M_string))))) , (&__T2162))) , (void)((__T2165 = ((const struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *)__T2164)) , (((__T2158._M_stream) = (__T2165->_M_stream)) , ((__T2158._M_string) = (__T2165->_M_string))))))) , (&__T2158)))));
(__T2166 = ((char)10)) , (void)(_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l(s, ((const char *)(&__T2166)), 1L));
} } 
}


 __attribute__((__weak__)) /* COMDAT group: _Z19DownloadToStdVectorI4int4ESt6vectorIT_SaIS2_EEPKS2_NS4_9size_typeE */ void _Z19DownloadToStdVectorI4int4ESt6vectorIT_SaIS2_EEPKS2_NS4_9size_typeE( struct _ZSt6vectorI4int4SaIS0_EE *__T2167,  const _ZN9cuda_side16partial_sum_typeE *src_on_device,  _ZNSt6vectorI4int4SaIS0_EE9size_typeE n) {  _ZNSt6vectorI4int4SaIS0_EE10value_typeE __T2168;
 _ZNSt6vectorI4int4SaIS0_EE14allocator_typeE __T2169;
 const _ZNSt6vectorI4int4SaIS0_EE10value_typeE *__T2170;
 const _ZNSt6vectorI4int4SaIS0_EE14allocator_typeE *__T2171;
 _ZN9cuda_side16partial_sum_typeE *__T2172;
 struct _ZN9__gnu_cxx17__normal_iteratorIP4int4St6vectorIS1_SaIS1_EEEE __T2173;
 _ZNSt6vectorI4int4SaIS0_EE8iteratorE __T2174;
 _ZNSt6vectorI4int4SaIS0_EE8iteratorE __T2175;
 const struct _ZN9__gnu_cxx17__normal_iteratorIP4int4St6vectorIS1_SaIS1_EEEE *__T2176;
# 754 "cuda_side.cu"
{ __T2170 = ((memset(((void *)(&__T2168)), 0, 16UL)) , (((const _ZNSt6vectorI4int4SaIS0_EE10value_typeE *)&__T2168))); __T2171 = ((_ZN9__gnu_cxx13new_allocatorI4int4EC1Ev(((struct _ZN9__gnu_cxx13new_allocatorI4int4EE *)(&__T2169)))) , (((const _ZNSt6vectorI4int4SaIS0_EE14allocator_typeE *)&__T2169))); { { _ZNSt12_Vector_baseI4int4SaIS0_EEC1EmRKS1_((&(__T2167->__b_St12_Vector_baseI4int4SaIS0_EE)), n, __T2171); } { { __T2172 = (((__T2167->__b_St12_Vector_baseI4int4SaIS0_EE)._M_impl)._M_start); { _ZSt20uninitialized_fill_nIP4int4mS0_EvT_T0_RKT1_(__T2172, n, __T2170); } } (((__T2167->__b_St12_Vector_baseI4int4SaIS0_EE)._M_impl)._M_finish) = (((__T2167->__b_St12_Vector_baseI4int4SaIS0_EE)._M_impl)._M_end_of_storage); } } } { _ZN9__gnu_cxx13new_allocatorI4int4ED1Ev(((struct _ZN9__gnu_cxx13new_allocatorI4int4EE *)(&__T2169))); }
(((_ZNSt6vectorI4int4SaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI4int4SaIS0_EE *)__T2167)->__b_St12_Vector_baseI4int4SaIS0_EE)._M_impl)._M_finish) - (((((const struct _ZSt6vectorI4int4SaIS0_EE *)__T2167)->__b_St12_Vector_baseI4int4SaIS0_EE)._M_impl)._M_start))) == n) ? ((void)0) : (__assert_fail(((const char *)"r.size()==n"), ((const char *)"cuda_side.cu"), 755U, __T22));
_Z6Ensure9cudaErrori((cudaMemcpy(((void *)((__T2176 = ((__T2173 = (*((const struct _ZN9__gnu_cxx17__normal_iteratorIP4int4St6vectorIS1_SaIS1_EEEE *)((__T2174 = (((void)((__T2175._M_current) = (*(((const _ZNSt6vectorI4int4SaIS0_EE7pointerE *)&(((__T2167->__b_St12_Vector_baseI4int4SaIS0_EE)._M_impl)._M_start)))))) , __T2175)) , (&__T2174))))) , ((const struct _ZN9__gnu_cxx17__normal_iteratorIP4int4St6vectorIS1_SaIS1_EEEE *)&__T2173))) , (__T2176->_M_current))), ((const void *)src_on_device), (n * 16UL), cudaMemcpyDeviceToHost)), 756);
return;
}
# 744 "cuda_side.cu"
 __attribute__((__weak__)) /* COMDAT group: _Z28PrintStdVectorAsRowMajMatrixISo4int4EvRT_RKSt6vectorIT0_SaIS4_EEjj */ void _Z28PrintStdVectorAsRowMajMatrixISo4int4EvRT_RKSt6vectorIT0_SaIS4_EEjj( struct _ZSo *s,  const struct _ZSt6vectorI4int4SaIS0_EE *v,  unsigned r,  unsigned c) {
(((_ZNSt6vectorI4int4SaIS0_EE9size_typeE)((((v->__b_St12_Vector_baseI4int4SaIS0_EE)._M_impl)._M_finish) - (((v->__b_St12_Vector_baseI4int4SaIS0_EE)._M_impl)._M_start))) == ((unsigned long)(r * c))) ? ((void)0) : (__assert_fail(((const char *)"v.size() == r*c"), ((const char *)"cuda_side.cu"), 745U, __T23)); {  _ZNSt6vectorI4int4SaIS0_EE14const_iteratorE __T2177;
 _ZNSt6vectorI4int4SaIS0_EE13const_pointerE __T2178;
 const _ZNSt6vectorI4int4SaIS0_EE13const_pointerE *__T2179;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE __T2180;
 _ZNSt6vectorI4int4SaIS0_EE14const_iteratorE __T2181;
 _ZNSt6vectorI4int4SaIS0_EE14const_iteratorE __T2182;
 _ZNSt6vectorI4int4SaIS0_EE13const_pointerE __T2183;
 const _ZNSt6vectorI4int4SaIS0_EE13const_pointerE *__T2184;
 const struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE *__T2185;
 _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEE15difference_typeE __T2186;
 const _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEE15difference_typeE *__T2187;
# 746 "cuda_side.cu"
 _ZNSt6vectorI4int4SaIS0_EE14const_iteratorE i;
# 746 "cuda_side.cu"
i = (((void)((__T2179 = ((__T2178 = ((_ZNSt6vectorI4int4SaIS0_EE13const_pointerE)(((v->__b_St12_Vector_baseI4int4SaIS0_EE)._M_impl)._M_start))) , (((const _ZNSt6vectorI4int4SaIS0_EE13const_pointerE *)&__T2178)))) , (void)((__T2177._M_current) = (*__T2179)))) , __T2177); for (; ((__T2185 = ((__T2180 = (*((const struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE *)((__T2181 = (((void)((__T2184 = ((__T2183 = ((_ZNSt6vectorI4int4SaIS0_EE13const_pointerE)(((v->__b_St12_Vector_baseI4int4SaIS0_EE)._M_impl)._M_finish))) , (((const _ZNSt6vectorI4int4SaIS0_EE13const_pointerE *)&__T2183)))) , (void)((__T2182._M_current) = (*__T2184)))) , __T2182)) , (&__T2181))))) , ((const struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE *)&__T2180))) , ((char)((*((const _ZNSt6vectorI4int4SaIS0_EE13const_pointerE *)&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE *)&i))._M_current))) != (*(&(__T2185->_M_current)))))); (__T2187 = ((__T2186 = ((_ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEE15difference_typeE)c)) , (((const _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEE15difference_typeE *)&__T2186)))) , (void)(((i._M_current) += (*__T2187)) , (&i))) {  struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE __T2188;
 _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEE15difference_typeE __T2189;
 const _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEE15difference_typeE *__T2190;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE __T2191;
 _ZNSt6vectorI4int4SaIS0_EE13const_pointerE __T2192;
 const _ZNSt6vectorI4int4SaIS0_EE13const_pointerE *__T2193;
 struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE __T2194;
 const char *__T2195;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE __T2196;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE __T2197;
 struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *__T2198;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE __T2199;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE __T2200;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE __T2201;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE __T2202;
 struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE __T2203;
 const struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *__T2204;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE __T2205;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE __T2206;
 struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *__T2207;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE __T2208;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE __T2209;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE __T2210;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE __T2211;
 struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE __T2212;
 struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE __T2213;
 const struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *__T2214;
 struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *__T2215;
 struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE __T2216;
 const struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *__T2217;
 struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *__T2218;
 const struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *__T2219;
 char __T2220;
# 747 "cuda_side.cu"
(((__T2196 = i) , (void)(__T2197 = ((__T2190 = ((__T2189 = ((_ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEE15difference_typeE)c)) , (((const _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEE15difference_typeE *)&__T2189)))) , (((void)((__T2193 = ((__T2192 = ((((*(const struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE *)&i))._M_current) + (*__T2190))) , (((const _ZNSt6vectorI4int4SaIS0_EE13const_pointerE *)&__T2192)))) , (void)((__T2191._M_current) = (*__T2193)))) , __T2191)))) , (void)(__T2198 = (((void)((__T2195 = ((const char *)"\t")) , (void)(((__T2194._M_stream) = s) , ((__T2194._M_string) = __T2195)))) , (&__T2194)))) , (void)((((__T2205 = ((__T2199 = __T2196) , ((__T2200 = __T2199) , __T2200))) , (void)(__T2206 = ((__T2201 = __T2197) , ((__T2202 = __T2201) , __T2202)))) , (void)(__T2207 = (((void)((__T2204 = ((const struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *)__T2198)) , (void)(((__T2203._M_stream) = (__T2204->_M_stream)) , ((__T2203._M_string) = (__T2204->_M_string))))) , (&__T2203)))) , (void)(_ZSt13__copy_move_aILb0EPK4int4St16ostream_iteratorIS0_cSt11char_traitsIcEEET1_T0_S8_S7_((&__T2188), ((__T2208 = __T2205) , ((__T2209 = __T2208) , (*((const _ZNSt6vectorI4int4SaIS0_EE13const_pointerE *)&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE *)&__T2209))._M_current))))), ((__T2210 = __T2206) , ((__T2211 = __T2210) , (*((const _ZNSt6vectorI4int4SaIS0_EE13const_pointerE *)&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIPK4int4St6vectorIS1_SaIS1_EEEE *)&__T2211))._M_current))))), (((__T2215 = (((void)((__T2214 = ((const struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *)__T2207)) , (void)(((__T2213._M_stream) = (__T2214->_M_stream)) , ((__T2213._M_string) = (__T2214->_M_string))))) , (&__T2213))) , (void)((void)((__T2218 = (((void)((__T2217 = ((const struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *)__T2215)) , (void)(((__T2216._M_stream) = (__T2217->_M_stream)) , ((__T2216._M_string) = (__T2217->_M_string))))) , (&__T2216))) , (void)((__T2219 = ((const struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *)__T2218)) , (((__T2212._M_stream) = (__T2219->_M_stream)) , ((__T2212._M_string) = (__T2219->_M_string))))))) , (&__T2212)))));
(__T2220 = ((char)10)) , (void)(_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l(s, ((const char *)(&__T2220)), 1L));
} } 
}
# 63 "vectorOP.h"
 __attribute__((__weak__)) /* COMDAT group: _ZrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_R6float3 */ struct _ZSi *_ZrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_R6float3( struct _ZSi *s,  float3 *v) {  struct _ZSi *__T2221;
 struct _ZSi *__T2222;
 struct _ZSi *__T2223;
# 63 "vectorOP.h"
 _ZNSi8int_typeE __cuda_local_var_36289_645_non_const_n;
# 63 "vectorOP.h"
 float __cuda_local_var_36289_688_non_const_t;
# 63 "vectorOP.h"
__cuda_local_var_36289_645_non_const_n = 2147483647; (__T2221 = (_ZNSi6ignoreEli(s, ((_ZSt10streamsize)__cuda_local_var_36289_645_non_const_n), 40))) , (void)(_ZNSi10_M_extractIfEERSiRT_(__T2221, (&__cuda_local_var_36289_688_non_const_t))); (v->x) = __cuda_local_var_36289_688_non_const_t; (__T2222 = (_ZNSi6ignoreEli(s, ((_ZSt10streamsize)__cuda_local_var_36289_645_non_const_n), 44))) , (void)(_ZNSi10_M_extractIfEERSiRT_(__T2222, (&__cuda_local_var_36289_688_non_const_t))); (v->y) = __cuda_local_var_36289_688_non_const_t; (__T2223 = (_ZNSi6ignoreEli(s, ((_ZSt10streamsize)__cuda_local_var_36289_645_non_const_n), 44))) , (void)(_ZNSi10_M_extractIfEERSiRT_(__T2223, (&__cuda_local_var_36289_688_non_const_t))); (v->z) = __cuda_local_var_36289_688_non_const_t; return _ZNSi6ignoreEli(s, ((_ZSt10streamsize)__cuda_local_var_36289_645_non_const_n), 41); }
# 62 "vectorOP.h"
 __attribute__((__weak__)) /* COMDAT group: _ZrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_R5uint4 */ struct _ZSi *_ZrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_R5uint4( struct _ZSi *s,  uint4 *v) {  struct _ZSi *__T2224;
 struct _ZSi *__T2225;
 struct _ZSi *__T2226;
 struct _ZSi *__T2227;
# 62 "vectorOP.h"
 _ZNSi8int_typeE __cuda_local_var_36288_1165_non_const_n;
# 62 "vectorOP.h"
 uint __cuda_local_var_36288_1207_non_const_t;
# 62 "vectorOP.h"
__cuda_local_var_36288_1165_non_const_n = 2147483647; (__T2224 = (_ZNSi6ignoreEli(s, ((_ZSt10streamsize)__cuda_local_var_36288_1165_non_const_n), 40))) , (void)(_ZNSi10_M_extractIjEERSiRT_(__T2224, (&__cuda_local_var_36288_1207_non_const_t))); (v->x) = __cuda_local_var_36288_1207_non_const_t; (__T2225 = (_ZNSi6ignoreEli(s, ((_ZSt10streamsize)__cuda_local_var_36288_1165_non_const_n), 44))) , (void)(_ZNSi10_M_extractIjEERSiRT_(__T2225, (&__cuda_local_var_36288_1207_non_const_t))); (v->y) = __cuda_local_var_36288_1207_non_const_t; (__T2226 = (_ZNSi6ignoreEli(s, ((_ZSt10streamsize)__cuda_local_var_36288_1165_non_const_n), 44))) , (void)(_ZNSi10_M_extractIjEERSiRT_(__T2226, (&__cuda_local_var_36288_1207_non_const_t))); (v->z) = __cuda_local_var_36288_1207_non_const_t; (__T2227 = (_ZNSi6ignoreEli(s, ((_ZSt10streamsize)__cuda_local_var_36288_1165_non_const_n), 44))) , (void)(_ZNSi10_M_extractIjEERSiRT_(__T2227, (&__cuda_local_var_36288_1207_non_const_t))); (v->w) = __cuda_local_var_36288_1207_non_const_t; return _ZNSi6ignoreEli(s, ((_ZSt10streamsize)__cuda_local_var_36288_1165_non_const_n), 41); }
# 61 "vectorOP.h"
 __attribute__((__weak__)) /* COMDAT group: _ZlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_RK6uchar3 */ struct _ZSo *_ZlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_RK6uchar3( struct _ZSo *s,  const uchar3 *v) {  char __T2228;
 struct _ZSo *__T2229;
 const char *__T2230;
 struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T2231;
 struct _ZSo *__T2232;
 const char *__T2233;
 struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T2234;
 struct _ZSo *__T2235;
 char __T2236;
# 61 "vectorOP.h"
return ((__T2235 = (_ZNSolsEi((((__T2232 = (_ZNSolsEi((((__T2229 = (_ZNSolsEi(((__T2228 = ((char)40)) , (_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l(s, ((const char *)(&__T2228)), 1L))), ((int)(v->x))))) , (void)(__T2230 = ((const char *)",\t"))) , (((!(__T2230)) ? ((__T2231 = ((__T2229) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)__T2229) + ((__T2229->__vptr)[(-3L)]))) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL))) , (void)(_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(__T2231, ((enum _ZSt12_Ios_Iostate)(((int)((((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T2231)->__b_St8ios_base)._M_streambuf_state)) | ((int)((_ZNSt8ios_base7iostateE)1))))))) : ((void)(_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l(__T2229, __T2230, ((_ZSt10streamsize)(__builtin_strlen(__T2230))))))) , __T2229)), ((int)(v->y))))) , (void)(__T2233 = ((const char *)",\t"))) , (((!(__T2233)) ? ((__T2234 = ((__T2232) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)__T2232) + ((__T2232->__vptr)[(-3L)]))) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL))) , (void)(_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(__T2234, ((enum _ZSt12_Ios_Iostate)(((int)((((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T2234)->__b_St8ios_base)._M_streambuf_state)) | ((int)((_ZNSt8ios_base7iostateE)1))))))) : ((void)(_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l(__T2232, __T2233, ((_ZSt10streamsize)(__builtin_strlen(__T2233))))))) , __T2232)), ((int)(v->z))))) , (void)(__T2236 = ((char)41))) , (_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l(__T2235, ((const char *)(&__T2236)), 1L)); }



 __attribute__((__weak__)) /* COMDAT group: _ZlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_RK4int4 */ struct _ZSo *_ZlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_RK4int4( struct _ZSo *s,  const int4 *v) {  char __T2237;
 struct _ZSo *__T2238;
 const char *__T2239;
 struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T2240;
 struct _ZSo *__T2241;
 const char *__T2242;
 struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T2243;
 struct _ZSo *__T2244;
 const char *__T2245;
 struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T2246;
 struct _ZSo *__T2247;
 char __T2248;
# 65 "vectorOP.h"
return ((__T2247 = (_ZNSolsEi((((__T2244 = (_ZNSolsEi((((__T2241 = (_ZNSolsEi((((__T2238 = (_ZNSolsEi(((__T2237 = ((char)40)) , (_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l(s, ((const char *)(&__T2237)), 1L))), ((int)(v->x))))) , (void)(__T2239 = ((const char *)",\t"))) , (((!(__T2239)) ? ((__T2240 = ((__T2238) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)__T2238) + ((__T2238->__vptr)[(-3L)]))) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL))) , (void)(_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(__T2240, ((enum _ZSt12_Ios_Iostate)(((int)((((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T2240)->__b_St8ios_base)._M_streambuf_state)) | ((int)((_ZNSt8ios_base7iostateE)1))))))) : ((void)(_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l(__T2238, __T2239, ((_ZSt10streamsize)(__builtin_strlen(__T2239))))))) , __T2238)), ((int)(v->y))))) , (void)(__T2242 = ((const char *)",\t"))) , (((!(__T2242)) ? ((__T2243 = ((__T2241) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)__T2241) + ((__T2241->__vptr)[(-3L)]))) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL))) , (void)(_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(__T2243, ((enum _ZSt12_Ios_Iostate)(((int)((((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T2243)->__b_St8ios_base)._M_streambuf_state)) | ((int)((_ZNSt8ios_base7iostateE)1))))))) : ((void)(_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l(__T2241, __T2242, ((_ZSt10streamsize)(__builtin_strlen(__T2242))))))) , __T2241)), ((int)(v->z))))) , (void)(__T2245 = ((const char *)",\t"))) , (((!(__T2245)) ? ((__T2246 = ((__T2244) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)__T2244) + ((__T2244->__vptr)[(-3L)]))) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL))) , (void)(_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(__T2246, ((enum _ZSt12_Ios_Iostate)(((int)((((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T2246)->__b_St8ios_base)._M_streambuf_state)) | ((int)((_ZNSt8ios_base7iostateE)1))))))) : ((void)(_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l(__T2244, __T2245, ((_ZSt10streamsize)(__builtin_strlen(__T2245))))))) , __T2244)), ((int)(v->w))))) , (void)(__T2248 = ((char)41))) , (_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l(__T2247, ((const char *)(&__T2248)), 1L)); }
__asm__(".align 2");
# 76 "/usr/local/cuda/include/cuda_texture_types.h"
 __attribute__((__weak__)) /* COMDAT group: _ZN7textureI4int4Li2EL19cudaTextureReadMode0EEC1Ei21cudaTextureFilterMode22cudaTextureAddressMode */ __inline__ void _ZN7textureI4int4Li2EL19cudaTextureReadMode0EEC1Ei21cudaTextureFilterMode22cudaTextureAddressMode( struct _Z7textureI4int4Li2EL19cudaTextureReadMode0EE *const this,  int norm, 
enum cudaTextureFilterMode fMode, 
enum cudaTextureAddressMode aMode)
{  int __T2524;
((this->__b_16textureReference).normalized) = norm;
((this->__b_16textureReference).filterMode) = fMode;
((((this->__b_16textureReference).addressMode))[0]) = aMode;
((((this->__b_16textureReference).addressMode))[1]) = aMode;
((((this->__b_16textureReference).addressMode))[2]) = aMode;
((this->__b_16textureReference).channelDesc) = ((__T2524 = 32) , (cudaCreateChannelDesc(__T2524, __T2524, __T2524, __T2524, cudaChannelFormatKindSigned)));
((this->__b_16textureReference).sRGB) = 0; 
}
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN7textureI4int4Li2EL19cudaTextureReadMode0EEC2Ei21cudaTextureFilterMode22cudaTextureAddressMode */ __inline__ void _ZN7textureI4int4Li2EL19cudaTextureReadMode0EEC2Ei21cudaTextureFilterMode22cudaTextureAddressMode( struct _Z7textureI4int4Li2EL19cudaTextureReadMode0EE *const this,  int __T2525,  enum cudaTextureFilterMode __T2526,  enum cudaTextureAddressMode __T2527) {  _ZN7textureI4int4Li2EL19cudaTextureReadMode0EEC1Ei21cudaTextureFilterMode22cudaTextureAddressMode(this, __T2525, __T2526, __T2527);  }
# 324 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPK6uchar3St16ostream_iteratorIS3_cSt11char_traitsIcEEEET0_T_SB_SA_ */ __inline__ __attribute__((visibility("default"))) void _ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPK6uchar3St16ostream_iteratorIS3_cSt11char_traitsIcEEEET0_T_SB_SA_( struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *__T2528,  const _ZN9cuda_side10pixel_typeE *__first,  const _ZN9cuda_side10pixel_typeE *__last,  struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *__result)
{  const struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *__T2529;
{  struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *__T2530;
 struct _ZSo *__T2531;
 const char *__T2532;
 struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T2533;
# 327 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 _ZZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPK6uchar3St16ostream_iteratorIS3_cSt11char_traitsIcEEEET0_T_SB_SA_E9_Distance_20894 __n;
# 327 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
__n = (__last - __first); for (; (__n > 0L); --__n)
{
(__T2530 = __result) , (void)(((_ZlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_RK6uchar3((__T2530->_M_stream), __first)) , (void)((__T2530->_M_string) ? ((void)(((__T2531 = (__T2530->_M_stream)) , (void)(__T2532 = (__T2530->_M_string))) , (void)(((!(__T2532)) ? ((__T2533 = ((__T2531) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)__T2531) + ((__T2531->__vptr)[(-3L)]))) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL))) , (void)(_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(__T2533, ((enum _ZSt12_Ios_Iostate)(((int)((((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T2533)->__b_St8ios_base)._M_streambuf_state)) | ((int)((_ZNSt8ios_base7iostateE)1))))))) : ((void)(_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l(__T2531, __T2532, ((_ZSt10streamsize)(__builtin_strlen(__T2532))))))) , __T2531))) : ((void)0))) , __T2530);
++__first;
__result;
} } {
{ __T2529 = ((const struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *)__result); { (__T2528->_M_stream) = (__T2529->_M_stream); (__T2528->_M_string) = (__T2529->_M_string); } } return; }
}
# 324 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPK4int4St16ostream_iteratorIS3_cSt11char_traitsIcEEEET0_T_SB_SA_ */ __inline__ __attribute__((visibility("default"))) void _ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPK4int4St16ostream_iteratorIS3_cSt11char_traitsIcEEEET0_T_SB_SA_( struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *__T2534,  const _ZN9cuda_side16partial_sum_typeE *__first,  const _ZN9cuda_side16partial_sum_typeE *__last,  struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *__result)
{  const struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *__T2535;
{  struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *__T2536;
 struct _ZSo *__T2537;
 const char *__T2538;
 struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T2539;
# 327 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 _ZZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPK4int4St16ostream_iteratorIS3_cSt11char_traitsIcEEEET0_T_SB_SA_E9_Distance_21504 __n;
# 327 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
__n = (__last - __first); for (; (__n > 0L); --__n)
{
(__T2536 = __result) , (void)(((_ZlsIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_RK4int4((__T2536->_M_stream), __first)) , (void)((__T2536->_M_string) ? ((void)(((__T2537 = (__T2536->_M_stream)) , (void)(__T2538 = (__T2536->_M_string))) , (void)(((!(__T2538)) ? ((__T2539 = ((__T2537) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)__T2537) + ((__T2537->__vptr)[(-3L)]))) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL))) , (void)(_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(__T2539, ((enum _ZSt12_Ios_Iostate)(((int)((((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T2539)->__b_St8ios_base)._M_streambuf_state)) | ((int)((_ZNSt8ios_base7iostateE)1))))))) : ((void)(_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l(__T2537, __T2538, ((_ZSt10streamsize)(__builtin_strlen(__T2538))))))) , __T2537))) : ((void)0))) , __T2536);
++__first;
__result;
} } {
{ __T2535 = ((const struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *)__result); { (__T2534->_M_stream) = (__T2535->_M_stream); (__T2534->_M_string) = (__T2535->_M_string); } } return; }
}
__asm__(".align 2");
# 195 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/streambuf" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev( struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const this)
{  (this->__vptr) = (_ZTVSt15basic_streambufIcSt11char_traitsIcEE + 2); { _ZNSt6localeD1Ev((&(this->_M_buf_locale))); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEED0Ev( struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const this) {  if (this) { _ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev(this); _ZdlPv(((void *)this)); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt15basic_streambufIcSt11char_traitsIcEED2Ev( struct _ZSt15basic_streambufIcSt11char_traitsIcEE *const this) {  _ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev(this);  }
__asm__(".align 2");
# 274 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/basic_ios.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEED1Ev( struct _ZSt9basic_iosIcSt11char_traitsIcEE *const this) {  ((this->__b_St8ios_base).__vptr) = (_ZTVSt9basic_iosIcSt11char_traitsIcEE + 2); { _ZNSt8ios_baseD2Ev((&(this->__b_St8ios_base))); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEED0Ev( struct _ZSt9basic_iosIcSt11char_traitsIcEE *const this) {  if (this) { _ZNSt9basic_iosIcSt11char_traitsIcEED1Ev(this); _ZdlPv(((void *)this)); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEED2Ev( struct _ZSt9basic_iosIcSt11char_traitsIcEE *const this) {  _ZNSt9basic_iosIcSt11char_traitsIcEED1Ev(this);  }
__asm__(".align 2");
# 452 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/basic_ios.h" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEEC1Ev( struct _ZSt9basic_iosIcSt11char_traitsIcEE *const this)


{ _ZNSt8ios_baseC2Ev((&(this->__b_St8ios_base))); ((this->__b_St8ios_base).__vptr) = (_ZTVSt9basic_iosIcSt11char_traitsIcEE + 2); (this->_M_tie) = ((struct _ZSo *)0LL); (this->_M_fill) = ((_ZNSt9basic_iosIcSt11char_traitsIcEE9char_typeE)0); (this->_M_fill_init) = ((char)0); (this->_M_streambuf) = ((struct _ZSt15basic_streambufIcSt11char_traitsIcEE *)0LL); (this->_M_ctype) = ((const _ZNSt9basic_iosIcSt11char_traitsIcEE12__ctype_typeE *)0LL); (this->_M_num_put) = ((const _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_put_typeE *)0LL); (this->_M_num_get) = ((const _ZNSt9basic_iosIcSt11char_traitsIcEE14__num_get_typeE *)0LL);  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt9basic_iosIcSt11char_traitsIcEEC2Ev( struct _ZSt9basic_iosIcSt11char_traitsIcEE *const this) {  _ZNSt9basic_iosIcSt11char_traitsIcEEC1Ev(this);  }
__asm__(".align 2");
# 101 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/istream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSiD2Ev( struct _ZSi *const this,  const long *const *__T2540)
{  (this->__vptr) = (*__T2540); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + ((this->__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T2540 + 1UL)); (this->_M_gcount) = 0L;  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSiD0Ev( struct _ZSi *const this) {  const long *const *__T2541;
if (this) { ((__T2541 = (_ZTTSi)) , (void)(_ZNSiD2Ev(this, __T2541))) , (void)(_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE)))); _ZdlPv(((void *)this)); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSiD1Ev( struct _ZSi *const this) {  const long *const *__T2542;
__T2542 = (_ZTTSi); _ZNSiD2Ev(this, __T2542);
# 102 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/istream" 3
{ _ZNSt9basic_iosIcSt11char_traitsIcEED1Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE))); }  }
__asm__(".align 2");
# 216 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEED1Ev( struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const this)
{  ((this->__b_St15basic_streambufIcSt11char_traitsIcEE).__vptr) = (_ZTVSt13basic_filebufIcSt11char_traitsIcEE + 2); _ZNSt13basic_filebufIcSt11char_traitsIcEE5closeEv(this); { _ZNSt12__basic_fileIcED1Ev((&(this->_M_file))); { _ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev((&(this->__b_St15basic_streambufIcSt11char_traitsIcEE))); } }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEED0Ev( struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const this) {  if (this) { _ZNSt13basic_filebufIcSt11char_traitsIcEED1Ev(this); _ZdlPv(((void *)this)); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt13basic_filebufIcSt11char_traitsIcEED2Ev( struct _ZSt13basic_filebufIcSt11char_traitsIcEE *const this) {  _ZNSt13basic_filebufIcSt11char_traitsIcEED1Ev(this);  }
__asm__(".align 2");
# 460 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC2EPKcSt13_Ios_Openmode( struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const this,  const long *const *__T2543,  const char *__s,  _ZNSt8ios_base8openmodeE __mode)

{  struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T2544;
# 462 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
{ (((struct _ZSi *)this)->__vptr) = (*(__T2543 + 1UL)); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)((struct _ZSi *)this)) + ((((struct _ZSi *)this)->__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*((__T2543 + 1UL) + 1UL)); (((struct _ZSi *)this)->_M_gcount) = 0L; _ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E(((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)((struct _ZSi *)this)) + ((((struct _ZSi *)this)->__vptr)[(-3L)]))), ((struct _ZSt15basic_streambufIcSt11char_traitsIcEE *)0LL)); } ((this->__b_Si).__vptr) = (*__T2543); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_Si).__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T2543 + 3UL)); _ZNSt13basic_filebufIcSt11char_traitsIcEEC1Ev((&(this->_M_filebuf)));
_ZNSt9basic_iosIcSt11char_traitsIcEE4initEPSt15basic_streambufIcS1_E(((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_Si).__vptr)[(-3L)]))), (&((this->_M_filebuf).__b_St15basic_streambufIcSt11char_traitsIcEE)));
{ if (!(_ZNSt13basic_filebufIcSt11char_traitsIcEE4openEPKcSt13_Ios_Openmode((&(this->_M_filebuf)), __s, ((enum _ZSt13_Ios_Openmode)(((int)__mode) | ((int)_ZSt5_S_in)))))) { { __T2544 = ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_Si).__vptr)[(-3L)]))); { _ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(__T2544, ((enum _ZSt12_Ios_Iostate)(((int)((((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T2544)->__b_St8ios_base)._M_streambuf_state)) | ((int)((_ZNSt8ios_base7iostateE)4))))); } } } else  { _ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate(((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_Si).__vptr)[(-3L)]))), ((_ZNSt8ios_base7iostateE)0)); } } 
}
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC1EPKcSt13_Ios_Openmode( struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const this,  const char *__T2545,  _ZNSt8ios_base8openmodeE __T2546) {  const long *const *__T2547;
__T2547 = (_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE); ((this->__b_Si).__vptr) = (*__T2547);
# 462 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
{ _ZNSt9basic_iosIcSt11char_traitsIcEEC1Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE))); } _ZNSt14basic_ifstreamIcSt11char_traitsIcEEC2EPKcSt13_Ios_Openmode(this, __T2547, __T2545, __T2546);  }
__asm__(".align 2");
# 491 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev( struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const this,  const long *const *__T2548)
{  ((this->__b_Si).__vptr) = (*__T2548); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)this) + (((this->__b_Si).__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*(__T2548 + 3UL)); { { (((this->_M_filebuf).__b_St15basic_streambufIcSt11char_traitsIcEE).__vptr) = (_ZTVSt13basic_filebufIcSt11char_traitsIcEE + 2); _ZNSt13basic_filebufIcSt11char_traitsIcEE5closeEv((&(this->_M_filebuf))); { _ZNSt12__basic_fileIcED1Ev((&((this->_M_filebuf)._M_file))); { _ZNSt15basic_streambufIcSt11char_traitsIcEED1Ev((&((this->_M_filebuf).__b_St15basic_streambufIcSt11char_traitsIcEE))); } } } { (((struct _ZSi *)this)->__vptr) = (*(__T2548 + 1UL)); ((((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)((struct _ZSi *)this)) + ((((struct _ZSi *)this)->__vptr)[(-3L)])))->__b_St8ios_base).__vptr) = (*((__T2548 + 1UL) + 1UL)); (((struct _ZSi *)this)->_M_gcount) = 0L; } }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEED0Ev( struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const this) {  const long *const *__T2549;
if (this) { ((__T2549 = (_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE)) , (void)(_ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev(this, __T2549))) , (void)(_ZNSt9basic_iosIcSt11char_traitsIcEED1Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE)))); _ZdlPv(((void *)this)); }  }
__asm__(".align 2");
extern __inline__ __attribute__((visibility("default"))) void _ZNSt14basic_ifstreamIcSt11char_traitsIcEED1Ev( struct _ZSt14basic_ifstreamIcSt11char_traitsIcEE *const this) {  const long *const *__T2550;
__T2550 = (_ZTTSt14basic_ifstreamIcSt11char_traitsIcEE); _ZNSt14basic_ifstreamIcSt11char_traitsIcEED2Ev(this, __T2550);
# 492 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/fstream" 3
{ _ZNSt9basic_iosIcSt11char_traitsIcEED1Ev((&(this->__v_St9basic_iosIcSt11char_traitsIcEE))); }  }
__asm__(".align 2");
# 104 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI6float3EC1Ev */ __inline__ void _ZNSaI6float3EC1Ev( struct _ZSaI6float3E *const this) { { _ZN9__gnu_cxx13new_allocatorI6float3EC1Ev(((struct _ZN9__gnu_cxx13new_allocatorI6float3EE *)this)); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI6float3EC2Ev */ __inline__ void _ZNSaI6float3EC2Ev( struct _ZSaI6float3E *const this) {  _ZNSaI6float3EC1Ev(this);  }
__asm__(".align 2");
# 106 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI6float3EC1ERKS0_ */ __inline__ void _ZNSaI6float3EC1ERKS0_( struct _ZSaI6float3E *const this,  const struct _ZSaI6float3E *__a)
{ { _ZN9__gnu_cxx13new_allocatorI6float3EC1ERKS2_(((struct _ZN9__gnu_cxx13new_allocatorI6float3EE *)this), ((const struct _ZN9__gnu_cxx13new_allocatorI6float3EE *)((struct _ZN9__gnu_cxx13new_allocatorI6float3EE *)__a))); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI6float3EC2ERKS0_ */ __inline__ void _ZNSaI6float3EC2ERKS0_( struct _ZSaI6float3E *const this,  const struct _ZSaI6float3E *__T2551) {  _ZNSaI6float3EC1ERKS0_(this, __T2551);  }
__asm__(".align 2");

 __attribute__((__weak__)) /* COMDAT group: _ZNSaI6float3ED1Ev */ __inline__ void _ZNSaI6float3ED1Ev( struct _ZSaI6float3E *const this) {  { { _ZN9__gnu_cxx13new_allocatorI6float3ED1Ev(((struct _ZN9__gnu_cxx13new_allocatorI6float3EE *)this)); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI6float3ED2Ev */ __inline__ void _ZNSaI6float3ED2Ev( struct _ZSaI6float3E *const this) {  _ZNSaI6float3ED1Ev(this);  }
__asm__(".align 2");
# 125 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6float3SaIS0_EEC1Ev */ __inline__ void _ZNSt12_Vector_baseI6float3SaIS0_EEC1Ev( struct _ZSt12_Vector_baseI6float3SaIS0_EE *const this)
{ { { _ZNSaI6float3EC1Ev(((struct _ZSaI6float3E *)(&(this->_M_impl)))); } ((this->_M_impl)._M_start) = ((_ZNSt12_Vector_baseI6float3SaIS0_EE7pointerE)0LL); ((this->_M_impl)._M_finish) = ((_ZNSt12_Vector_baseI6float3SaIS0_EE7pointerE)0LL); ((this->_M_impl)._M_end_of_storage) = ((_ZNSt12_Vector_baseI6float3SaIS0_EE7pointerE)0LL); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6float3SaIS0_EEC2Ev */ __inline__ void _ZNSt12_Vector_baseI6float3SaIS0_EEC2Ev( struct _ZSt12_Vector_baseI6float3SaIS0_EE *const this) {  _ZNSt12_Vector_baseI6float3SaIS0_EEC1Ev(this);  }
__asm__(".align 2");





 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6float3SaIS0_EEC1EmRKS1_ */ __inline__ void _ZNSt12_Vector_baseI6float3SaIS0_EEC1EmRKS1_( struct _ZSt12_Vector_baseI6float3SaIS0_EE *const this,  _ZSt6size_t __n,  const _ZNSt12_Vector_baseI6float3SaIS0_EE14allocator_typeE *__a)

{ { { _ZNSaI6float3EC1ERKS0_(((struct _ZSaI6float3E *)(&(this->_M_impl))), __a); } ((this->_M_impl)._M_start) = ((_ZNSt12_Vector_baseI6float3SaIS0_EE7pointerE)0LL); ((this->_M_impl)._M_finish) = ((_ZNSt12_Vector_baseI6float3SaIS0_EE7pointerE)0LL); ((this->_M_impl)._M_end_of_storage) = ((_ZNSt12_Vector_baseI6float3SaIS0_EE7pointerE)0LL); } { ((this->_M_impl)._M_start) = ((__n != 0UL) ? (((__n > 1537228672809129301UL) ? (_ZSt17__throw_bad_allocv()) : ((void)0)) , ((vertex_type *)(_Znwm((__n * 12UL))))) : ((_ZN9__gnu_cxx13new_allocatorI6float3E7pointerE)0LL)); ((this->_M_impl)._M_finish) = ((this->_M_impl)._M_start); ((this->_M_impl)._M_end_of_storage) = (((this->_M_impl)._M_start) + __n); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6float3SaIS0_EEC2EmRKS1_ */ __inline__ void _ZNSt12_Vector_baseI6float3SaIS0_EEC2EmRKS1_( struct _ZSt12_Vector_baseI6float3SaIS0_EE *const this,  _ZSt6size_t __T2552,  const _ZNSt12_Vector_baseI6float3SaIS0_EE14allocator_typeE *__T2553) {  _ZNSt12_Vector_baseI6float3SaIS0_EEC1EmRKS1_(this, __T2552, __T2553);  }
__asm__(".align 2");
# 160 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6float3SaIS0_EED1Ev */ __inline__ void _ZNSt12_Vector_baseI6float3SaIS0_EED1Ev( struct _ZSt12_Vector_baseI6float3SaIS0_EE *const this)
{  _ZNSt12_Vector_baseI6float3SaIS0_EE7pointerE __T2554;
 _ZSt6size_t __T2555;
# 161 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
{ __T2554 = ((this->_M_impl)._M_start); __T2555 = ((_ZSt6size_t)(((this->_M_impl)._M_end_of_storage) - ((this->_M_impl)._M_start))); { if (__T2554) { { _ZdlPv(((void *)__T2554)); } } } } {
{ _ZNSaI6float3ED1Ev(((struct _ZSaI6float3E *)(&(this->_M_impl)))); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6float3SaIS0_EED2Ev */ __inline__ void _ZNSt12_Vector_baseI6float3SaIS0_EED2Ev( struct _ZSt12_Vector_baseI6float3SaIS0_EE *const this) {  _ZNSt12_Vector_baseI6float3SaIS0_EED1Ev(this);  }
__asm__(".align 2");
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6float3SaIS0_EE12_Vector_implD1Ev */ __inline__ void _ZNSt12_Vector_baseI6float3SaIS0_EE12_Vector_implD1Ev( struct _ZNSt12_Vector_baseI6float3SaIS0_EE12_Vector_implE *const this) {  { { _ZNSaI6float3ED1Ev(((struct _ZSaI6float3E *)this)); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6float3SaIS0_EE12_Vector_implD2Ev */ __inline__ void _ZNSt12_Vector_baseI6float3SaIS0_EE12_Vector_implD2Ev( struct _ZNSt12_Vector_baseI6float3SaIS0_EE12_Vector_implE *const this) {  _ZNSaI6float3ED1Ev(((struct _ZSaI6float3E *)this));  }
__asm__(".align 2");
# 246 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EEC1Ev */ __inline__ void _ZNSt6vectorI6float3SaIS0_EEC1Ev( struct _ZSt6vectorI6float3SaIS0_EE *const this)
{ { _ZNSt12_Vector_baseI6float3SaIS0_EEC1Ev((&(this->__b_St12_Vector_baseI6float3SaIS0_EE))); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EEC2Ev */ __inline__ void _ZNSt6vectorI6float3SaIS0_EEC2Ev( struct _ZSt6vectorI6float3SaIS0_EE *const this) {  _ZNSt6vectorI6float3SaIS0_EEC1Ev(this);  }
__asm__(".align 2");
# 292 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EEC1EmRKS0_RKS1_ */ __inline__ void _ZNSt6vectorI6float3SaIS0_EEC1EmRKS0_RKS1_( struct _ZSt6vectorI6float3SaIS0_EE *const this,  _ZNSt6vectorI6float3SaIS0_EE9size_typeE __n,  const _ZNSt6vectorI6float3SaIS0_EE10value_typeE *__value, 
const _ZNSt6vectorI6float3SaIS0_EE14allocator_typeE *__a)

{  vertex_type *__T2556;
# 295 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
{ _ZNSt12_Vector_baseI6float3SaIS0_EEC1EmRKS1_((&(this->__b_St12_Vector_baseI6float3SaIS0_EE)), __n, __a); } { { __T2556 = (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start); { _ZSt20uninitialized_fill_nIP6float3mS0_EvT_T0_RKT1_(__T2556, __n, __value); } } (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish) = (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_end_of_storage); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EEC2EmRKS0_RKS1_ */ __inline__ void _ZNSt6vectorI6float3SaIS0_EEC2EmRKS0_RKS1_( struct _ZSt6vectorI6float3SaIS0_EE *const this,  _ZNSt6vectorI6float3SaIS0_EE9size_typeE __T2557,  const _ZNSt6vectorI6float3SaIS0_EE10value_typeE *__T2558,  const _ZNSt6vectorI6float3SaIS0_EE14allocator_typeE *__T2559) {  _ZNSt6vectorI6float3SaIS0_EEC1EmRKS0_RKS1_(this, __T2557, __T2558, __T2559);  }
__asm__(".align 2");
# 402 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EED1Ev */ __inline__ void _ZNSt6vectorI6float3SaIS0_EED1Ev( struct _ZSt6vectorI6float3SaIS0_EE *const this)
{  vertex_type *__T2560;
 vertex_type *__T2561;
# 403 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
{ __T2560 = (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start); __T2561 = (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish); { _ZSt8_DestroyIP6float3EvT_S2_(__T2560, __T2561); } } {
{ _ZNSt12_Vector_baseI6float3SaIS0_EED1Ev((&(this->__b_St12_Vector_baseI6float3SaIS0_EE))); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EED2Ev */ __inline__ void _ZNSt6vectorI6float3SaIS0_EED2Ev( struct _ZSt6vectorI6float3SaIS0_EE *const this) {  _ZNSt6vectorI6float3SaIS0_EED1Ev(this);  }
__asm__(".align 2");
# 162 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EEaSERKS2_ */ struct _ZSt6vectorI6float3SaIS0_EE *_ZNSt6vectorI6float3SaIS0_EEaSERKS2_( struct _ZSt6vectorI6float3SaIS0_EE *const this,  const struct _ZSt6vectorI6float3SaIS0_EE *__x)
{
if (__x != ((const struct _ZSt6vectorI6float3SaIS0_EE *)this))
{  _ZNSt6vectorI6float3SaIS0_EE14const_iteratorE __T2562;
 _ZNSt6vectorI6float3SaIS0_EE13const_pointerE __T2563;
 const _ZNSt6vectorI6float3SaIS0_EE13const_pointerE *__T2564;
 _ZNSt6vectorI6float3SaIS0_EE14const_iteratorE __T2565;
 _ZNSt6vectorI6float3SaIS0_EE13const_pointerE __T2566;
 const _ZNSt6vectorI6float3SaIS0_EE13const_pointerE *__T2567;
 _ZNSt6vectorI6float3SaIS0_EE8iteratorE __T2568;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2569;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2570;
 struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE __T2571;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2572;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2573;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2574;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2575;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2576;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2577;
 struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE __T2578;
 struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE __T2579;
 vertex_type *__T2580;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2581;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2582;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2583;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2584;
 struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE __T2585;
 struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE __T2586;
 const _ZNSt6vectorI6float3SaIS0_EE7pointerE *__T2587;
 _ZNSt6vectorI6float3SaIS0_EE8iteratorE __T2588;
 struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE __T2589;
 struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE __T2590;
 vertex_type *__T2591;
 vertex_type *__T2592;
 vertex_type *__T2593;
 vertex_type *__T2594;
 vertex_type *__T2595;
 vertex_type *__T2596;
# 182 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
 _ZNSt6vectorI6float3SaIS0_EE9size_typeE __cuda_local_var_33239_20_non_const___xlen;
# 182 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
__cuda_local_var_33239_20_non_const___xlen = (_ZNKSt6vectorI6float3SaIS0_EE4sizeEv(__x));
if (__cuda_local_var_33239_20_non_const___xlen > ((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI6float3SaIS0_EE *)this)->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_end_of_storage) - (((((const struct _ZSt6vectorI6float3SaIS0_EE *)this)->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start))))
{  _ZNSt6vectorI6float3SaIS0_EE14const_iteratorE __T2597;
 _ZNSt6vectorI6float3SaIS0_EE13const_pointerE __T2598;
 const _ZNSt6vectorI6float3SaIS0_EE13const_pointerE *__T2599;
 _ZNSt6vectorI6float3SaIS0_EE14const_iteratorE __T2600;
 _ZNSt6vectorI6float3SaIS0_EE13const_pointerE __T2601;
 const _ZNSt6vectorI6float3SaIS0_EE13const_pointerE *__T2602;
 vertex_type *__T2603;
 vertex_type *__T2604;
 _ZNSt12_Vector_baseI6float3SaIS0_EE7pointerE __T2605;
 _ZSt6size_t __T2606;
# 185 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
 _ZNSt6vectorI6float3SaIS0_EE7pointerE __cuda_local_var_33242_16_non_const___tmp;
# 185 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
__cuda_local_var_33242_16_non_const___tmp = (_ZNSt6vectorI6float3SaIS0_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS0_S2_EEEEPS0_mT_SA_(this, __cuda_local_var_33239_20_non_const___xlen, (((void)((__T2599 = ((__T2598 = ((_ZNSt6vectorI6float3SaIS0_EE13const_pointerE)(((__x->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start))) , (((const _ZNSt6vectorI6float3SaIS0_EE13const_pointerE *)&__T2598)))) , (void)((__T2597._M_current) = (*__T2599)))) , __T2597), (((void)((__T2602 = ((__T2601 = ((_ZNSt6vectorI6float3SaIS0_EE13const_pointerE)(((__x->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish))) , (((const _ZNSt6vectorI6float3SaIS0_EE13const_pointerE *)&__T2601)))) , (void)((__T2600._M_current) = (*__T2602)))) , __T2600)));

{ __T2603 = (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start); __T2604 = (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish); { _ZSt8_DestroyIP6float3EvT_S2_(__T2603, __T2604); } }

{ __T2605 = (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start); __T2606 = ((_ZSt6size_t)((((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_end_of_storage) - (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start))); { if (__T2605) { { _ZdlPv(((void *)__T2605)); } } } }


(((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start) = __cuda_local_var_33242_16_non_const___tmp;
(((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_end_of_storage) = ((((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start) + __cuda_local_var_33239_20_non_const___xlen);
} else  {
if ((_ZNKSt6vectorI6float3SaIS0_EE4sizeEv(((const struct _ZSt6vectorI6float3SaIS0_EE *)this))) >= __cuda_local_var_33239_20_non_const___xlen)
{
{ __T2589 = ((((__T2569 = (((void)((__T2564 = ((__T2563 = ((_ZNSt6vectorI6float3SaIS0_EE13const_pointerE)(((__x->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start))) , (((const _ZNSt6vectorI6float3SaIS0_EE13const_pointerE *)&__T2563)))) , (void)((__T2562._M_current) = (*__T2564)))) , __T2562)) , (void)(__T2570 = (((void)((__T2567 = ((__T2566 = ((_ZNSt6vectorI6float3SaIS0_EE13const_pointerE)(((__x->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish))) , (((const _ZNSt6vectorI6float3SaIS0_EE13const_pointerE *)&__T2566)))) , (void)((__T2565._M_current) = (*__T2567)))) , __T2565))) , (void)(__T2571 = (((void)((__T2568._M_current) = (*(((const _ZNSt6vectorI6float3SaIS0_EE7pointerE *)&(((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start)))))) , __T2568))) , ((((__T2576 = ((__T2572 = __T2569) , ((__T2573 = __T2572) , __T2573))) , (void)(__T2577 = ((__T2574 = __T2570) , ((__T2575 = __T2574) , __T2575)))) , (void)(__T2578 = __T2571)) , (((void)((__T2587 = ((__T2580 = (_ZSt13__copy_move_aILb0EPK6float3PS0_ET1_T0_S5_S4_(((__T2581 = __T2576) , ((__T2582 = __T2581) , (*((const _ZNSt6vectorI6float3SaIS0_EE13const_pointerE *)&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE *)&__T2582))._M_current))))), ((__T2583 = __T2577) , ((__T2584 = __T2583) , (*((const _ZNSt6vectorI6float3SaIS0_EE13const_pointerE *)&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE *)&__T2584))._M_current))))), ((__T2585 = __T2578) , ((__T2586 = __T2585) , (*((const _ZNSt6vectorI6float3SaIS0_EE7pointerE *)&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE *)&__T2586))._M_current)))))))) , (((const _ZNSt6vectorI6float3SaIS0_EE7pointerE *)&__T2580)))) , (void)((__T2579._M_current) = (*__T2587)))) , __T2579))); __T2590 = (((void)((__T2588._M_current) = (*(((const _ZNSt6vectorI6float3SaIS0_EE7pointerE *)&(((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish)))))) , __T2588); { _ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS2_SaIS2_EEEEEvT_S8_(__T2589, __T2590); } }

}

else  {
{ __T2591 = (((__x->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start); __T2592 = ((((__x->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start) + (_ZNKSt6vectorI6float3SaIS0_EE4sizeEv(((const struct _ZSt6vectorI6float3SaIS0_EE *)this)))); __T2593 = (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start); { ; (vertex_type *)(_ZSt13__copy_move_aILb0EP6float3S1_ET1_T0_S3_S2_(__T2591, __T2592, __T2593)); } }

{ __T2594 = ((((__x->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start) + (_ZNKSt6vectorI6float3SaIS0_EE4sizeEv(((const struct _ZSt6vectorI6float3SaIS0_EE *)this)))); __T2595 = (((__x->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish); __T2596 = (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish); { _ZSt18uninitialized_copyIP6float3S1_ET0_T_S3_S2_(__T2594, __T2595, __T2596); } }



} }
(((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish) = ((((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start) + __cuda_local_var_33239_20_non_const___xlen);
}
return this;
}
__asm__(".align 2");
# 643 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNKSt6vectorI6float3SaIS0_EE4sizeEv */ __inline__ _ZNSt6vectorI6float3SaIS0_EE9size_typeE _ZNKSt6vectorI6float3SaIS0_EE4sizeEv( const struct _ZSt6vectorI6float3SaIS0_EE *const this)
{ return (_ZNSt6vectorI6float3SaIS0_EE9size_typeE)((((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish) - (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start)); }
__asm__(".align 2");
# 768 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EEixEm */ __inline__ _ZNSt6vectorI6float3SaIS0_EE9referenceE _ZNSt6vectorI6float3SaIS0_EEixEm( struct _ZSt6vectorI6float3SaIS0_EE *const this,  _ZNSt6vectorI6float3SaIS0_EE9size_typeE __n)
{ return (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start) + __n; }
__asm__(".align 2");
# 837 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EE5frontEv */ __inline__ _ZNSt6vectorI6float3SaIS0_EE9referenceE _ZNSt6vectorI6float3SaIS0_EE5frontEv( struct _ZSt6vectorI6float3SaIS0_EE *const this)
{  struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE __T2607;
 _ZNSt6vectorI6float3SaIS0_EE8iteratorE __T2608;
 _ZNSt6vectorI6float3SaIS0_EE8iteratorE __T2609;
 const struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE *__T2610;
# 838 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
return (__T2610 = ((__T2607 = (*((const struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE *)((__T2608 = (((void)((__T2609._M_current) = (*(((const _ZNSt6vectorI6float3SaIS0_EE7pointerE *)&(((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start)))))) , __T2609)) , (&__T2608))))) , ((const struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE *)&__T2607))) , (__T2610->_M_current); }
__asm__(".align 2");
# 317 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_ */ void _ZNSt6vectorI6float3SaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_( struct _ZSt6vectorI6float3SaIS0_EE *const this,  _ZNSt6vectorI6float3SaIS0_EE8iteratorE __position,  const _ZNSt6vectorI6float3SaIS0_EE10value_typeE *__x)

{
if ((((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish) != (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_end_of_storage))
{  _ZN9__gnu_cxx14__alloc_traitsISaI6float3EE7pointerE __T2611;
 const _ZNSt6vectorI6float3SaIS0_EE10value_typeE *__T2612;
 void *__T2613;
 void *__T2614;
 struct float3 *__T2615;
 vertex_type *__T2616;
 vertex_type *__T2617;
 vertex_type *__T2618;
# 327 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
 vertex_type __cuda_local_var_33358_8_non_const___x_copy;
# 322 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
{ __T2611 = (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish); __T2612 = ((const _ZNSt6vectorI6float3SaIS0_EE10value_typeE *)((((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish) - 1)); { { (vertex_type *)((__T2615 = ((struct float3 *)((__T2614 = (__T2613 = ((void *)__T2611))) , __T2614))) ? (((*__T2615) = ((*(vertex_type *)__T2612))) , __T2615) : ((struct float3 *)0LL)); } } }


++(((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish);

__cuda_local_var_33358_8_non_const___x_copy = ((*(vertex_type *)__x));

{ __T2616 = (*(&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE *)&__position))._M_current))); __T2617 = ((((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish) - 2); __T2618 = ((((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish) - 1); { ; (vertex_type *)(_ZSt22__copy_move_backward_aILb0EP6float3S1_ET1_T0_S3_S2_(__T2616, __T2617, __T2618)); } }



(*(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE *)&__position))._M_current)) = __cuda_local_var_33358_8_non_const___x_copy;



}

else  { static struct __C5 __T2619[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
 _ZNSt6vectorI6float3SaIS0_EE9size_typeE __T2620;
 const char *__T2621;
 _ZNSt6vectorI6float3SaIS0_EE9size_typeE __T2622;
 _ZNSt6vectorI6float3SaIS0_EE9size_typeE __T2623;
 struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE __T2624;
 _ZNSt6vectorI6float3SaIS0_EE8iteratorE __T2625;
 _ZNSt6vectorI6float3SaIS0_EE8iteratorE __T2626;
 const struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE *__T2627;
 struct __C8 __T2628;
 void *__T2629;
 void *__T2630;
 struct float3 *__T2631;
 vertex_type *__T2632;
 vertex_type *__T2633;
 vertex_type *__T2634;
 vertex_type *__T2635;
 vertex_type *__T2636;
 vertex_type *__T2637;
 _ZNSt12_Vector_baseI6float3SaIS0_EE7pointerE __T2638;
 _ZSt6size_t __T2639;
# 340 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
 _ZNSt6vectorI6float3SaIS0_EE9size_typeE __cuda_local_var_33371_20_non_const___len;

 _ZNSt6vectorI6float3SaIS0_EE9size_typeE __cuda_local_var_33373_20_non_const___elems_before;
 _ZNSt6vectorI6float3SaIS0_EE7pointerE __cuda_local_var_33374_12_non_const___new_start;
 _ZNSt6vectorI6float3SaIS0_EE7pointerE __cuda_local_var_33375_12_non_const___new_finish;
# 340 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
__cuda_local_var_33371_20_non_const___len = (((__T2620 = 1UL) , (void)(__T2621 = ((const char *)"vector::_M_insert_aux"))) , ((((((((const struct _ZN9__gnu_cxx13new_allocatorI6float3EE *)0LL) , 1537228672809129301UL) - ((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI6float3SaIS0_EE *)this)->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish) - (((((const struct _ZSt6vectorI6float3SaIS0_EE *)this)->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start)))) < __T2620) ? (_ZSt20__throw_length_errorPKc(__T2621)) : ((void)0)) , (void)(__T2623 = (((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI6float3SaIS0_EE *)this)->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish) - (((((const struct _ZSt6vectorI6float3SaIS0_EE *)this)->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start))) + (*(_ZSt3maxImERKT_S2_S2_(((__T2622 = ((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI6float3SaIS0_EE *)this)->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish) - (((((const struct _ZSt6vectorI6float3SaIS0_EE *)this)->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start)))) , (((const _ZNSt6vectorI6float3SaIS0_EE9size_typeE *)&__T2622))), (((const _ZNSt6vectorI6float3SaIS0_EE9size_typeE *)&__T2620)))))))) , (((__T2623 < ((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI6float3SaIS0_EE *)this)->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish) - (((((const struct _ZSt6vectorI6float3SaIS0_EE *)this)->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start)))) || (__T2623 > (((const struct _ZN9__gnu_cxx13new_allocatorI6float3EE *)0LL) , 1537228672809129301UL))) ? (((const struct _ZN9__gnu_cxx13new_allocatorI6float3EE *)0LL) , 1537228672809129301UL) : __T2623)));

__cuda_local_var_33373_20_non_const___elems_before = ((_ZNSt6vectorI6float3SaIS0_EE9size_typeE)((__T2627 = ((__T2624 = (*((const struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE *)((__T2625 = (((void)((__T2626._M_current) = (*(((const _ZNSt6vectorI6float3SaIS0_EE7pointerE *)&(((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start)))))) , __T2626)) , (&__T2625))))) , ((const struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE *)&__T2624))) , ((*(&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE *)&__position))._M_current))) - (*(&(__T2627->_M_current))))));
__cuda_local_var_33374_12_non_const___new_start = ((__cuda_local_var_33371_20_non_const___len != 0UL) ? (((__cuda_local_var_33371_20_non_const___len > 1537228672809129301UL) ? (_ZSt17__throw_bad_allocv()) : ((void)0)) , ((vertex_type *)(_Znwm((__cuda_local_var_33371_20_non_const___len * 12UL))))) : ((_ZN9__gnu_cxx13new_allocatorI6float3E7pointerE)0LL));
__cuda_local_var_33375_12_non_const___new_finish = __cuda_local_var_33374_12_non_const___new_start; { (__T2628.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T2628); (__T2628.kind) = ((unsigned char)5U); (((__T2628.variant).try_block).catch_entries) = (__T2619); (((__T2628.variant).try_block).rtinfo) = ((void *)0LL); (((__T2628.variant).try_block).region_number) = __eh_curr_region;
if ((setjmp(((((__T2628.variant).try_block).setjmp_buffer)))) == 0)
{ __T2640:;




{ (vertex_type *)((__T2631 = ((struct float3 *)((__T2630 = (__T2629 = ((void *)(__cuda_local_var_33374_12_non_const___new_start + __cuda_local_var_33373_20_non_const___elems_before)))) , __T2630))) ? (((*__T2631) = ((*(vertex_type *)__x))) , __T2631) : ((struct float3 *)0LL)); }
# 358 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
__cuda_local_var_33375_12_non_const___new_finish = ((_ZNSt6vectorI6float3SaIS0_EE7pointerE)0LL);

__cuda_local_var_33375_12_non_const___new_finish = (((__T2632 = (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start)) , (void)(__T2633 = (*(&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE *)&__position))._M_current))))) , (_ZSt18uninitialized_copyIP6float3S1_ET0_T_S3_S2_(__T2632, __T2633, __cuda_local_var_33374_12_non_const___new_start)));




++__cuda_local_var_33375_12_non_const___new_finish;

__cuda_local_var_33375_12_non_const___new_finish = (((__T2634 = (*(&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE *)&__position))._M_current)))) , (void)(__T2635 = (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish))) , (_ZSt18uninitialized_copyIP6float3S1_ET0_T_S3_S2_(__T2634, __T2635, __cuda_local_var_33375_12_non_const___new_finish)));



}
else  if (__catch_clause_number == 1)
{ __exception_caught();
if (!(__cuda_local_var_33375_12_non_const___new_finish)) {
{ (void)(__cuda_local_var_33374_12_non_const___new_start + __cuda_local_var_33373_20_non_const___elems_before); } } else  {


{ _ZSt8_DestroyIP6float3EvT_S2_(__cuda_local_var_33374_12_non_const___new_start, __cuda_local_var_33375_12_non_const___new_finish); } }
{ if (__cuda_local_var_33374_12_non_const___new_start) { { _ZdlPv(((void *)__cuda_local_var_33374_12_non_const___new_start)); } } }
__rethrow();
} else  { __suppress_optim_on_vars_in_try((&__cuda_local_var_33375_12_non_const___new_finish)); goto __T2640; } __curr_eh_stack_entry = (__T2628.next); }
{ __T2636 = (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start); __T2637 = (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish); { _ZSt8_DestroyIP6float3EvT_S2_(__T2636, __T2637); } }

{ __T2638 = (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start); __T2639 = ((_ZSt6size_t)((((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_end_of_storage) - (((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start))); { if (__T2638) { { _ZdlPv(((void *)__T2638)); } } } }


(((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_start) = __cuda_local_var_33374_12_non_const___new_start;
(((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish) = __cuda_local_var_33375_12_non_const___new_finish;
(((this->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_end_of_storage) = (__cuda_local_var_33374_12_non_const___new_start + __cuda_local_var_33371_20_non_const___len);
} 
}
__asm__(".align 2");
# 1124 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6float3SaIS0_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS0_S2_EEEEPS0_mT_SA_ */ __inline__ _ZNSt6vectorI6float3SaIS0_EE7pointerE _ZNSt6vectorI6float3SaIS0_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS0_S2_EEEEPS0_mT_SA_( struct _ZSt6vectorI6float3SaIS0_EE *const this,  _ZNSt6vectorI6float3SaIS0_EE9size_typeE __n, 
struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __first,  struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __last)
{ static struct __C5 __T2641[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
 struct __C8 __T2642;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2643;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2644;
 _ZNSt6vectorI6float3SaIS0_EE7pointerE __T2645;
# 1127 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 _ZNSt6vectorI6float3SaIS0_EE7pointerE __cuda_local_var_32037_12_non_const___result;
# 1127 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
__cuda_local_var_32037_12_non_const___result = ((__n != 0UL) ? (((__n > 1537228672809129301UL) ? (_ZSt17__throw_bad_allocv()) : ((void)0)) , ((vertex_type *)(_Znwm((__n * 12UL))))) : ((_ZN9__gnu_cxx13new_allocatorI6float3E7pointerE)0LL)); { (__T2642.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T2642); (__T2642.kind) = ((unsigned char)5U); (((__T2642.variant).try_block).catch_entries) = (__T2641); (((__T2642.variant).try_block).rtinfo) = ((void *)0LL); (((__T2642.variant).try_block).region_number) = __eh_curr_region;
if ((setjmp(((((__T2642.variant).try_block).setjmp_buffer)))) == 0)
{;
{ __T2643 = __first; __T2644 = __last; { _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS2_SaIS2_EEEEPS2_ET0_T_SB_SA_(__T2643, __T2644, __cuda_local_var_32037_12_non_const___result); } } {

__T2645 = __cuda_local_var_32037_12_non_const___result; __curr_eh_stack_entry = (__T2642.next); return __T2645; }
}
else  if (__catch_clause_number == 1)
{ __exception_caught();
{ if (__cuda_local_var_32037_12_non_const___result) { { _ZdlPv(((void *)__cuda_local_var_32037_12_non_const___result)); } } }
__rethrow();
} __curr_eh_stack_entry = (__T2642.next); }
}
__asm__(".align 2");
# 64 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC1Ev */ __inline__ void _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC1Ev( struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *const this)
{ (this->_M_stream) = ((_ZNSt16istream_iteratorI6float3cSt11char_traitsIcElE12istream_typeE *)0LL); memset(((void *)(&(this->_M_value))), 0, 12UL); (this->_M_ok) = ((char)0);  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC2Ev */ __inline__ void _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC2Ev( struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *const this) {  _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC1Ev(this);  }
__asm__(".align 2");
# 68 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC1ERSi */ __inline__ void _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC1ERSi( struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *const this,  _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElE12istream_typeE *__s)

{  const struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T2646;
 const struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T2647;
# 70 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
(this->_M_stream) = __s; { (this->_M_ok) = (((this->_M_stream) && ((__T2646 = ((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)((this->_M_stream) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)(this->_M_stream)) + (((this->_M_stream)->__vptr)[(-3L)]))) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL)))) , ((void *)(((char)(((int)((enum _ZSt12_Ios_Iostate)(((int)((__T2646->__b_St8ios_base)._M_streambuf_state)) & ((int)((enum _ZSt12_Ios_Iostate)(((int)_ZSt9_S_badbit) | ((int)_ZSt10_S_failbit))))))) != 0)) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T2646))))) ? ((char)1) : ((char)0)); if (this->_M_ok) { _ZrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_R6float3((this->_M_stream), (&(this->_M_value))); (this->_M_ok) = (((__T2647 = ((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)((this->_M_stream) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)(this->_M_stream)) + (((this->_M_stream)->__vptr)[(-3L)]))) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL)))) , ((void *)(((char)(((int)((enum _ZSt12_Ios_Iostate)(((int)((__T2647->__b_St8ios_base)._M_streambuf_state)) & ((int)((enum _ZSt12_Ios_Iostate)(((int)_ZSt9_S_badbit) | ((int)_ZSt10_S_failbit))))))) != 0)) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T2647)))) ? ((char)1) : ((char)0)); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC2ERSi */ __inline__ void _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC2ERSi( struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *const this,  _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElE12istream_typeE *__T2648) {  _ZNSt16istream_iteratorI6float3cSt11char_traitsIcElEC1ERSi(this, __T2648);  }
__asm__(".align 2");
# 104 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI5uint4EC1Ev */ __inline__ void _ZNSaI5uint4EC1Ev( struct _ZSaI5uint4E *const this) { { _ZN9__gnu_cxx13new_allocatorI5uint4EC1Ev(((struct _ZN9__gnu_cxx13new_allocatorI5uint4EE *)this)); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI5uint4EC2Ev */ __inline__ void _ZNSaI5uint4EC2Ev( struct _ZSaI5uint4E *const this) {  _ZNSaI5uint4EC1Ev(this);  }
__asm__(".align 2");




 __attribute__((__weak__)) /* COMDAT group: _ZNSaI5uint4ED1Ev */ __inline__ void _ZNSaI5uint4ED1Ev( struct _ZSaI5uint4E *const this) {  { { _ZN9__gnu_cxx13new_allocatorI5uint4ED1Ev(((struct _ZN9__gnu_cxx13new_allocatorI5uint4EE *)this)); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI5uint4ED2Ev */ __inline__ void _ZNSaI5uint4ED2Ev( struct _ZSaI5uint4E *const this) {  _ZNSaI5uint4ED1Ev(this);  }
__asm__(".align 2");
# 125 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI5uint4SaIS0_EEC1Ev */ __inline__ void _ZNSt12_Vector_baseI5uint4SaIS0_EEC1Ev( struct _ZSt12_Vector_baseI5uint4SaIS0_EE *const this)
{ { { _ZNSaI5uint4EC1Ev(((struct _ZSaI5uint4E *)(&(this->_M_impl)))); } ((this->_M_impl)._M_start) = ((_ZNSt12_Vector_baseI5uint4SaIS0_EE7pointerE)0LL); ((this->_M_impl)._M_finish) = ((_ZNSt12_Vector_baseI5uint4SaIS0_EE7pointerE)0LL); ((this->_M_impl)._M_end_of_storage) = ((_ZNSt12_Vector_baseI5uint4SaIS0_EE7pointerE)0LL); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI5uint4SaIS0_EEC2Ev */ __inline__ void _ZNSt12_Vector_baseI5uint4SaIS0_EEC2Ev( struct _ZSt12_Vector_baseI5uint4SaIS0_EE *const this) {  _ZNSt12_Vector_baseI5uint4SaIS0_EEC1Ev(this);  }
__asm__(".align 2");
# 160 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI5uint4SaIS0_EED1Ev */ __inline__ void _ZNSt12_Vector_baseI5uint4SaIS0_EED1Ev( struct _ZSt12_Vector_baseI5uint4SaIS0_EE *const this)
{  _ZNSt12_Vector_baseI5uint4SaIS0_EE7pointerE __T2649;
 _ZSt6size_t __T2650;
# 161 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
{ __T2649 = ((this->_M_impl)._M_start); __T2650 = ((_ZSt6size_t)(((this->_M_impl)._M_end_of_storage) - ((this->_M_impl)._M_start))); { if (__T2649) { { _ZdlPv(((void *)__T2649)); } } } } {
{ _ZNSaI5uint4ED1Ev(((struct _ZSaI5uint4E *)(&(this->_M_impl)))); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI5uint4SaIS0_EED2Ev */ __inline__ void _ZNSt12_Vector_baseI5uint4SaIS0_EED2Ev( struct _ZSt12_Vector_baseI5uint4SaIS0_EE *const this) {  _ZNSt12_Vector_baseI5uint4SaIS0_EED1Ev(this);  }
__asm__(".align 2");
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI5uint4SaIS0_EE12_Vector_implD1Ev */ __inline__ void _ZNSt12_Vector_baseI5uint4SaIS0_EE12_Vector_implD1Ev( struct _ZNSt12_Vector_baseI5uint4SaIS0_EE12_Vector_implE *const this) {  { { _ZNSaI5uint4ED1Ev(((struct _ZSaI5uint4E *)this)); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI5uint4SaIS0_EE12_Vector_implD2Ev */ __inline__ void _ZNSt12_Vector_baseI5uint4SaIS0_EE12_Vector_implD2Ev( struct _ZNSt12_Vector_baseI5uint4SaIS0_EE12_Vector_implE *const this) {  _ZNSaI5uint4ED1Ev(((struct _ZSaI5uint4E *)this));  }
__asm__(".align 2");
# 246 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI5uint4SaIS0_EEC1Ev */ __inline__ void _ZNSt6vectorI5uint4SaIS0_EEC1Ev( struct _ZSt6vectorI5uint4SaIS0_EE *const this)
{ { _ZNSt12_Vector_baseI5uint4SaIS0_EEC1Ev((&(this->__b_St12_Vector_baseI5uint4SaIS0_EE))); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI5uint4SaIS0_EEC2Ev */ __inline__ void _ZNSt6vectorI5uint4SaIS0_EEC2Ev( struct _ZSt6vectorI5uint4SaIS0_EE *const this) {  _ZNSt6vectorI5uint4SaIS0_EEC1Ev(this);  }
__asm__(".align 2");
# 402 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI5uint4SaIS0_EED1Ev */ __inline__ void _ZNSt6vectorI5uint4SaIS0_EED1Ev( struct _ZSt6vectorI5uint4SaIS0_EE *const this)
{  tri_type *__T2651;
 tri_type *__T2652;
# 403 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
{ __T2651 = (((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start); __T2652 = (((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish); { _ZSt8_DestroyIP5uint4EvT_S2_(__T2651, __T2652); } } {
{ _ZNSt12_Vector_baseI5uint4SaIS0_EED1Ev((&(this->__b_St12_Vector_baseI5uint4SaIS0_EE))); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI5uint4SaIS0_EED2Ev */ __inline__ void _ZNSt6vectorI5uint4SaIS0_EED2Ev( struct _ZSt6vectorI5uint4SaIS0_EE *const this) {  _ZNSt6vectorI5uint4SaIS0_EED1Ev(this);  }
__asm__(".align 2");
# 162 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI5uint4SaIS0_EEaSERKS2_ */ struct _ZSt6vectorI5uint4SaIS0_EE *_ZNSt6vectorI5uint4SaIS0_EEaSERKS2_( struct _ZSt6vectorI5uint4SaIS0_EE *const this,  const struct _ZSt6vectorI5uint4SaIS0_EE *__x)
{
if (__x != ((const struct _ZSt6vectorI5uint4SaIS0_EE *)this))
{  _ZNSt6vectorI5uint4SaIS0_EE14const_iteratorE __T2653;
 _ZNSt6vectorI5uint4SaIS0_EE13const_pointerE __T2654;
 const _ZNSt6vectorI5uint4SaIS0_EE13const_pointerE *__T2655;
 _ZNSt6vectorI5uint4SaIS0_EE14const_iteratorE __T2656;
 _ZNSt6vectorI5uint4SaIS0_EE13const_pointerE __T2657;
 const _ZNSt6vectorI5uint4SaIS0_EE13const_pointerE *__T2658;
 _ZNSt6vectorI5uint4SaIS0_EE8iteratorE __T2659;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2660;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2661;
 struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE __T2662;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2663;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2664;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2665;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2666;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2667;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2668;
 struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE __T2669;
 struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE __T2670;
 tri_type *__T2671;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2672;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2673;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2674;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2675;
 struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE __T2676;
 struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE __T2677;
 const _ZNSt6vectorI5uint4SaIS0_EE7pointerE *__T2678;
 _ZNSt6vectorI5uint4SaIS0_EE8iteratorE __T2679;
 struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE __T2680;
 struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE __T2681;
 tri_type *__T2682;
 tri_type *__T2683;
 tri_type *__T2684;
 tri_type *__T2685;
 tri_type *__T2686;
 tri_type *__T2687;
# 182 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
 _ZNSt6vectorI5uint4SaIS0_EE9size_typeE __cuda_local_var_33239_20_non_const___xlen;
# 182 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
__cuda_local_var_33239_20_non_const___xlen = (_ZNKSt6vectorI5uint4SaIS0_EE4sizeEv(__x));
if (__cuda_local_var_33239_20_non_const___xlen > ((_ZNSt6vectorI5uint4SaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI5uint4SaIS0_EE *)this)->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_end_of_storage) - (((((const struct _ZSt6vectorI5uint4SaIS0_EE *)this)->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start))))
{  _ZNSt6vectorI5uint4SaIS0_EE14const_iteratorE __T2688;
 _ZNSt6vectorI5uint4SaIS0_EE13const_pointerE __T2689;
 const _ZNSt6vectorI5uint4SaIS0_EE13const_pointerE *__T2690;
 _ZNSt6vectorI5uint4SaIS0_EE14const_iteratorE __T2691;
 _ZNSt6vectorI5uint4SaIS0_EE13const_pointerE __T2692;
 const _ZNSt6vectorI5uint4SaIS0_EE13const_pointerE *__T2693;
 tri_type *__T2694;
 tri_type *__T2695;
 _ZNSt12_Vector_baseI5uint4SaIS0_EE7pointerE __T2696;
 _ZSt6size_t __T2697;
# 185 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
 _ZNSt6vectorI5uint4SaIS0_EE7pointerE __cuda_local_var_33242_16_non_const___tmp;
# 185 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
__cuda_local_var_33242_16_non_const___tmp = (_ZNSt6vectorI5uint4SaIS0_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS0_S2_EEEEPS0_mT_SA_(this, __cuda_local_var_33239_20_non_const___xlen, (((void)((__T2690 = ((__T2689 = ((_ZNSt6vectorI5uint4SaIS0_EE13const_pointerE)(((__x->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start))) , (((const _ZNSt6vectorI5uint4SaIS0_EE13const_pointerE *)&__T2689)))) , (void)((__T2688._M_current) = (*__T2690)))) , __T2688), (((void)((__T2693 = ((__T2692 = ((_ZNSt6vectorI5uint4SaIS0_EE13const_pointerE)(((__x->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish))) , (((const _ZNSt6vectorI5uint4SaIS0_EE13const_pointerE *)&__T2692)))) , (void)((__T2691._M_current) = (*__T2693)))) , __T2691)));

{ __T2694 = (((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start); __T2695 = (((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish); { _ZSt8_DestroyIP5uint4EvT_S2_(__T2694, __T2695); } }

{ __T2696 = (((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start); __T2697 = ((_ZSt6size_t)((((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_end_of_storage) - (((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start))); { if (__T2696) { { _ZdlPv(((void *)__T2696)); } } } }


(((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start) = __cuda_local_var_33242_16_non_const___tmp;
(((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_end_of_storage) = ((((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start) + __cuda_local_var_33239_20_non_const___xlen);
} else  {
if ((_ZNKSt6vectorI5uint4SaIS0_EE4sizeEv(((const struct _ZSt6vectorI5uint4SaIS0_EE *)this))) >= __cuda_local_var_33239_20_non_const___xlen)
{
{ __T2680 = ((((__T2660 = (((void)((__T2655 = ((__T2654 = ((_ZNSt6vectorI5uint4SaIS0_EE13const_pointerE)(((__x->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start))) , (((const _ZNSt6vectorI5uint4SaIS0_EE13const_pointerE *)&__T2654)))) , (void)((__T2653._M_current) = (*__T2655)))) , __T2653)) , (void)(__T2661 = (((void)((__T2658 = ((__T2657 = ((_ZNSt6vectorI5uint4SaIS0_EE13const_pointerE)(((__x->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish))) , (((const _ZNSt6vectorI5uint4SaIS0_EE13const_pointerE *)&__T2657)))) , (void)((__T2656._M_current) = (*__T2658)))) , __T2656))) , (void)(__T2662 = (((void)((__T2659._M_current) = (*(((const _ZNSt6vectorI5uint4SaIS0_EE7pointerE *)&(((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start)))))) , __T2659))) , ((((__T2667 = ((__T2663 = __T2660) , ((__T2664 = __T2663) , __T2664))) , (void)(__T2668 = ((__T2665 = __T2661) , ((__T2666 = __T2665) , __T2666)))) , (void)(__T2669 = __T2662)) , (((void)((__T2678 = ((__T2671 = (_ZSt13__copy_move_aILb0EPK5uint4PS0_ET1_T0_S5_S4_(((__T2672 = __T2667) , ((__T2673 = __T2672) , (*((const _ZNSt6vectorI5uint4SaIS0_EE13const_pointerE *)&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE *)&__T2673))._M_current))))), ((__T2674 = __T2668) , ((__T2675 = __T2674) , (*((const _ZNSt6vectorI5uint4SaIS0_EE13const_pointerE *)&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE *)&__T2675))._M_current))))), ((__T2676 = __T2669) , ((__T2677 = __T2676) , (*((const _ZNSt6vectorI5uint4SaIS0_EE7pointerE *)&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE *)&__T2677))._M_current)))))))) , (((const _ZNSt6vectorI5uint4SaIS0_EE7pointerE *)&__T2671)))) , (void)((__T2670._M_current) = (*__T2678)))) , __T2670))); __T2681 = (((void)((__T2679._M_current) = (*(((const _ZNSt6vectorI5uint4SaIS0_EE7pointerE *)&(((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish)))))) , __T2679); { _ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS2_SaIS2_EEEEEvT_S8_(__T2680, __T2681); } }

}

else  {
{ __T2682 = (((__x->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start); __T2683 = ((((__x->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start) + (_ZNKSt6vectorI5uint4SaIS0_EE4sizeEv(((const struct _ZSt6vectorI5uint4SaIS0_EE *)this)))); __T2684 = (((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start); { ; (tri_type *)(_ZSt13__copy_move_aILb0EP5uint4S1_ET1_T0_S3_S2_(__T2682, __T2683, __T2684)); } }

{ __T2685 = ((((__x->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start) + (_ZNKSt6vectorI5uint4SaIS0_EE4sizeEv(((const struct _ZSt6vectorI5uint4SaIS0_EE *)this)))); __T2686 = (((__x->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish); __T2687 = (((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish); { _ZSt18uninitialized_copyIP5uint4S1_ET0_T_S3_S2_(__T2685, __T2686, __T2687); } }



} }
(((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish) = ((((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start) + __cuda_local_var_33239_20_non_const___xlen);
}
return this;
}
__asm__(".align 2");
# 643 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNKSt6vectorI5uint4SaIS0_EE4sizeEv */ __inline__ _ZNSt6vectorI5uint4SaIS0_EE9size_typeE _ZNKSt6vectorI5uint4SaIS0_EE4sizeEv( const struct _ZSt6vectorI5uint4SaIS0_EE *const this)
{ return (_ZNSt6vectorI5uint4SaIS0_EE9size_typeE)((((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish) - (((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start)); }
__asm__(".align 2");
# 768 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI5uint4SaIS0_EEixEm */ __inline__ _ZNSt6vectorI5uint4SaIS0_EE9referenceE _ZNSt6vectorI5uint4SaIS0_EEixEm( struct _ZSt6vectorI5uint4SaIS0_EE *const this,  _ZNSt6vectorI5uint4SaIS0_EE9size_typeE __n)
{ return (((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start) + __n; }
__asm__(".align 2");
# 317 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI5uint4SaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_ */ void _ZNSt6vectorI5uint4SaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_( struct _ZSt6vectorI5uint4SaIS0_EE *const this,  _ZNSt6vectorI5uint4SaIS0_EE8iteratorE __position,  const _ZNSt6vectorI5uint4SaIS0_EE10value_typeE *__x)

{
if ((((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish) != (((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_end_of_storage))
{  _ZN9__gnu_cxx14__alloc_traitsISaI5uint4EE7pointerE __T2698;
 const _ZNSt6vectorI5uint4SaIS0_EE10value_typeE *__T2699;
 void *__T2700;
 void *__T2701;
 struct uint4 *__T2702;
 tri_type *__T2703;
 tri_type *__T2704;
 tri_type *__T2705;
# 327 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
 tri_type __cuda_local_var_33358_8_non_const___x_copy;
# 322 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
{ __T2698 = (((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish); __T2699 = ((const _ZNSt6vectorI5uint4SaIS0_EE10value_typeE *)((((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish) - 1)); { { (tri_type *)((__T2702 = ((struct uint4 *)((__T2701 = (__T2700 = ((void *)__T2698))) , __T2701))) ? (((*__T2702) = ((*(tri_type *)__T2699))) , __T2702) : ((struct uint4 *)0LL)); } } }


++(((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish);

__cuda_local_var_33358_8_non_const___x_copy = ((*(tri_type *)__x));

{ __T2703 = (*(&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE *)&__position))._M_current))); __T2704 = ((((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish) - 2); __T2705 = ((((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish) - 1); { ; (tri_type *)(_ZSt22__copy_move_backward_aILb0EP5uint4S1_ET1_T0_S3_S2_(__T2703, __T2704, __T2705)); } }



(*(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE *)&__position))._M_current)) = __cuda_local_var_33358_8_non_const___x_copy;



}

else  { static struct __C5 __T2706[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
 _ZNSt6vectorI5uint4SaIS0_EE9size_typeE __T2707;
 const char *__T2708;
 _ZNSt6vectorI5uint4SaIS0_EE9size_typeE __T2709;
 _ZNSt6vectorI5uint4SaIS0_EE9size_typeE __T2710;
 struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE __T2711;
 _ZNSt6vectorI5uint4SaIS0_EE8iteratorE __T2712;
 _ZNSt6vectorI5uint4SaIS0_EE8iteratorE __T2713;
 const struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE *__T2714;
 struct __C8 __T2715;
 void *__T2716;
 void *__T2717;
 struct uint4 *__T2718;
 tri_type *__T2719;
 tri_type *__T2720;
 tri_type *__T2721;
 tri_type *__T2722;
 tri_type *__T2723;
 tri_type *__T2724;
 _ZNSt12_Vector_baseI5uint4SaIS0_EE7pointerE __T2725;
 _ZSt6size_t __T2726;
# 340 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
 _ZNSt6vectorI5uint4SaIS0_EE9size_typeE __cuda_local_var_33371_20_non_const___len;

 _ZNSt6vectorI5uint4SaIS0_EE9size_typeE __cuda_local_var_33373_20_non_const___elems_before;
 _ZNSt6vectorI5uint4SaIS0_EE7pointerE __cuda_local_var_33374_12_non_const___new_start;
 _ZNSt6vectorI5uint4SaIS0_EE7pointerE __cuda_local_var_33375_12_non_const___new_finish;
# 340 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
__cuda_local_var_33371_20_non_const___len = (((__T2707 = 1UL) , (void)(__T2708 = ((const char *)"vector::_M_insert_aux"))) , ((((((((const struct _ZN9__gnu_cxx13new_allocatorI5uint4EE *)0LL) , 1152921504606846975UL) - ((_ZNSt6vectorI5uint4SaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI5uint4SaIS0_EE *)this)->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish) - (((((const struct _ZSt6vectorI5uint4SaIS0_EE *)this)->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start)))) < __T2707) ? (_ZSt20__throw_length_errorPKc(__T2708)) : ((void)0)) , (void)(__T2710 = (((_ZNSt6vectorI5uint4SaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI5uint4SaIS0_EE *)this)->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish) - (((((const struct _ZSt6vectorI5uint4SaIS0_EE *)this)->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start))) + (*(_ZSt3maxImERKT_S2_S2_(((__T2709 = ((_ZNSt6vectorI5uint4SaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI5uint4SaIS0_EE *)this)->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish) - (((((const struct _ZSt6vectorI5uint4SaIS0_EE *)this)->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start)))) , (((const _ZNSt6vectorI6float3SaIS0_EE9size_typeE *)&__T2709))), (((const _ZNSt6vectorI6float3SaIS0_EE9size_typeE *)&__T2707)))))))) , (((__T2710 < ((_ZNSt6vectorI5uint4SaIS0_EE9size_typeE)((((((const struct _ZSt6vectorI5uint4SaIS0_EE *)this)->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish) - (((((const struct _ZSt6vectorI5uint4SaIS0_EE *)this)->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start)))) || (__T2710 > (((const struct _ZN9__gnu_cxx13new_allocatorI5uint4EE *)0LL) , 1152921504606846975UL))) ? (((const struct _ZN9__gnu_cxx13new_allocatorI5uint4EE *)0LL) , 1152921504606846975UL) : __T2710)));

__cuda_local_var_33373_20_non_const___elems_before = ((_ZNSt6vectorI5uint4SaIS0_EE9size_typeE)((__T2714 = ((__T2711 = (*((const struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE *)((__T2712 = (((void)((__T2713._M_current) = (*(((const _ZNSt6vectorI5uint4SaIS0_EE7pointerE *)&(((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start)))))) , __T2713)) , (&__T2712))))) , ((const struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE *)&__T2711))) , ((*(&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE *)&__position))._M_current))) - (*(&(__T2714->_M_current))))));
__cuda_local_var_33374_12_non_const___new_start = ((__cuda_local_var_33371_20_non_const___len != 0UL) ? (((__cuda_local_var_33371_20_non_const___len > 1152921504606846975UL) ? (_ZSt17__throw_bad_allocv()) : ((void)0)) , ((tri_type *)(_Znwm((__cuda_local_var_33371_20_non_const___len * 16UL))))) : ((_ZN9__gnu_cxx13new_allocatorI5uint4E7pointerE)0LL));
__cuda_local_var_33375_12_non_const___new_finish = __cuda_local_var_33374_12_non_const___new_start; { (__T2715.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T2715); (__T2715.kind) = ((unsigned char)5U); (((__T2715.variant).try_block).catch_entries) = (__T2706); (((__T2715.variant).try_block).rtinfo) = ((void *)0LL); (((__T2715.variant).try_block).region_number) = __eh_curr_region;
if ((setjmp(((((__T2715.variant).try_block).setjmp_buffer)))) == 0)
{ __T2727:;




{ (tri_type *)((__T2718 = ((struct uint4 *)((__T2717 = (__T2716 = ((void *)(__cuda_local_var_33374_12_non_const___new_start + __cuda_local_var_33373_20_non_const___elems_before)))) , __T2717))) ? (((*__T2718) = ((*(tri_type *)__x))) , __T2718) : ((struct uint4 *)0LL)); }
# 358 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/vector.tcc" 3
__cuda_local_var_33375_12_non_const___new_finish = ((_ZNSt6vectorI5uint4SaIS0_EE7pointerE)0LL);

__cuda_local_var_33375_12_non_const___new_finish = (((__T2719 = (((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start)) , (void)(__T2720 = (*(&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE *)&__position))._M_current))))) , (_ZSt18uninitialized_copyIP5uint4S1_ET0_T_S3_S2_(__T2719, __T2720, __cuda_local_var_33374_12_non_const___new_start)));




++__cuda_local_var_33375_12_non_const___new_finish;

__cuda_local_var_33375_12_non_const___new_finish = (((__T2721 = (*(&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE *)&__position))._M_current)))) , (void)(__T2722 = (((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish))) , (_ZSt18uninitialized_copyIP5uint4S1_ET0_T_S3_S2_(__T2721, __T2722, __cuda_local_var_33375_12_non_const___new_finish)));



}
else  if (__catch_clause_number == 1)
{ __exception_caught();
if (!(__cuda_local_var_33375_12_non_const___new_finish)) {
{ (void)(__cuda_local_var_33374_12_non_const___new_start + __cuda_local_var_33373_20_non_const___elems_before); } } else  {


{ _ZSt8_DestroyIP5uint4EvT_S2_(__cuda_local_var_33374_12_non_const___new_start, __cuda_local_var_33375_12_non_const___new_finish); } }
{ if (__cuda_local_var_33374_12_non_const___new_start) { { _ZdlPv(((void *)__cuda_local_var_33374_12_non_const___new_start)); } } }
__rethrow();
} else  { __suppress_optim_on_vars_in_try((&__cuda_local_var_33375_12_non_const___new_finish)); goto __T2727; } __curr_eh_stack_entry = (__T2715.next); }
{ __T2723 = (((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start); __T2724 = (((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish); { _ZSt8_DestroyIP5uint4EvT_S2_(__T2723, __T2724); } }

{ __T2725 = (((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start); __T2726 = ((_ZSt6size_t)((((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_end_of_storage) - (((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start))); { if (__T2725) { { _ZdlPv(((void *)__T2725)); } } } }


(((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_start) = __cuda_local_var_33374_12_non_const___new_start;
(((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish) = __cuda_local_var_33375_12_non_const___new_finish;
(((this->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_end_of_storage) = (__cuda_local_var_33374_12_non_const___new_start + __cuda_local_var_33371_20_non_const___len);
} 
}
__asm__(".align 2");
# 1124 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI5uint4SaIS0_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS0_S2_EEEEPS0_mT_SA_ */ __inline__ _ZNSt6vectorI5uint4SaIS0_EE7pointerE _ZNSt6vectorI5uint4SaIS0_EE20_M_allocate_and_copyIN9__gnu_cxx17__normal_iteratorIPKS0_S2_EEEEPS0_mT_SA_( struct _ZSt6vectorI5uint4SaIS0_EE *const this,  _ZNSt6vectorI5uint4SaIS0_EE9size_typeE __n, 
struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __first,  struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __last)
{ static struct __C5 __T2728[1] = {{((const struct __type_info *)0LL),((unsigned char)48U),((unsigned char *)0LL)}};
 struct __C8 __T2729;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2730;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2731;
 _ZNSt6vectorI5uint4SaIS0_EE7pointerE __T2732;
# 1127 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 _ZNSt6vectorI5uint4SaIS0_EE7pointerE __cuda_local_var_32037_12_non_const___result;
# 1127 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
__cuda_local_var_32037_12_non_const___result = ((__n != 0UL) ? (((__n > 1152921504606846975UL) ? (_ZSt17__throw_bad_allocv()) : ((void)0)) , ((tri_type *)(_Znwm((__n * 16UL))))) : ((_ZN9__gnu_cxx13new_allocatorI5uint4E7pointerE)0LL)); { (__T2729.next) = __curr_eh_stack_entry; __curr_eh_stack_entry = (&__T2729); (__T2729.kind) = ((unsigned char)5U); (((__T2729.variant).try_block).catch_entries) = (__T2728); (((__T2729.variant).try_block).rtinfo) = ((void *)0LL); (((__T2729.variant).try_block).region_number) = __eh_curr_region;
if ((setjmp(((((__T2729.variant).try_block).setjmp_buffer)))) == 0)
{;
{ __T2730 = __first; __T2731 = __last; { _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS2_SaIS2_EEEEPS2_ET0_T_SB_SA_(__T2730, __T2731, __cuda_local_var_32037_12_non_const___result); } } {

__T2732 = __cuda_local_var_32037_12_non_const___result; __curr_eh_stack_entry = (__T2729.next); return __T2732; }
}
else  if (__catch_clause_number == 1)
{ __exception_caught();
{ if (__cuda_local_var_32037_12_non_const___result) { { _ZdlPv(((void *)__cuda_local_var_32037_12_non_const___result)); } } }
__rethrow();
} __curr_eh_stack_entry = (__T2729.next); }
}
__asm__(".align 2");
# 64 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC1Ev */ __inline__ void _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC1Ev( struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *const this)
{ (this->_M_stream) = ((_ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElE12istream_typeE *)0LL); memset(((void *)(&(this->_M_value))), 0, 16UL); (this->_M_ok) = ((char)0);  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC2Ev */ __inline__ void _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC2Ev( struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *const this) {  _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC1Ev(this);  }
__asm__(".align 2");
# 68 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC1ERSi */ __inline__ void _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC1ERSi( struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *const this,  _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElE12istream_typeE *__s)

{  const struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T2733;
 const struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T2734;
# 70 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stream_iterator.h" 3
(this->_M_stream) = __s; { (this->_M_ok) = (((this->_M_stream) && ((__T2733 = ((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)((this->_M_stream) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)(this->_M_stream)) + (((this->_M_stream)->__vptr)[(-3L)]))) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL)))) , ((void *)(((char)(((int)((enum _ZSt12_Ios_Iostate)(((int)((__T2733->__b_St8ios_base)._M_streambuf_state)) & ((int)((enum _ZSt12_Ios_Iostate)(((int)_ZSt9_S_badbit) | ((int)_ZSt10_S_failbit))))))) != 0)) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T2733))))) ? ((char)1) : ((char)0)); if (this->_M_ok) { _ZrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_R5uint4((this->_M_stream), (&(this->_M_value))); (this->_M_ok) = (((__T2734 = ((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)((this->_M_stream) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)(this->_M_stream)) + (((this->_M_stream)->__vptr)[(-3L)]))) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL)))) , ((void *)(((char)(((int)((enum _ZSt12_Ios_Iostate)(((int)((__T2734->__b_St8ios_base)._M_streambuf_state)) & ((int)((enum _ZSt12_Ios_Iostate)(((int)_ZSt9_S_badbit) | ((int)_ZSt10_S_failbit))))))) != 0)) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T2734)))) ? ((char)1) : ((char)0)); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC2ERSi */ __inline__ void _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC2ERSi( struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *const this,  _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElE12istream_typeE *__T2735) {  _ZNSt16istream_iteratorI5uint4cSt11char_traitsIcElEC1ERSi(this, __T2735);  }
__asm__(".align 2");
# 643 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNKSt6vectorI6real44SaIS0_EE4sizeEv */ __inline__ _ZNSt6vectorI6real44SaIS0_EE9size_typeE _ZNKSt6vectorI6real44SaIS0_EE4sizeEv( const struct _ZSt6vectorI6real44SaIS0_EE *const this)
{ return (_ZNSt6vectorI6real44SaIS0_EE9size_typeE)((((this->__b_St12_Vector_baseI6real44SaIS0_EE)._M_impl)._M_finish) - (((this->__b_St12_Vector_baseI6real44SaIS0_EE)._M_impl)._M_start)); }
__asm__(".align 2");
# 845 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNKSt6vectorI6real44SaIS0_EE5frontEv */ __inline__ _ZNSt6vectorI6real44SaIS0_EE15const_referenceE _ZNKSt6vectorI6real44SaIS0_EE5frontEv( const struct _ZSt6vectorI6real44SaIS0_EE *const this)
{  struct _ZN9__gnu_cxx17__normal_iteratorIPK6real44St6vectorIS1_SaIS1_EEEE __T2736;
 _ZNSt6vectorI6real44SaIS0_EE14const_iteratorE __T2737;
 _ZNSt6vectorI6real44SaIS0_EE14const_iteratorE __T2738;
 _ZNSt6vectorI6real44SaIS0_EE13const_pointerE __T2739;
 const _ZNSt6vectorI6real44SaIS0_EE13const_pointerE *__T2740;
 const struct _ZN9__gnu_cxx17__normal_iteratorIPK6real44St6vectorIS1_SaIS1_EEEE *__T2741;
# 846 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
return (__T2741 = ((__T2736 = (*((const struct _ZN9__gnu_cxx17__normal_iteratorIPK6real44St6vectorIS1_SaIS1_EEEE *)((__T2737 = (((void)((__T2740 = ((__T2739 = ((_ZNSt6vectorI6real44SaIS0_EE13const_pointerE)(((this->__b_St12_Vector_baseI6real44SaIS0_EE)._M_impl)._M_start))) , (((const _ZNSt6vectorI6real44SaIS0_EE13const_pointerE *)&__T2739)))) , (void)((__T2738._M_current) = (*__T2740)))) , __T2738)) , (&__T2737))))) , ((const struct _ZN9__gnu_cxx17__normal_iteratorIPK6real44St6vectorIS1_SaIS1_EEEE *)&__T2736))) , (__T2741->_M_current); }
__asm__(".align 2");
# 768 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorIdSaIdEEixEm */ __inline__ _ZNSt6vectorIdSaIdEE9referenceE _ZNSt6vectorIdSaIdEEixEm( struct _ZSt6vectorIdSaIdEE *const this,  _ZNSt6vectorIdSaIdEE9size_typeE __n)
{ return (((this->__b_St12_Vector_baseIdSaIdEE)._M_impl)._M_start) + __n; }
__asm__(".align 2");
# 106 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI6uchar3EC1ERKS0_ */ __inline__ void _ZNSaI6uchar3EC1ERKS0_( struct _ZSaI6uchar3E *const this,  const struct _ZSaI6uchar3E *__a)
{ { _ZN9__gnu_cxx13new_allocatorI6uchar3EC1ERKS2_(((struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *)this), ((const struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *)((struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *)__a))); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI6uchar3EC2ERKS0_ */ __inline__ void _ZNSaI6uchar3EC2ERKS0_( struct _ZSaI6uchar3E *const this,  const struct _ZSaI6uchar3E *__T2742) {  _ZNSaI6uchar3EC1ERKS0_(this, __T2742);  }
__asm__(".align 2");

 __attribute__((__weak__)) /* COMDAT group: _ZNSaI6uchar3ED1Ev */ __inline__ void _ZNSaI6uchar3ED1Ev( struct _ZSaI6uchar3E *const this) {  { { _ZN9__gnu_cxx13new_allocatorI6uchar3ED1Ev(((struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *)this)); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI6uchar3ED2Ev */ __inline__ void _ZNSaI6uchar3ED2Ev( struct _ZSaI6uchar3E *const this) {  _ZNSaI6uchar3ED1Ev(this);  }
__asm__(".align 2");
# 135 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6uchar3SaIS0_EEC1EmRKS1_ */ __inline__ void _ZNSt12_Vector_baseI6uchar3SaIS0_EEC1EmRKS1_( struct _ZSt12_Vector_baseI6uchar3SaIS0_EE *const this,  _ZSt6size_t __n,  const _ZNSt12_Vector_baseI6uchar3SaIS0_EE14allocator_typeE *__a)

{ { { _ZNSaI6uchar3EC1ERKS0_(((struct _ZSaI6uchar3E *)(&(this->_M_impl))), __a); } ((this->_M_impl)._M_start) = ((_ZNSt12_Vector_baseI6uchar3SaIS0_EE7pointerE)0LL); ((this->_M_impl)._M_finish) = ((_ZNSt12_Vector_baseI6uchar3SaIS0_EE7pointerE)0LL); ((this->_M_impl)._M_end_of_storage) = ((_ZNSt12_Vector_baseI6uchar3SaIS0_EE7pointerE)0LL); } { ((this->_M_impl)._M_start) = ((__n != 0UL) ? (((__n > 6148914691236517205UL) ? (_ZSt17__throw_bad_allocv()) : ((void)0)) , ((_ZN9cuda_side10pixel_typeE *)(_Znwm((__n * 3UL))))) : ((_ZN9__gnu_cxx13new_allocatorI6uchar3E7pointerE)0LL)); ((this->_M_impl)._M_finish) = ((this->_M_impl)._M_start); ((this->_M_impl)._M_end_of_storage) = (((this->_M_impl)._M_start) + __n); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6uchar3SaIS0_EEC2EmRKS1_ */ __inline__ void _ZNSt12_Vector_baseI6uchar3SaIS0_EEC2EmRKS1_( struct _ZSt12_Vector_baseI6uchar3SaIS0_EE *const this,  _ZSt6size_t __T2743,  const _ZNSt12_Vector_baseI6uchar3SaIS0_EE14allocator_typeE *__T2744) {  _ZNSt12_Vector_baseI6uchar3SaIS0_EEC1EmRKS1_(this, __T2743, __T2744);  }
__asm__(".align 2");
# 160 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6uchar3SaIS0_EED1Ev */ __inline__ void _ZNSt12_Vector_baseI6uchar3SaIS0_EED1Ev( struct _ZSt12_Vector_baseI6uchar3SaIS0_EE *const this)
{  _ZNSt12_Vector_baseI6uchar3SaIS0_EE7pointerE __T2745;
 _ZSt6size_t __T2746;
# 161 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
{ __T2745 = ((this->_M_impl)._M_start); __T2746 = ((_ZSt6size_t)(((this->_M_impl)._M_end_of_storage) - ((this->_M_impl)._M_start))); { if (__T2745) { { _ZdlPv(((void *)__T2745)); } } } } {
{ _ZNSaI6uchar3ED1Ev(((struct _ZSaI6uchar3E *)(&(this->_M_impl)))); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6uchar3SaIS0_EED2Ev */ __inline__ void _ZNSt12_Vector_baseI6uchar3SaIS0_EED2Ev( struct _ZSt12_Vector_baseI6uchar3SaIS0_EE *const this) {  _ZNSt12_Vector_baseI6uchar3SaIS0_EED1Ev(this);  }
__asm__(".align 2");
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6uchar3SaIS0_EE12_Vector_implD1Ev */ __inline__ void _ZNSt12_Vector_baseI6uchar3SaIS0_EE12_Vector_implD1Ev( struct _ZNSt12_Vector_baseI6uchar3SaIS0_EE12_Vector_implE *const this) {  { { _ZNSaI6uchar3ED1Ev(((struct _ZSaI6uchar3E *)this)); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI6uchar3SaIS0_EE12_Vector_implD2Ev */ __inline__ void _ZNSt12_Vector_baseI6uchar3SaIS0_EE12_Vector_implD2Ev( struct _ZNSt12_Vector_baseI6uchar3SaIS0_EE12_Vector_implE *const this) {  _ZNSaI6uchar3ED1Ev(((struct _ZSaI6uchar3E *)this));  }
__asm__(".align 2");
# 402 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6uchar3SaIS0_EED1Ev */ __inline__ void _ZNSt6vectorI6uchar3SaIS0_EED1Ev( struct _ZSt6vectorI6uchar3SaIS0_EE *const this)
{  _ZN9cuda_side10pixel_typeE *__T2747;
 _ZN9cuda_side10pixel_typeE *__T2748;
# 403 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
{ __T2747 = (((this->__b_St12_Vector_baseI6uchar3SaIS0_EE)._M_impl)._M_start); __T2748 = (((this->__b_St12_Vector_baseI6uchar3SaIS0_EE)._M_impl)._M_finish); { _ZSt8_DestroyIP6uchar3EvT_S2_(__T2747, __T2748); } } {
{ _ZNSt12_Vector_baseI6uchar3SaIS0_EED1Ev((&(this->__b_St12_Vector_baseI6uchar3SaIS0_EE))); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI6uchar3SaIS0_EED2Ev */ __inline__ void _ZNSt6vectorI6uchar3SaIS0_EED2Ev( struct _ZSt6vectorI6uchar3SaIS0_EE *const this) {  _ZNSt6vectorI6uchar3SaIS0_EED1Ev(this);  }
__asm__(".align 2");
# 106 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI4int4EC1ERKS0_ */ __inline__ void _ZNSaI4int4EC1ERKS0_( struct _ZSaI4int4E *const this,  const struct _ZSaI4int4E *__a)
{ { _ZN9__gnu_cxx13new_allocatorI4int4EC1ERKS2_(((struct _ZN9__gnu_cxx13new_allocatorI4int4EE *)this), ((const struct _ZN9__gnu_cxx13new_allocatorI4int4EE *)((struct _ZN9__gnu_cxx13new_allocatorI4int4EE *)__a))); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI4int4EC2ERKS0_ */ __inline__ void _ZNSaI4int4EC2ERKS0_( struct _ZSaI4int4E *const this,  const struct _ZSaI4int4E *__T2749) {  _ZNSaI4int4EC1ERKS0_(this, __T2749);  }
__asm__(".align 2");

 __attribute__((__weak__)) /* COMDAT group: _ZNSaI4int4ED1Ev */ __inline__ void _ZNSaI4int4ED1Ev( struct _ZSaI4int4E *const this) {  { { _ZN9__gnu_cxx13new_allocatorI4int4ED1Ev(((struct _ZN9__gnu_cxx13new_allocatorI4int4EE *)this)); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSaI4int4ED2Ev */ __inline__ void _ZNSaI4int4ED2Ev( struct _ZSaI4int4E *const this) {  _ZNSaI4int4ED1Ev(this);  }
__asm__(".align 2");
# 135 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI4int4SaIS0_EEC1EmRKS1_ */ __inline__ void _ZNSt12_Vector_baseI4int4SaIS0_EEC1EmRKS1_( struct _ZSt12_Vector_baseI4int4SaIS0_EE *const this,  _ZSt6size_t __n,  const _ZNSt12_Vector_baseI4int4SaIS0_EE14allocator_typeE *__a)

{ { { _ZNSaI4int4EC1ERKS0_(((struct _ZSaI4int4E *)(&(this->_M_impl))), __a); } ((this->_M_impl)._M_start) = ((_ZNSt12_Vector_baseI4int4SaIS0_EE7pointerE)0LL); ((this->_M_impl)._M_finish) = ((_ZNSt12_Vector_baseI4int4SaIS0_EE7pointerE)0LL); ((this->_M_impl)._M_end_of_storage) = ((_ZNSt12_Vector_baseI4int4SaIS0_EE7pointerE)0LL); } { ((this->_M_impl)._M_start) = ((__n != 0UL) ? (((__n > 1152921504606846975UL) ? (_ZSt17__throw_bad_allocv()) : ((void)0)) , ((_ZN9cuda_side16partial_sum_typeE *)(_Znwm((__n * 16UL))))) : ((_ZN9__gnu_cxx13new_allocatorI4int4E7pointerE)0LL)); ((this->_M_impl)._M_finish) = ((this->_M_impl)._M_start); ((this->_M_impl)._M_end_of_storage) = (((this->_M_impl)._M_start) + __n); }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI4int4SaIS0_EEC2EmRKS1_ */ __inline__ void _ZNSt12_Vector_baseI4int4SaIS0_EEC2EmRKS1_( struct _ZSt12_Vector_baseI4int4SaIS0_EE *const this,  _ZSt6size_t __T2750,  const _ZNSt12_Vector_baseI4int4SaIS0_EE14allocator_typeE *__T2751) {  _ZNSt12_Vector_baseI4int4SaIS0_EEC1EmRKS1_(this, __T2750, __T2751);  }
__asm__(".align 2");
# 160 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI4int4SaIS0_EED1Ev */ __inline__ void _ZNSt12_Vector_baseI4int4SaIS0_EED1Ev( struct _ZSt12_Vector_baseI4int4SaIS0_EE *const this)
{  _ZNSt12_Vector_baseI4int4SaIS0_EE7pointerE __T2752;
 _ZSt6size_t __T2753;
# 161 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
{ __T2752 = ((this->_M_impl)._M_start); __T2753 = ((_ZSt6size_t)(((this->_M_impl)._M_end_of_storage) - ((this->_M_impl)._M_start))); { if (__T2752) { { _ZdlPv(((void *)__T2752)); } } } } {
{ _ZNSaI4int4ED1Ev(((struct _ZSaI4int4E *)(&(this->_M_impl)))); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI4int4SaIS0_EED2Ev */ __inline__ void _ZNSt12_Vector_baseI4int4SaIS0_EED2Ev( struct _ZSt12_Vector_baseI4int4SaIS0_EE *const this) {  _ZNSt12_Vector_baseI4int4SaIS0_EED1Ev(this);  }
__asm__(".align 2");
# 80 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI4int4SaIS0_EE12_Vector_implD1Ev */ __inline__ void _ZNSt12_Vector_baseI4int4SaIS0_EE12_Vector_implD1Ev( struct _ZNSt12_Vector_baseI4int4SaIS0_EE12_Vector_implE *const this) {  { { _ZNSaI4int4ED1Ev(((struct _ZSaI4int4E *)this)); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt12_Vector_baseI4int4SaIS0_EE12_Vector_implD2Ev */ __inline__ void _ZNSt12_Vector_baseI4int4SaIS0_EE12_Vector_implD2Ev( struct _ZNSt12_Vector_baseI4int4SaIS0_EE12_Vector_implE *const this) {  _ZNSaI4int4ED1Ev(((struct _ZSaI4int4E *)this));  }
__asm__(".align 2");
# 402 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI4int4SaIS0_EED1Ev */ __inline__ void _ZNSt6vectorI4int4SaIS0_EED1Ev( struct _ZSt6vectorI4int4SaIS0_EE *const this)
{  _ZN9cuda_side16partial_sum_typeE *__T2754;
 _ZN9cuda_side16partial_sum_typeE *__T2755;
# 403 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_vector.h" 3
{ __T2754 = (((this->__b_St12_Vector_baseI4int4SaIS0_EE)._M_impl)._M_start); __T2755 = (((this->__b_St12_Vector_baseI4int4SaIS0_EE)._M_impl)._M_finish); { _ZSt8_DestroyIP4int4EvT_S2_(__T2754, __T2755); } } {
{ _ZNSt12_Vector_baseI4int4SaIS0_EED1Ev((&(this->__b_St12_Vector_baseI4int4SaIS0_EE))); } }  }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZNSt6vectorI4int4SaIS0_EED2Ev */ __inline__ void _ZNSt6vectorI4int4SaIS0_EED2Ev( struct _ZSt6vectorI4int4SaIS0_EE *const this) {  _ZNSt6vectorI4int4SaIS0_EED1Ev(this);  }
# 296 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt11__copy_moveILb0ELb0ESt18input_iterator_tagE8__copy_mISt16istream_iteratorI6float3cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS4_SaIS4_EEEEET0_T_SE_SD_ */ __inline__ struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE _ZNSt11__copy_moveILb0ELb0ESt18input_iterator_tagE8__copy_mISt16istream_iteratorI6float3cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS4_SaIS4_EEEEET0_T_SE_SD_( struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__first,  struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__last,  struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE __result)
{  const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2756;
 _ZNSt6vectorI6float3SaIS0_EE15const_referenceE __T2757;
 struct _ZSt6vectorI6float3SaIS0_EE *__T2758;
 _ZN9__gnu_cxx14__alloc_traitsISaI6float3EE7pointerE __T2759;
 void *__T2760;
 void *__T2761;
 struct float3 *__T2762;
 _ZNSt6vectorI6float3SaIS0_EE8iteratorE __T2763;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2764;
 const struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T2765;
 const struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T2766;
# 298 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
for (; ((char)(!((char)((((int)(((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__first)->_M_ok)) == ((int)(((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__last)->_M_ok))) && ((!(((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__first)->_M_ok)) || ((((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__first)->_M_stream) == (((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__last)->_M_stream))))))); (&__result) , (void)((__T2764 = __first) , ((((__T2764->_M_ok) = (((__T2764->_M_stream) && ((__T2765 = ((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)((__T2764->_M_stream) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)(__T2764->_M_stream)) + (((__T2764->_M_stream)->__vptr)[(-3L)]))) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL)))) , ((void *)(((char)(((int)((enum _ZSt12_Ios_Iostate)(((int)((__T2765->__b_St8ios_base)._M_streambuf_state)) & ((int)((enum _ZSt12_Ios_Iostate)(((int)_ZSt9_S_badbit) | ((int)_ZSt10_S_failbit))))))) != 0)) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T2765))))) ? ((char)1) : ((char)0))) , (void)((__T2764->_M_ok) ? ((void)((_ZrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_R6float3((__T2764->_M_stream), (&(__T2764->_M_value)))) , (void)((__T2764->_M_ok) = (((__T2766 = ((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)((__T2764->_M_stream) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)(__T2764->_M_stream)) + (((__T2764->_M_stream)->__vptr)[(-3L)]))) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL)))) , ((void *)(((char)(((int)((enum _ZSt12_Ios_Iostate)(((int)((__T2766->__b_St8ios_base)._M_streambuf_state)) & ((int)((enum _ZSt12_Ios_Iostate)(((int)_ZSt9_S_badbit) | ((int)_ZSt10_S_failbit))))))) != 0)) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T2766)))) ? ((char)1) : ((char)0))))) : ((void)0))) , __T2764))) {
(__T2757 = ((__T2756 = ((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__first)) , (&(__T2756->_M_value)))) , (void)(((__T2758 = (__result.container)) , (void)(((((__T2758->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish) != (((__T2758->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_end_of_storage)) ? ((void)(((__T2759 = (((__T2758->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish)) , (void)((vertex_type *)((__T2762 = ((struct float3 *)((__T2761 = (__T2760 = ((void *)__T2759))) , __T2761))) ? (((*__T2762) = ((*(vertex_type *)__T2757))) , __T2762) : ((struct float3 *)0LL)))) , (void)(++(((__T2758->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish)))) : (_ZNSt6vectorI6float3SaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_(__T2758, (((void)((__T2763._M_current) = (*(((const _ZNSt6vectorI6float3SaIS0_EE7pointerE *)&(((__T2758->__b_St12_Vector_baseI6float3SaIS0_EE)._M_impl)._M_finish)))))) , __T2763), __T2757)))) , (&__result)); }
return __result;
}
# 296 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZNSt11__copy_moveILb0ELb0ESt18input_iterator_tagE8__copy_mISt16istream_iteratorI5uint4cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS4_SaIS4_EEEEET0_T_SE_SD_ */ __inline__ struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE _ZNSt11__copy_moveILb0ELb0ESt18input_iterator_tagE8__copy_mISt16istream_iteratorI5uint4cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS4_SaIS4_EEEEET0_T_SE_SD_( struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__first,  struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__last,  struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE __result)
{  const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2767;
 _ZNSt6vectorI5uint4SaIS0_EE15const_referenceE __T2768;
 struct _ZSt6vectorI5uint4SaIS0_EE *__T2769;
 _ZN9__gnu_cxx14__alloc_traitsISaI5uint4EE7pointerE __T2770;
 void *__T2771;
 void *__T2772;
 struct uint4 *__T2773;
 _ZNSt6vectorI5uint4SaIS0_EE8iteratorE __T2774;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2775;
 const struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T2776;
 const struct _ZSt9basic_iosIcSt11char_traitsIcEE *__T2777;
# 298 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
for (; ((char)(!((char)((((int)(((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__first)->_M_ok)) == ((int)(((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__last)->_M_ok))) && ((!(((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__first)->_M_ok)) || ((((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__first)->_M_stream) == (((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__last)->_M_stream))))))); (&__result) , (void)((__T2775 = __first) , ((((__T2775->_M_ok) = (((__T2775->_M_stream) && ((__T2776 = ((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)((__T2775->_M_stream) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)(__T2775->_M_stream)) + (((__T2775->_M_stream)->__vptr)[(-3L)]))) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL)))) , ((void *)(((char)(((int)((enum _ZSt12_Ios_Iostate)(((int)((__T2776->__b_St8ios_base)._M_streambuf_state)) & ((int)((enum _ZSt12_Ios_Iostate)(((int)_ZSt9_S_badbit) | ((int)_ZSt10_S_failbit))))))) != 0)) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T2776))))) ? ((char)1) : ((char)0))) , (void)((__T2775->_M_ok) ? ((void)((_ZrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_R5uint4((__T2775->_M_stream), (&(__T2775->_M_value)))) , (void)((__T2775->_M_ok) = (((__T2777 = ((const struct _ZSt9basic_iosIcSt11char_traitsIcEE *)((__T2775->_M_stream) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)(((char *)(__T2775->_M_stream)) + (((__T2775->_M_stream)->__vptr)[(-3L)]))) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL)))) , ((void *)(((char)(((int)((enum _ZSt12_Ios_Iostate)(((int)((__T2777->__b_St8ios_base)._M_streambuf_state)) & ((int)((enum _ZSt12_Ios_Iostate)(((int)_ZSt9_S_badbit) | ((int)_ZSt10_S_failbit))))))) != 0)) ? ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)0LL) : ((struct _ZSt9basic_iosIcSt11char_traitsIcEE *)__T2777)))) ? ((char)1) : ((char)0))))) : ((void)0))) , __T2775))) {
(__T2768 = ((__T2767 = ((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__first)) , (&(__T2767->_M_value)))) , (void)(((__T2769 = (__result.container)) , (void)(((((__T2769->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish) != (((__T2769->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_end_of_storage)) ? ((void)(((__T2770 = (((__T2769->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish)) , (void)((tri_type *)((__T2773 = ((struct uint4 *)((__T2772 = (__T2771 = ((void *)__T2770))) , __T2772))) ? (((*__T2773) = ((*(tri_type *)__T2768))) , __T2773) : ((struct uint4 *)0LL)))) , (void)(++(((__T2769->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish)))) : (_ZNSt6vectorI5uint4SaIS0_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS0_S2_EERKS0_(__T2769, (((void)((__T2774._M_current) = (*(((const _ZNSt6vectorI5uint4SaIS0_EE7pointerE *)&(((__T2769->__b_St12_Vector_baseI5uint4SaIS0_EE)._M_impl)._M_finish)))))) , __T2774), __T2768)))) , (&__result)); }
return __result;
}
__asm__(".align 2");
# 69 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/new_allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6float3EC1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6float3EC1Ev( struct _ZN9__gnu_cxx13new_allocatorI6float3EE *const this) {   }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6float3EC2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6float3EC2Ev( struct _ZN9__gnu_cxx13new_allocatorI6float3EE *const this) {  _ZN9__gnu_cxx13new_allocatorI6float3EC1Ev(this);  }
__asm__(".align 2");
# 71 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/new_allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6float3EC1ERKS2_ */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6float3EC1ERKS2_( struct _ZN9__gnu_cxx13new_allocatorI6float3EE *const this,  const struct _ZN9__gnu_cxx13new_allocatorI6float3EE *__T2778) {   }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6float3EC2ERKS2_ */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6float3EC2ERKS2_( struct _ZN9__gnu_cxx13new_allocatorI6float3EE *const this,  const struct _ZN9__gnu_cxx13new_allocatorI6float3EE *__T2779) {  _ZN9__gnu_cxx13new_allocatorI6float3EC1ERKS2_(this, __T2779);  }
__asm__(".align 2");

 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6float3ED1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6float3ED1Ev( struct _ZN9__gnu_cxx13new_allocatorI6float3EE *const this) {   }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6float3ED2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6float3ED2Ev( struct _ZN9__gnu_cxx13new_allocatorI6float3EE *const this) {  _ZN9__gnu_cxx13new_allocatorI6float3ED1Ev(this);  }
__asm__(".align 2");
# 69 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/new_allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI5uint4EC1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI5uint4EC1Ev( struct _ZN9__gnu_cxx13new_allocatorI5uint4EE *const this) {   }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI5uint4EC2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI5uint4EC2Ev( struct _ZN9__gnu_cxx13new_allocatorI5uint4EE *const this) {  _ZN9__gnu_cxx13new_allocatorI5uint4EC1Ev(this);  }
__asm__(".align 2");



 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI5uint4ED1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI5uint4ED1Ev( struct _ZN9__gnu_cxx13new_allocatorI5uint4EE *const this) {   }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI5uint4ED2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI5uint4ED2Ev( struct _ZN9__gnu_cxx13new_allocatorI5uint4EE *const this) {  _ZN9__gnu_cxx13new_allocatorI5uint4ED1Ev(this);  }
__asm__(".align 2");
# 69 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/new_allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6uchar3EC1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6uchar3EC1Ev( struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *const this) {   }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6uchar3EC2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6uchar3EC2Ev( struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *const this) {  _ZN9__gnu_cxx13new_allocatorI6uchar3EC1Ev(this);  }
__asm__(".align 2");
# 71 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/new_allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6uchar3EC1ERKS2_ */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6uchar3EC1ERKS2_( struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *const this,  const struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *__T2780) {   }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6uchar3EC2ERKS2_ */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6uchar3EC2ERKS2_( struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *const this,  const struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *__T2781) {  _ZN9__gnu_cxx13new_allocatorI6uchar3EC1ERKS2_(this, __T2781);  }
__asm__(".align 2");

 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6uchar3ED1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6uchar3ED1Ev( struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *const this) {   }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI6uchar3ED2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI6uchar3ED2Ev( struct _ZN9__gnu_cxx13new_allocatorI6uchar3EE *const this) {  _ZN9__gnu_cxx13new_allocatorI6uchar3ED1Ev(this);  }
__asm__(".align 2");
# 69 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/new_allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI4int4EC1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI4int4EC1Ev( struct _ZN9__gnu_cxx13new_allocatorI4int4EE *const this) {   }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI4int4EC2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI4int4EC2Ev( struct _ZN9__gnu_cxx13new_allocatorI4int4EE *const this) {  _ZN9__gnu_cxx13new_allocatorI4int4EC1Ev(this);  }
__asm__(".align 2");
# 71 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/ext/new_allocator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI4int4EC1ERKS2_ */ __inline__ void _ZN9__gnu_cxx13new_allocatorI4int4EC1ERKS2_( struct _ZN9__gnu_cxx13new_allocatorI4int4EE *const this,  const struct _ZN9__gnu_cxx13new_allocatorI4int4EE *__T2782) {   }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI4int4EC2ERKS2_ */ __inline__ void _ZN9__gnu_cxx13new_allocatorI4int4EC2ERKS2_( struct _ZN9__gnu_cxx13new_allocatorI4int4EE *const this,  const struct _ZN9__gnu_cxx13new_allocatorI4int4EE *__T2783) {  _ZN9__gnu_cxx13new_allocatorI4int4EC1ERKS2_(this, __T2783);  }
__asm__(".align 2");

 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI4int4ED1Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI4int4ED1Ev( struct _ZN9__gnu_cxx13new_allocatorI4int4EE *const this) {   }
__asm__(".align 2");
 __attribute__((__weak__)) /* COMDAT group: _ZN9__gnu_cxx13new_allocatorI4int4ED2Ev */ __inline__ void _ZN9__gnu_cxx13new_allocatorI4int4ED2Ev( struct _ZN9__gnu_cxx13new_allocatorI4int4EE *const this) {  _ZN9__gnu_cxx13new_allocatorI4int4ED1Ev(this);  }
# 481 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt13back_inserterISt6vectorI6float3SaIS1_EEESt20back_insert_iteratorIT_ERS5_ */ __inline__ struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE _ZSt13back_inserterISt6vectorI6float3SaIS1_EEESt20back_insert_iteratorIT_ERS5_( struct _ZSt6vectorI6float3SaIS0_EE *__x)
{  struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE __T2784;
# 482 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
return ((void)((__T2784.container) = __x)) , __T2784; }
# 444 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt4copyISt16istream_iteratorI6float3cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET0_T_SB_SA_ */ __inline__ struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE _ZSt4copyISt16istream_iteratorI6float3cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET0_T_SB_SA_( struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__first,  struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__last,  struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE __result)
{  struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE __T2785;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE __T2786;
 const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2787;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2788;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE __T2789;
 const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2790;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2791;
 const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2792;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE __T2793;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE __T2794;
 const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2795;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2796;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE __T2797;
 const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2798;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2799;
 const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2800;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2801;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2802;
 struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE __T2803;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE __T2804;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE __T2805;
 const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2806;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2807;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE __T2808;
 const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2809;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2810;
 const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2811;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE __T2812;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE __T2813;
 const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2814;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2815;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE __T2816;
 const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2817;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2818;
 const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2819;
 struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE __T2820;
 struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE __T2821;
# 450 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
;

return (((__T2801 = (((__T2788 = (((void)((__T2787 = ((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__first)) , (void)((((__T2786._M_stream) = (__T2787->_M_stream)) , (void)((__T2786._M_value) = ((*(vertex_type *)&(__T2787->_M_value))))) , ((__T2786._M_ok) = (__T2787->_M_ok))))) , (&__T2786))) , (void)((void)((__T2791 = (((void)((__T2790 = ((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__T2788)) , (void)((((__T2789._M_stream) = (__T2790->_M_stream)) , (void)((__T2789._M_value) = ((*(vertex_type *)&(__T2790->_M_value))))) , ((__T2789._M_ok) = (__T2790->_M_ok))))) , (&__T2789))) , (void)((__T2792 = ((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__T2791)) , ((((__T2785._M_stream) = (__T2792->_M_stream)) , (void)((__T2785._M_value) = ((*(vertex_type *)&(__T2792->_M_value))))) , ((__T2785._M_ok) = (__T2792->_M_ok))))))) , (&__T2785))) , (void)(__T2802 = (((__T2796 = (((void)((__T2795 = ((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__last)) , (void)((((__T2794._M_stream) = (__T2795->_M_stream)) , (void)((__T2794._M_value) = ((*(vertex_type *)&(__T2795->_M_value))))) , ((__T2794._M_ok) = (__T2795->_M_ok))))) , (&__T2794))) , (void)((void)((__T2799 = (((void)((__T2798 = ((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__T2796)) , (void)((((__T2797._M_stream) = (__T2798->_M_stream)) , (void)((__T2797._M_value) = ((*(vertex_type *)&(__T2798->_M_value))))) , ((__T2797._M_ok) = (__T2798->_M_ok))))) , (&__T2797))) , (void)((__T2800 = ((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__T2799)) , ((((__T2793._M_stream) = (__T2800->_M_stream)) , (void)((__T2793._M_value) = ((*(vertex_type *)&(__T2800->_M_value))))) , ((__T2793._M_ok) = (__T2800->_M_ok))))))) , (&__T2793)))) , (void)(__T2803 = __result)) , (_ZSt13__copy_move_aILb0ESt16istream_iteratorI6float3cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET1_T0_SB_SA_((((__T2807 = (((void)((__T2806 = ((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__T2801)) , (void)((((__T2805._M_stream) = (__T2806->_M_stream)) , (void)((__T2805._M_value) = ((*(vertex_type *)&(__T2806->_M_value))))) , ((__T2805._M_ok) = (__T2806->_M_ok))))) , (&__T2805))) , (void)((void)((__T2810 = (((void)((__T2809 = ((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__T2807)) , (void)((((__T2808._M_stream) = (__T2809->_M_stream)) , (void)((__T2808._M_value) = ((*(vertex_type *)&(__T2809->_M_value))))) , ((__T2808._M_ok) = (__T2809->_M_ok))))) , (&__T2808))) , (void)((__T2811 = ((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__T2810)) , ((((__T2804._M_stream) = (__T2811->_M_stream)) , (void)((__T2804._M_value) = ((*(vertex_type *)&(__T2811->_M_value))))) , ((__T2804._M_ok) = (__T2811->_M_ok))))))) , (&__T2804)), (((__T2815 = (((void)((__T2814 = ((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__T2802)) , (void)((((__T2813._M_stream) = (__T2814->_M_stream)) , (void)((__T2813._M_value) = ((*(vertex_type *)&(__T2814->_M_value))))) , ((__T2813._M_ok) = (__T2814->_M_ok))))) , (&__T2813))) , (void)((void)((__T2818 = (((void)((__T2817 = ((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__T2815)) , (void)((((__T2816._M_stream) = (__T2817->_M_stream)) , (void)((__T2816._M_value) = ((*(vertex_type *)&(__T2817->_M_value))))) , ((__T2816._M_ok) = (__T2817->_M_ok))))) , (&__T2816))) , (void)((__T2819 = ((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__T2818)) , ((((__T2812._M_stream) = (__T2819->_M_stream)) , (void)((__T2812._M_value) = ((*(vertex_type *)&(__T2819->_M_value))))) , ((__T2812._M_ok) = (__T2819->_M_ok))))))) , (&__T2812)), ((__T2820 = __T2803) , ((__T2821 = __T2820) , __T2821))));


}
# 481 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt13back_inserterISt6vectorI5uint4SaIS1_EEESt20back_insert_iteratorIT_ERS5_ */ __inline__ struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE _ZSt13back_inserterISt6vectorI5uint4SaIS1_EEESt20back_insert_iteratorIT_ERS5_( struct _ZSt6vectorI5uint4SaIS0_EE *__x)
{  struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE __T2822;
# 482 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_iterator.h" 3
return ((void)((__T2822.container) = __x)) , __T2822; }
# 444 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt4copyISt16istream_iteratorI5uint4cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET0_T_SB_SA_ */ __inline__ struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE _ZSt4copyISt16istream_iteratorI5uint4cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET0_T_SB_SA_( struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__first,  struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__last,  struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE __result)
{  struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE __T2823;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE __T2824;
 const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2825;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2826;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE __T2827;
 const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2828;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2829;
 const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2830;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE __T2831;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE __T2832;
 const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2833;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2834;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE __T2835;
 const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2836;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2837;
 const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2838;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2839;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2840;
 struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE __T2841;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE __T2842;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE __T2843;
 const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2844;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2845;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE __T2846;
 const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2847;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2848;
 const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2849;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE __T2850;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE __T2851;
 const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2852;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2853;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE __T2854;
 const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2855;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2856;
 const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2857;
 struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE __T2858;
 struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE __T2859;
# 450 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
;

return (((__T2839 = (((__T2826 = (((void)((__T2825 = ((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__first)) , (void)((((__T2824._M_stream) = (__T2825->_M_stream)) , (void)((__T2824._M_value) = ((*(tri_type *)&(__T2825->_M_value))))) , ((__T2824._M_ok) = (__T2825->_M_ok))))) , (&__T2824))) , (void)((void)((__T2829 = (((void)((__T2828 = ((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__T2826)) , (void)((((__T2827._M_stream) = (__T2828->_M_stream)) , (void)((__T2827._M_value) = ((*(tri_type *)&(__T2828->_M_value))))) , ((__T2827._M_ok) = (__T2828->_M_ok))))) , (&__T2827))) , (void)((__T2830 = ((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__T2829)) , ((((__T2823._M_stream) = (__T2830->_M_stream)) , (void)((__T2823._M_value) = ((*(tri_type *)&(__T2830->_M_value))))) , ((__T2823._M_ok) = (__T2830->_M_ok))))))) , (&__T2823))) , (void)(__T2840 = (((__T2834 = (((void)((__T2833 = ((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__last)) , (void)((((__T2832._M_stream) = (__T2833->_M_stream)) , (void)((__T2832._M_value) = ((*(tri_type *)&(__T2833->_M_value))))) , ((__T2832._M_ok) = (__T2833->_M_ok))))) , (&__T2832))) , (void)((void)((__T2837 = (((void)((__T2836 = ((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__T2834)) , (void)((((__T2835._M_stream) = (__T2836->_M_stream)) , (void)((__T2835._M_value) = ((*(tri_type *)&(__T2836->_M_value))))) , ((__T2835._M_ok) = (__T2836->_M_ok))))) , (&__T2835))) , (void)((__T2838 = ((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__T2837)) , ((((__T2831._M_stream) = (__T2838->_M_stream)) , (void)((__T2831._M_value) = ((*(tri_type *)&(__T2838->_M_value))))) , ((__T2831._M_ok) = (__T2838->_M_ok))))))) , (&__T2831)))) , (void)(__T2841 = __result)) , (_ZSt13__copy_move_aILb0ESt16istream_iteratorI5uint4cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET1_T0_SB_SA_((((__T2845 = (((void)((__T2844 = ((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__T2839)) , (void)((((__T2843._M_stream) = (__T2844->_M_stream)) , (void)((__T2843._M_value) = ((*(tri_type *)&(__T2844->_M_value))))) , ((__T2843._M_ok) = (__T2844->_M_ok))))) , (&__T2843))) , (void)((void)((__T2848 = (((void)((__T2847 = ((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__T2845)) , (void)((((__T2846._M_stream) = (__T2847->_M_stream)) , (void)((__T2846._M_value) = ((*(tri_type *)&(__T2847->_M_value))))) , ((__T2846._M_ok) = (__T2847->_M_ok))))) , (&__T2846))) , (void)((__T2849 = ((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__T2848)) , ((((__T2842._M_stream) = (__T2849->_M_stream)) , (void)((__T2842._M_value) = ((*(tri_type *)&(__T2849->_M_value))))) , ((__T2842._M_ok) = (__T2849->_M_ok))))))) , (&__T2842)), (((__T2853 = (((void)((__T2852 = ((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__T2840)) , (void)((((__T2851._M_stream) = (__T2852->_M_stream)) , (void)((__T2851._M_value) = ((*(tri_type *)&(__T2852->_M_value))))) , ((__T2851._M_ok) = (__T2852->_M_ok))))) , (&__T2851))) , (void)((void)((__T2856 = (((void)((__T2855 = ((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__T2853)) , (void)((((__T2854._M_stream) = (__T2855->_M_stream)) , (void)((__T2854._M_value) = ((*(tri_type *)&(__T2855->_M_value))))) , ((__T2854._M_ok) = (__T2855->_M_ok))))) , (&__T2854))) , (void)((__T2857 = ((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__T2856)) , ((((__T2850._M_stream) = (__T2857->_M_stream)) , (void)((__T2850._M_value) = ((*(tri_type *)&(__T2857->_M_value))))) , ((__T2850._M_ok) = (__T2857->_M_ok))))))) , (&__T2850)), ((__T2858 = __T2841) , ((__T2859 = __T2858) , __T2859))));


}
# 187 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt3minImERKT_S2_S2_ */ __inline__ const size_t *_ZSt3minImERKT_S2_S2_( const size_t *__a,  const size_t *__b)
{



if ((*__b) < (*__a)) {
return __b; }
return __a;
}
# 220 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_uninitialized.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt20uninitialized_fill_nIP6float3mS0_EvT_T0_RKT1_ */ __inline__ void _ZSt20uninitialized_fill_nIP6float3mS0_EvT_T0_RKT1_( vertex_type *__first,  unsigned long __n,  const _ZNSt6vectorI6float3SaIS0_EE10value_typeE *__x)
{



{ (vertex_type *)(_ZSt10__fill_n_aIP6float3mS0_EN9__gnu_cxx11__enable_ifIXntsr3std11__is_scalarIT1_EE7__valueET_E6__typeES5_T0_RKS4_(__first, __n, __x)); } 

}
# 729 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt10__fill_n_aIP6float3mS0_EN9__gnu_cxx11__enable_ifIXntsr3std11__is_scalarIT1_EE7__valueET_E6__typeES5_T0_RKS4_ */ __inline__ _ZN9__gnu_cxx11__enable_ifILb1EP6float3E6__typeE _ZSt10__fill_n_aIP6float3mS0_EN9__gnu_cxx11__enable_ifIXntsr3std11__is_scalarIT1_EE7__valueET_E6__typeES5_T0_RKS4_( vertex_type *__first,  unsigned long __n,  const _ZNSt6vectorI6float3SaIS0_EE10value_typeE *__value)
{  {
 unsigned long __niter;
# 731 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
__niter = __n; for (; (__niter > 0UL); (--__niter) , (void)(++__first)) {

(*__first) = (*__value); } }
return __first;
}
# 124 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_construct.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt8_DestroyIP6float3EvT_S2_ */ __inline__ void _ZSt8_DestroyIP6float3EvT_S2_( vertex_type *__first,  vertex_type *__last)
{


{ } 

}
# 109 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_uninitialized.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS2_SaIS2_EEEEPS2_ET0_T_SB_SA_ */ __inline__ vertex_type *_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS2_SaIS2_EEEEPS2_ET0_T_SB_SA_( struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __first,  struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __last, 
vertex_type *__result)
{  struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2860;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2861;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2862;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2863;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2864;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2865;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2866;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2867;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2868;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2869;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2870;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2871;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2872;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE __T2873;
# 117 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_uninitialized.h" 3
return ((__T2860 = __first) , (void)(__T2861 = __last)) , (((__T2862 = __T2860) , (void)(__T2863 = __T2861)) , (((__T2868 = ((__T2864 = __T2862) , ((__T2865 = __T2864) , __T2865))) , (void)(__T2869 = ((__T2866 = __T2863) , ((__T2867 = __T2866) , __T2867)))) , ((vertex_type *)(_ZSt13__copy_move_aILb0EPK6float3PS0_ET1_T0_S5_S4_(((__T2870 = __T2868) , ((__T2871 = __T2870) , (*((const _ZNSt6vectorI6float3SaIS0_EE13const_pointerE *)&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE *)&__T2871))._M_current))))), ((__T2872 = __T2869) , ((__T2873 = __T2872) , (*((const _ZNSt6vectorI6float3SaIS0_EE13const_pointerE *)&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIPK6float3St6vectorIS1_SaIS1_EEEE *)&__T2873))._M_current))))), __result)))));


}
# 373 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0EPK6float3PS0_ET1_T0_S5_S4_ */ __inline__ vertex_type *_ZSt13__copy_move_aILb0EPK6float3PS0_ET1_T0_S5_S4_( const vertex_type *__first,  const vertex_type *__last,  vertex_type *__result)
{  _ZSt9ptrdiff_t __T2874;



 char __cuda_local_var_18807_18_const___simple;
# 378 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
__cuda_local_var_18807_18_const___simple = ((char)1);




return ((__T2874 = (__last - __first)) , (void)((__T2874) ? ((void)(__builtin_memmove(((void *)__result), ((const void *)__first), (12UL * ((unsigned long)__T2874))))) : ((void)0))) , (__result + __T2874);

}
# 124 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_construct.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS2_SaIS2_EEEEEvT_S8_ */ __inline__ void _ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS2_SaIS2_EEEEEvT_S8_( struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE __first,  struct _ZN9__gnu_cxx17__normal_iteratorIP6float3St6vectorIS1_SaIS1_EEEE __last)
{


{ } 

}
# 373 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0EP6float3S1_ET1_T0_S3_S2_ */ __inline__ vertex_type *_ZSt13__copy_move_aILb0EP6float3S1_ET1_T0_S3_S2_( vertex_type *__first,  vertex_type *__last,  vertex_type *__result)
{  _ZSt9ptrdiff_t __T2875;



 char __cuda_local_var_18807_18_const___simple;
# 378 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
__cuda_local_var_18807_18_const___simple = ((char)1);




return ((__T2875 = (((const vertex_type *)__last) - ((const vertex_type *)__first))) , (void)((__T2875) ? ((void)(__builtin_memmove(((void *)__result), ((const void *)((const vertex_type *)__first)), (12UL * ((unsigned long)__T2875))))) : ((void)0))) , (__result + __T2875);

}
# 109 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_uninitialized.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt18uninitialized_copyIP6float3S1_ET0_T_S3_S2_ */ __inline__ vertex_type *_ZSt18uninitialized_copyIP6float3S1_ET0_T_S3_S2_( vertex_type *__first,  vertex_type *__last, 
vertex_type *__result)
{
# 117 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_uninitialized.h" 3
return (vertex_type *)(_ZSt13__copy_move_aILb0EP6float3S1_ET1_T0_S3_S2_(__first, __last, __result));


}
# 373 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0ESt16istream_iteratorI6float3cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET1_T0_SB_SA_ */ __inline__ struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE _ZSt13__copy_move_aILb0ESt16istream_iteratorI6float3cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET1_T0_SB_SA_( struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__first,  struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__last,  struct _ZSt20back_insert_iteratorISt6vectorI6float3SaIS1_EEE __result)
{  struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE __T2876;
 const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2877;
 struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE __T2878;
 const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *__T2879;
 char __cuda_local_var_18807_18_const___simple;
# 378 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
__cuda_local_var_18807_18_const___simple = ((char)0);




return _ZNSt11__copy_moveILb0ELb0ESt18input_iterator_tagE8__copy_mISt16istream_iteratorI6float3cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS4_SaIS4_EEEEET0_T_SE_SD_((((void)((__T2877 = ((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__first)) , (void)((((__T2876._M_stream) = (__T2877->_M_stream)) , (void)((__T2876._M_value) = ((*(vertex_type *)&(__T2877->_M_value))))) , ((__T2876._M_ok) = (__T2877->_M_ok))))) , (&__T2876)), (((void)((__T2879 = ((const struct _ZSt16istream_iteratorI6float3cSt11char_traitsIcElE *)__last)) , (void)((((__T2878._M_stream) = (__T2879->_M_stream)) , (void)((__T2878._M_value) = ((*(vertex_type *)&(__T2879->_M_value))))) , ((__T2878._M_ok) = (__T2879->_M_ok))))) , (&__T2878)), __result);

}
# 568 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt22__copy_move_backward_aILb0EP6float3S1_ET1_T0_S3_S2_ */ __inline__ vertex_type *_ZSt22__copy_move_backward_aILb0EP6float3S1_ET1_T0_S3_S2_( vertex_type *__first,  vertex_type *__last,  vertex_type *__result)
{  _ZSt9ptrdiff_t __T2880;



 char __cuda_local_var_18917_18_const___simple;
# 573 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
__cuda_local_var_18917_18_const___simple = ((char)1);




return ((__T2880 = (((const vertex_type *)__last) - ((const vertex_type *)__first))) , (void)((__T2880) ? ((void)(__builtin_memmove(((void *)(__result - __T2880)), ((const void *)((const vertex_type *)__first)), (12UL * ((unsigned long)__T2880))))) : ((void)0))) , (__result - __T2880);



}
# 210 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt3maxImERKT_S2_S2_ */ __inline__ const _ZNSt6vectorI6float3SaIS0_EE9size_typeE *_ZSt3maxImERKT_S2_S2_( const _ZNSt6vectorI6float3SaIS0_EE9size_typeE *__a,  const _ZNSt6vectorI6float3SaIS0_EE9size_typeE *__b)
{



if ((*__a) < (*__b)) {
return __b; }
return __a;
}
# 124 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_construct.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt8_DestroyIP5uint4EvT_S2_ */ __inline__ void _ZSt8_DestroyIP5uint4EvT_S2_( tri_type *__first,  tri_type *__last)
{


{ } 

}
# 109 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_uninitialized.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS2_SaIS2_EEEEPS2_ET0_T_SB_SA_ */ __inline__ tri_type *_ZSt18uninitialized_copyIN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS2_SaIS2_EEEEPS2_ET0_T_SB_SA_( struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __first,  struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __last, 
tri_type *__result)
{  struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2881;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2882;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2883;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2884;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2885;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2886;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2887;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2888;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2889;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2890;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2891;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2892;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2893;
 struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE __T2894;
# 117 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_uninitialized.h" 3
return ((__T2881 = __first) , (void)(__T2882 = __last)) , (((__T2883 = __T2881) , (void)(__T2884 = __T2882)) , (((__T2889 = ((__T2885 = __T2883) , ((__T2886 = __T2885) , __T2886))) , (void)(__T2890 = ((__T2887 = __T2884) , ((__T2888 = __T2887) , __T2888)))) , ((tri_type *)(_ZSt13__copy_move_aILb0EPK5uint4PS0_ET1_T0_S5_S4_(((__T2891 = __T2889) , ((__T2892 = __T2891) , (*((const _ZNSt6vectorI5uint4SaIS0_EE13const_pointerE *)&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE *)&__T2892))._M_current))))), ((__T2893 = __T2890) , ((__T2894 = __T2893) , (*((const _ZNSt6vectorI5uint4SaIS0_EE13const_pointerE *)&(((*(const struct _ZN9__gnu_cxx17__normal_iteratorIPK5uint4St6vectorIS1_SaIS1_EEEE *)&__T2894))._M_current))))), __result)))));


}
# 373 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0EPK5uint4PS0_ET1_T0_S5_S4_ */ __inline__ tri_type *_ZSt13__copy_move_aILb0EPK5uint4PS0_ET1_T0_S5_S4_( const tri_type *__first,  const tri_type *__last,  tri_type *__result)
{  _ZSt9ptrdiff_t __T2895;



 char __cuda_local_var_18807_18_const___simple;
# 378 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
__cuda_local_var_18807_18_const___simple = ((char)1);




return ((__T2895 = (__last - __first)) , (void)((__T2895) ? ((void)(__builtin_memmove(((void *)__result), ((const void *)__first), (16UL * ((unsigned long)__T2895))))) : ((void)0))) , (__result + __T2895);

}
# 124 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_construct.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS2_SaIS2_EEEEEvT_S8_ */ __inline__ void _ZSt8_DestroyIN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS2_SaIS2_EEEEEvT_S8_( struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE __first,  struct _ZN9__gnu_cxx17__normal_iteratorIP5uint4St6vectorIS1_SaIS1_EEEE __last)
{


{ } 

}
# 373 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0EP5uint4S1_ET1_T0_S3_S2_ */ __inline__ tri_type *_ZSt13__copy_move_aILb0EP5uint4S1_ET1_T0_S3_S2_( tri_type *__first,  tri_type *__last,  tri_type *__result)
{  _ZSt9ptrdiff_t __T2896;



 char __cuda_local_var_18807_18_const___simple;
# 378 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
__cuda_local_var_18807_18_const___simple = ((char)1);




return ((__T2896 = (((const tri_type *)__last) - ((const tri_type *)__first))) , (void)((__T2896) ? ((void)(__builtin_memmove(((void *)__result), ((const void *)((const tri_type *)__first)), (16UL * ((unsigned long)__T2896))))) : ((void)0))) , (__result + __T2896);

}
# 109 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_uninitialized.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt18uninitialized_copyIP5uint4S1_ET0_T_S3_S2_ */ __inline__ tri_type *_ZSt18uninitialized_copyIP5uint4S1_ET0_T_S3_S2_( tri_type *__first,  tri_type *__last, 
tri_type *__result)
{
# 117 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_uninitialized.h" 3
return (tri_type *)(_ZSt13__copy_move_aILb0EP5uint4S1_ET1_T0_S3_S2_(__first, __last, __result));


}
# 373 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0ESt16istream_iteratorI5uint4cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET1_T0_SB_SA_ */ __inline__ struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE _ZSt13__copy_move_aILb0ESt16istream_iteratorI5uint4cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS1_SaIS1_EEEET1_T0_SB_SA_( struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__first,  struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__last,  struct _ZSt20back_insert_iteratorISt6vectorI5uint4SaIS1_EEE __result)
{  struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE __T2897;
 const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2898;
 struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE __T2899;
 const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *__T2900;
 char __cuda_local_var_18807_18_const___simple;
# 378 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
__cuda_local_var_18807_18_const___simple = ((char)0);




return _ZNSt11__copy_moveILb0ELb0ESt18input_iterator_tagE8__copy_mISt16istream_iteratorI5uint4cSt11char_traitsIcElESt20back_insert_iteratorISt6vectorIS4_SaIS4_EEEEET0_T_SE_SD_((((void)((__T2898 = ((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__first)) , (void)((((__T2897._M_stream) = (__T2898->_M_stream)) , (void)((__T2897._M_value) = ((*(tri_type *)&(__T2898->_M_value))))) , ((__T2897._M_ok) = (__T2898->_M_ok))))) , (&__T2897)), (((void)((__T2900 = ((const struct _ZSt16istream_iteratorI5uint4cSt11char_traitsIcElE *)__last)) , (void)((((__T2899._M_stream) = (__T2900->_M_stream)) , (void)((__T2899._M_value) = ((*(tri_type *)&(__T2900->_M_value))))) , ((__T2899._M_ok) = (__T2900->_M_ok))))) , (&__T2899)), __result);

}
# 568 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt22__copy_move_backward_aILb0EP5uint4S1_ET1_T0_S3_S2_ */ __inline__ tri_type *_ZSt22__copy_move_backward_aILb0EP5uint4S1_ET1_T0_S3_S2_( tri_type *__first,  tri_type *__last,  tri_type *__result)
{  _ZSt9ptrdiff_t __T2901;



 char __cuda_local_var_18917_18_const___simple;
# 573 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
__cuda_local_var_18917_18_const___simple = ((char)1);




return ((__T2901 = (((const tri_type *)__last) - ((const tri_type *)__first))) , (void)((__T2901) ? ((void)(__builtin_memmove(((void *)(__result - __T2901)), ((const void *)((const tri_type *)__first)), (16UL * ((unsigned long)__T2901))))) : ((void)0))) , (__result - __T2901);



}
# 124 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_construct.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt8_DestroyIP6uchar3EvT_S2_ */ __inline__ void _ZSt8_DestroyIP6uchar3EvT_S2_( _ZN9cuda_side10pixel_typeE *__first,  _ZN9cuda_side10pixel_typeE *__last)
{


{ } 

}
# 220 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_uninitialized.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt20uninitialized_fill_nIP6uchar3mS0_EvT_T0_RKT1_ */ __inline__ void _ZSt20uninitialized_fill_nIP6uchar3mS0_EvT_T0_RKT1_( _ZN9cuda_side10pixel_typeE *__first,  unsigned long __n,  const _ZNSt6vectorI6uchar3SaIS0_EE10value_typeE *__x)
{



{ (_ZN9cuda_side10pixel_typeE *)(_ZSt10__fill_n_aIP6uchar3mS0_EN9__gnu_cxx11__enable_ifIXntsr3std11__is_scalarIT1_EE7__valueET_E6__typeES5_T0_RKS4_(__first, __n, __x)); } 

}
# 729 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt10__fill_n_aIP6uchar3mS0_EN9__gnu_cxx11__enable_ifIXntsr3std11__is_scalarIT1_EE7__valueET_E6__typeES5_T0_RKS4_ */ __inline__ _ZN9__gnu_cxx11__enable_ifILb1EP6uchar3E6__typeE _ZSt10__fill_n_aIP6uchar3mS0_EN9__gnu_cxx11__enable_ifIXntsr3std11__is_scalarIT1_EE7__valueET_E6__typeES5_T0_RKS4_( _ZN9cuda_side10pixel_typeE *__first,  unsigned long __n,  const _ZNSt6vectorI6uchar3SaIS0_EE10value_typeE *__value)
{  {
 unsigned long __niter;
# 731 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
__niter = __n; for (; (__niter > 0UL); (--__niter) , (void)(++__first)) {

(*__first) = (*__value); } }
return __first;
}
# 373 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0EPK6uchar3St16ostream_iteratorIS0_cSt11char_traitsIcEEET1_T0_S8_S7_ */ __inline__ void _ZSt13__copy_move_aILb0EPK6uchar3St16ostream_iteratorIS0_cSt11char_traitsIcEEET1_T0_S8_S7_( struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *__T2902,  const _ZN9cuda_side10pixel_typeE *__first,  const _ZN9cuda_side10pixel_typeE *__last,  struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *__result)
{  struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE __T2903;
 const struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *__T2904;


 char __cuda_local_var_18807_18_const___simple;
# 378 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
__cuda_local_var_18807_18_const___simple = ((char)0); {




_ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPK6uchar3St16ostream_iteratorIS3_cSt11char_traitsIcEEEET0_T_SB_SA_(__T2902, __first, __last, (((void)((__T2904 = ((const struct _ZSt16ostream_iteratorI6uchar3cSt11char_traitsIcEE *)__result)) , (void)(((__T2903._M_stream) = (__T2904->_M_stream)) , ((__T2903._M_string) = (__T2904->_M_string))))) , (&__T2903))); return; }

}
# 124 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_construct.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt8_DestroyIP4int4EvT_S2_ */ __inline__ void _ZSt8_DestroyIP4int4EvT_S2_( _ZN9cuda_side16partial_sum_typeE *__first,  _ZN9cuda_side16partial_sum_typeE *__last)
{


{ } 

}
# 220 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_uninitialized.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt20uninitialized_fill_nIP4int4mS0_EvT_T0_RKT1_ */ __inline__ void _ZSt20uninitialized_fill_nIP4int4mS0_EvT_T0_RKT1_( _ZN9cuda_side16partial_sum_typeE *__first,  unsigned long __n,  const _ZNSt6vectorI4int4SaIS0_EE10value_typeE *__x)
{



{ (_ZN9cuda_side16partial_sum_typeE *)(_ZSt10__fill_n_aIP4int4mS0_EN9__gnu_cxx11__enable_ifIXntsr3std11__is_scalarIT1_EE7__valueET_E6__typeES5_T0_RKS4_(__first, __n, __x)); } 

}
# 729 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt10__fill_n_aIP4int4mS0_EN9__gnu_cxx11__enable_ifIXntsr3std11__is_scalarIT1_EE7__valueET_E6__typeES5_T0_RKS4_ */ __inline__ _ZN9__gnu_cxx11__enable_ifILb1EP4int4E6__typeE _ZSt10__fill_n_aIP4int4mS0_EN9__gnu_cxx11__enable_ifIXntsr3std11__is_scalarIT1_EE7__valueET_E6__typeES5_T0_RKS4_( _ZN9cuda_side16partial_sum_typeE *__first,  unsigned long __n,  const _ZNSt6vectorI4int4SaIS0_EE10value_typeE *__value)
{  {
 unsigned long __niter;
# 731 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
__niter = __n; for (; (__niter > 0UL); (--__niter) , (void)(++__first)) {

(*__first) = (*__value); } }
return __first;
}
# 373 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
 __attribute__((__weak__)) /* COMDAT group: _ZSt13__copy_move_aILb0EPK4int4St16ostream_iteratorIS0_cSt11char_traitsIcEEET1_T0_S8_S7_ */ __inline__ void _ZSt13__copy_move_aILb0EPK4int4St16ostream_iteratorIS0_cSt11char_traitsIcEEET1_T0_S8_S7_( struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *__T2905,  const _ZN9cuda_side16partial_sum_typeE *__first,  const _ZN9cuda_side16partial_sum_typeE *__last,  struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *__result)
{  struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE __T2906;
 const struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *__T2907;


 char __cuda_local_var_18807_18_const___simple;
# 378 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/bits/stl_algobase.h" 3
__cuda_local_var_18807_18_const___simple = ((char)0); {




_ZNSt11__copy_moveILb0ELb0ESt26random_access_iterator_tagE8__copy_mIPK4int4St16ostream_iteratorIS3_cSt11char_traitsIcEEEET0_T_SB_SA_(__T2905, __first, __last, (((void)((__T2907 = ((const struct _ZSt16ostream_iteratorI4int4cSt11char_traitsIcEE *)__result)) , (void)(((__T2906._M_stream) = (__T2907->_M_stream)) , ((__T2906._M_string) = (__T2907->_M_string))))) , (&__T2906))); return; }

}
static void __sti___17_cuda_side_cpp1_ii_51e07f2f(void) {
# 75 "/usr/local/lib/gcc/x86_64-unknown-linux-gnu/4.7.0/../../../../include/c++/4.7.0/iostream" 3
_ZNSt8ios_base4InitC1Ev((&_ZSt8__ioinit)); __cxa_atexit(_ZNSt8ios_base4InitD1Ev, ((void *)(&_ZSt8__ioinit)), (&__dso_handle));
# 72 "cuda_side.cu"
_ZN7textureI4int4Li2EL19cudaTextureReadMode0EEC1Ei21cudaTextureFilterMode22cudaTextureAddressMode((&__text_var(_ZN9cuda_side13l_p_s_tex_refE,cuda_side::l_p_s_tex_ref)), 0, cudaFilterModePoint, cudaAddressModeClamp);  }

#include "cuda_side.cudafe1.stub.c"
