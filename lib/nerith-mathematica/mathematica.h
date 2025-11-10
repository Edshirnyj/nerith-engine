#ifndef _MATHEMATICA_H
#define _MATHEMATICA_H

#include <cmath>
#include <cstdint>

#include "types.h"

// Math constants

#define MATH_PI                 3.1415927f
#define MATH_PI_OVER_TWO        1.5707963f
#define MATH_PI_OVER_THREE      1.0471975f
#define MATH_PI_OVER_FOUR       0.7853982f
#define MATH_PI_OVER_SIX        0.5235987f
#define MATH_TWO_PI             6.2831853f
#define MATH_THREE_PI_OVER_TWO  4.7123889f

#define MATH_E          2.718288f
#define MATH_LOG10E     0.4342945f
#define MATH_LOG2E      1.442695f

#define MATH_DEG_TO_RAD 0.0174533f
#define MATH_RAD_TO_DEG 57.2958f


// Math inline functions absolute value

static inline Float Absf(Float x);
static inline Double Abs(Double x);

static inline Double Sin(Double radians);
static inline Double Sinh(Double radians);
static inline Double Asin(Double radians);

static inline Double Cos(Double radians);
static inline Double Cosh(Double radians);
static inline Double Acos(Double radians);

static inline Double Tan(Double radians);
static inline Double Tanh(Double radians);
static inline Double Atan(Double radians);
static inline Double Atan2(Double y, Double x);

static inline Long BigMul(Long a, Long b);

static inline Double Sqrt(Double n);
static inline Double Pow(Double x, Double y);
static inline Double Ceiling(Double n);
static inline Double Floor(Double n);

static inline Int DivRem(Int a, Int b, Int* result);
static inline Long DivRem64(Long a, Long b, Long* result);

static inline Double Log(Double n);
static inline Double Log(Double n, Double base);
static inline Double Log10(Double n);
static inline Double Log2(Double n);

static inline Double Exp(Double n);
static inline Double Remainder(Double x, Double y);

static inline Double Min(Double a, Double b);
static inline Double Max(Double a, Double b);

static inline Double Round(Double n);
static inline Double Round(Double n, Int digits);

static inline Double Truncate(Double n);

static inline Double Sign(Double n);

static inline Int NextPowerOfTwo(Int n);
static inline Long NextPowerOfTwo64(Long n);
static inline Double NextPowerOfTwoD(Double n);

static inline Long Factorial(Int n);

static inline Long BinomialCoefficient(Int n, Int k);

static inline Double InverseSqrtFast(Double n);

static inline Double DeegreesToRadians(Double degrees);
static inline Double RadiansToDegrees(Double radians);

static inline void Swap(void* a, void* b);

#endif // _MATHEMATICA_H