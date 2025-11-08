#include "mathematica.h"

static inline float AbsF(float x) 
{ 
    return (x > 0.0f) ? x : -x; 
};

static inline double AbsD(double x) 
{ 
    return (x > 0.0) ? x : -x; 
};

static inline signed short AbsS(short x) 
{ 
    return (x > 0) ? x : -x; 
};

static inline signed int AbsI(int x) 
{ 
    return (x > 0) ? x : -x; 
};

static inline long AbsL(long x) 
{ 
    return (x > 0) ? x : -x; 
};

static inline signed char AbsC(signed char x) 
{ 
    return (x > 0) ? x : -x; 
};

static inline float Sin(float x)   
{ 
    return sinf(x); 
};

static inline float Sinh(float x)  
{ 
    return sinhf(x); 
};

static inline float Asin(float x)  
{ 
    return asinf(x); 
};

static inline float Cos(float x)   
{ 
    return cosf(x); 
};

static inline float Cosh(float x)  
{ 
    return coshf(x); 
};

static inline float Acos(float x)  
{ 
    return acosf(x); 
};

static inline float Tan(float x)   
{ 
    return tanf(x); 
};

static inline float Tanh(float x)  
{ 
    return tanhf(x); 
};

static inline float Atan(float x)  
{ 
    return atanf(x); 
};

static inline float Atan2(float y, float x) 
{ 
    return atan2f(y, x); 
};

static inline float Sqrt(float x)  
{ 
    return sqrtf(x); 
};

static inline float Pow(float x, float y) 
{ 
    return powf(x, y); 
};

static inline float Ceiling(float n) 
{ 
    return ceilf(n); 
};

static inline float Floor(float n)   
{ 
    return floorf(n); 
};

static inline float Log(float x)     
{ 
    return logf(x); 
};

static inline float LogToBase(float x, float base)
{
    Log(x) / Log(base);
};

static inline long BigMul64(long a, long b)
{
    return a * b;
};

static inline int DivRem(int a, int b, int* result)
{
    if (b == 0) return 0;

    *result = a / b;
    return a % b;
};

static inline int DivRem64(int64_t a, int64_t b, int64_t* result)
{
    if (b == 0) return 0;

    *result = a / b;
    return a % b;
};