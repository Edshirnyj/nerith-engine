/* ===== Preprocessor Utilities ===== */
#define PP_CAT(a,b) a##b
#define PP_EXPAND(x) x

/* Count the number of arguments (up to 6) */
#define PP_NARG_IMPL(_1,_2,_3,_4,_5,_6,N,...) N
#define PP_NARG(...) PP_EXPAND(PP_NARG_IMPL(__VA_ARGS__,6,5,4,3,2,1,0))

/* Selecting an implementation based on the number of arguments */
#define _Overload_Args1(_1,NAME, ...) NAME##1(_1)
#define _Overload_Args2(_1,_2,NAME, ...) NAME##2(_1, _2)
#define _Overload_Args3(_1,_2,_3,NAME, ...) NAME##3(_1, _2, _3)
#define _Overload_Args4(_1,_2,_3,_4,NAME, ...) NAME##4(_1, _2, _3, _4)
#define _Overload_Args5(_1,_2,_3,_4,_5,NAME, ...) NAME##5(_1, _2, _3, _5, _6)
#define _Overload_Args6(_1,_2,_3,_4,_5,_6,NAME, ...) NAME##6(_1, _2, _3, _4, _5, _6)
#define _Overload(NAME, ...)PP_EXPAND(PP_CAT(_Overload_Args, PP_NARG(__VA_ARGS__)))(NAME, __VA_ARGS__)