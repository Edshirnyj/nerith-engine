#ifndef MATHEMATICA_H
#define MATHEMATICA_H

#include <cmath>
#include <cstdint>

// Math constants
#define MATH_PI             3.1415927f
#define MATH_PI_OVER_TWO    1.5707963f
#define MATH_PI_OVER_THREE  1.0471975f
#define MATH_PI_OVER_FOUR   0.7853982f
#define MATH_PI_OVER_SIX    0.5235987f
#define TWO_PI              6.2831853f
#define THREE_PI_OVER_TWO   4.7123889f

#define MATH_E          2.718288f
#define MATH_LOG10E     0.4342945f
#define MATH_LOG2E      1.442695f

#define MATH_DEG_TO_RAD 0.0174533f
#define MATH_RAD_TO_DEG 57.2958f

typedef struct 
{
    float (*AbsF)(float x);
    double (*AbsD)(double x);
    signed short (*AbsS)(short x);
    signed int (*AbsI)(int x);
    long (*AbsL)(long x);
    signed char (*AbsC)(signed char x);

    float (*Sin)(float x);
    float (*Sinh)(float x);
    float (*Asin)(float x);
    float (*Cos)(float x);
    float (*Cosh)(float x);
    float (*Acos)(float x);
    float (*Tan)(float x);
    float (*Tanh)(float x);
    float (*Atan)(float x);
    float (*Atan2)(float y, float x);
    float (*Sqrt)(float x);
    float (*Pow)(float x, float y);
    float (*Ceiling)(float n);
    float (*Floor)(float n);

    float (*Log)(float x);

    float (*LogToBase)(float x, float base);

    long (*BigMul64)(long a, long b);

    int (*DivRem)(int a, int b, int* result);
    int (*DivRem64)(int64_t a, int64_t b, int64_t* result);

} MathHelper_t;

// Math inline functions absolute value
static inline float AbsF(float x);
static inline double AbsD(double x);
static inline signed short AbsS(short x);
static inline signed int AbsI(int x);
static inline long AbsL(long x);
static inline signed char AbsC(signed char x);

static inline float Sin(float x);
static inline float Sinh(float x);
static inline float Asin(float x);
static inline float Cos(float x);
static inline float Cosh(float x);
static inline float Acos(float x);
static inline float Tan(float x);
static inline float Tanh(float x);
static inline float Atan(float x);
static inline float Atan2(float y, float x);
static inline float Sqrt(float x);
static inline float Pow(float x, float y);
static inline float Ceiling(float n);
static inline float Floor(float n);

static inline float Log(float x);

static inline float LogToBase(float x, float base);

static inline long BigMul64(long a, long b);

static inline int DivRem(int a, int b, int* result);
static inline int DivRem64(int64_t a, int64_t b, int64_t* result);

#endif // MATHEMATICA_H