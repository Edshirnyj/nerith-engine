#include "mathematica.h"

inline Float Absf(Float x) 
{
    return x < 0 ? -x : x;
};

inline Double Abs(Double x)
{
    return x < 0 ? -x : x;
};

inline Double Sin(Double radians) {
    return sin(radians);
};

inline Double Sinh(Double radians)
{
    return sinh(radians);
};

inline Double Asin(Double radians)
{
    return asin(radians);
};

inline Double Cos(Double radians)
{
    return cos(radians);
};

inline Double Cosh(Double radians)
{
    return cosh(radians);
};

inline Double Acos(Double radians)
{
    return acos(radians);
};

inline Double Tan(Double radians)
{
    return tan(radians);
};

inline Double Tanh(Double radians)
{
    return tanh(radians);
};

inline Double Atan(Double radians)
{
    return atan(radians);
};

inline Double Atan2(Double y, Double x)
{
    return atan2(y, x);
};

inline Long BigMul(Long a, Long b)
{
    return a * b;
};

inline Double Sqrt(Double n)
{
    return sqrt(n);
};

inline Double Pow(Double x, Double y)
{
    return pow(x, y);
};

inline Double Ceiling(Double n)
{
    return ceil(n);
};

inline Double Floor(Double n)
{
    return floor(n);
};

inline Int DivRem(Int a, Int b, Int* result)
{
    if (b == 0) return 0;

    *result = a % b;
    return a / b;
};

inline Long DivRem64(Long a, Long b, Long* result)
{
    if (b == 0) return 0;

    *result = a % b;
    return a / b;
};

inline Double Log(Double n)
{
    return log(n);
};

inline Double Log(Double n, Double base)
{
    return Log(n) / Log(base);
};

inline Double Log10(Double n)
{
    return Log(n, 10);
};

inline Double Log2(Double n)
{
    return Log(n, 2);
};

inline Double Exp(Double n)
{
    return exp(n);
};

inline Double Remainder(Double x, Double y)
{
    return fmod(x, y);
};

inline Double Min(Double a, Double b)
{
    return a < b ? a : b;
};

inline Double Max(Double a, Double b)
{
    return a > b ? a : b;
};

inline Double Round(Double n)
{
    return round(n);
}

inline Double Round(Double n, Int digits)
{
    return round(n * pow(10, digits)) / pow(10, digits);
};

inline Double Truncate(Double n)
{
    return trunc(n);
};

inline Double Sign(Double n)
{
    return n < 0 ? -1 : n > 0 ? 1 : 0;
};

inline Int NextPowerOfTwo(Int n)
{
    if(n <= 0) return 1;
    return 1 << (32 - __builtin_clz(n - 1));
};

inline Long NextPowerOfTwo64(Long n)
{
    if(n <= 0) return 1;
    return 1 << (64 - __builtin_clzll(n - 1));
};

inline Double NextPowerOfTwoD(Double n)
{
    if(n <= 0) return 1;
    return 1 << (64 - __builtin_clzll(n - 1));
};

inline Long Factorial(Int n)
{
    long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
};

inline Long BinomialCoefficient(Int n, Int k)
{
    return Factorial(n) / (Factorial(k) * Factorial(n - k));
};

inline Double InverseSqrtFast(Double n)
{
    Double xhalf = 0.5 * n;
    Int i = *(Int*)&n;
    i = 0x5f3759df - (i >> 1);
    n = *(Double*)&i;
    n = n * (1.5 - (xhalf * n * n));
    return n;
};

inline Double DeegreesToRadians(Double degrees)
{
    return degrees * MATH_DEG_TO_RAD;
};

inline Double RadiansToDegrees(Double radians)
{
    return radians * MATH_RAD_TO_DEG;
};

inline void Swap(void* a, void* b) 
{
    void* tmp = a;
    a = b;
    b = tmp;
};


