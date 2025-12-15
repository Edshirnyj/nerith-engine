#include "mathematica.h"

inline Byte Abs_Byte(Byte x) {
    return x < 0 ? -x : x;
};

inline Short Abs_Short(Short x) {
    return x < 0 ? -x : x;
};

inline Int Abs_Int(Int x) {
    return x < 0 ? -x : x;
};

inline Long Abs_Long(Long x) {
    return x < 0 ? -x : x;
};

inline Float Abs_Float(Float x) {
    return x < 0 ? -x : x;
};

inline Double Abs_Double(Double x) {
    return x < 0 ? -x : x;
};

inline Double Sin(Double radians) {
    return sin(radians);
};

inline Double Sinh(Double radians) {
    return sinh(radians);
};

inline Double Asin(Double radians) {
    return asin(radians);
};

inline Double Cos(Double radians) {
    return cos(radians);
};

inline Double Cosh(Double radians) {
    return cosh(radians);
};

inline Double Acos(Double radians) {
    return acos(radians);
};

inline Double Tan(Double radians) {
    return tan(radians);
};

inline Double Tanh(Double radians) {
    return tanh(radians);
};

inline Double Atan(Double radians) {
    return atan(radians);
};

inline Double Atan2(Double y, Double x) {
    return atan2(y, x);
};

inline Long BigMul(Long a, Long b) {
    return a * b;
};

inline Double Sqrt(Double n) {
    return sqrt(n);
};

inline Double Pow(Double x, Double y) {
    return pow(x, y);
};

inline Double Ceiling(Double n) {
    return ceil(n);
};

inline Double Floor(Double n) {
    return floor(n);
};

inline Int DivRem_Int(Int a, Int b, Int* result) {
    if (b == 0) return 0;

    *result = a % b;
    return a / b;
};

inline Long DivRem_Long(Long a, Long b, Long* result) {
    if (b == 0) return 0;

    *result = a % b;
    return a / b;
};

inline Double Log_Natural(Double n) {
    return log(n);
};

inline Double Log_To_Base(Double n, Double base) {
    return Log_Natural(n) / Log_Natural(base);
};

inline Double Log10(Double n) {
    return Log(n, 10);
};

inline Double Log2(Double n) {
    return Log(n, 2);
};

inline Double Exp(Double n) {
    return exp(n);
};

inline Double Remainder(Double x, Double y) {
    return fmod(x, y);
};

inline Byte Min_Byte(Byte a, Byte b) {
    return a < b ? a : b;
};

inline Ubyte Min_Ubyte(Ubyte a, Ubyte b) {
    return a < b ? a : b;
};

inline Short Min_Short(Short a, Short b) {
    return a < b ? a : b;
};

inline Ushort Min_Ushort(Ushort a, Ushort b) {
    return a < b ? a : b;
};

inline Int Min_Int(Int a, Int b) {
    return a < b ? a : b;
};

inline Uint Min_Uint(Uint a, Uint b) {
    return a < b ? a : b;
};

inline Long Min_Long(Long a, Long b) {
    return a < b ? a : b;
};

inline Ulong Min_Ulong(Ulong a, Ulong b) {
    return a < b ? a : b;
};

inline Float Min_Float(Float a, Float b) {
    return a < b ? a : b;
};

inline Double Min_Double(Double a, Double b) {
    return a < b ? a : b;
};

inline Byte Max_Byte(Byte a, Byte b) {
    return a > b ? a : b;
};

inline Ubyte Max_Ubyte(Ubyte a, Ubyte b) {
    return a > b ? a : b;
};

inline Short Max_Short(Short a, Short b) {
    return a > b ? a : b;
};

inline Ushort Max_Ushort(Ushort a, Ushort b) {
    return a > b ? a : b;
};

inline Int Max_Int(Int a, Int b) {
    return a > b ? a : b;
};

inline Uint Max_Uint(Uint a, Uint b) {
    return a > b ? a : b;
};

inline Long Max_Long(Long a, Long b) {
    return a > b ? a : b;
};

inline Ulong Max_Ulong(Ulong a, Ulong b) {
    return a > b ? a : b;
};

inline Float Max_Float(Float a, Float b) {
    return a > b ? a : b;
};

inline Double Max_Double(Double a, Double b) {
    return a > b ? a : b;
};

inline Double Round_Nearest(Double n) {
    return round(n);
};

inline Double Round_Digits(Double n, Int digits) {
    return Round_Nearest(n * Pow(10, digits)) / Pow(10, digits);
};

inline Double Truncate(Double n) {
    return trunc(n);
}
inline Int Sign_Byte(Byte n)
{
    return n < 0 ? -1 : n > 0 ? 1 : 0;
};

inline Int Sign_Short(Short n)
{
    return n < 0 ? -1 : n > 0 ? 1 : 0;
};

inline Int Sign_Int(Int n)
{
    return n < 0 ? -1 : n > 0 ? 1 : 0;
};

inline Int Sign_Long(Long n)
{
    return n < 0 ? -1 : n > 0 ? 1 : 0;
};

inline Int Sign_Float(Float n)
{
    return n < 0 ? -1 : n > 0 ? 1 : 0;
};

inline Int Sign_Double(Double n)
{
    return n < 0 ? -1 : n > 0 ? 1 : 0;
};

inline Int NextPowerOfTwo_Int(Int n) {
    if(n < 0) return 1;
    return Pow(2, Ceiling(Log2(n)));
};

inline Long NextPowerOfTwo_Long(Long n) {
    if(n < 0) return 1;
    return Pow(2, Ceiling(Log2(n)));
};

inline Float NextPowerOfTwo_Float(Float n) {
    if(n < 0) return 1;
    return Pow(2, Ceiling(Log2(n)));
};

inline Double NextPowerOfTwo_Double(Double n) {
    if(n < 0) return 1;
    return Pow(2, Ceiling(Log2(n)));
};

inline Long Factorial(Int n) {
    long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
};

inline Long BinomialCoefficient(Int n, Int k) {
    return Factorial(n) / (Factorial(k) * Factorial(n - k));
};

inline Float InverseSqrtFast_Float(Float n) {
    Float xhalf = 0.5f * n;
    Int i = *(Int*)&n;
    i = 0x5f3759df - (i >> 1);
    n = *(Float*)&i;
    n = n * (1.5f - (xhalf * n * n));
    return n;
};

inline Double InverseSqrtFast_Double(Double n) {
    Double xhalf = 0.5 * n;
    Int i = *(Int*)&n;
    i = 0x5f3759df - (i >> 1);
    n = *(Double*)&i;
    n = n * (1.5 - (xhalf * n * n));
    return n;
};

inline Double DeegreesToRadians(Double degrees) {
    return degrees * MATH_DEG_TO_RAD;
};

inline Double RadiansToDegrees(Double radians) {
    return radians * MATH_RAD_TO_DEG;
};

inline void Swap(void* a, void* b)  {
    void* tmp = a;
    a = b;
    b = tmp;
};
