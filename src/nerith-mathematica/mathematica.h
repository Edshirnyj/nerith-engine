#include <math.h>
#include <stdint.h>

#include "types.h"
#include "macros.h"

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
static inline Byte Abs_Byte(Byte x);
static inline Short Abs_Short(Short x);
static inline Int Abs_Int(Int x);
static inline Long Abs_Long(Long x);
static inline Float Abs_Float(Float x);
static inline Double Abs_Double(Double x);

#define ABS(x) ({\
    typeof(x)_x = (x); \
    _Generic((_x),\
        Byte: Abs_Byte,\
        Short: Abs_Short,\
        Int: Abs_Int,\
        Long: Abs_Long,\
        Float: Abs_Float,\
        Double: Abs_Double \
        )(_x); \
})

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

static inline Int DivRem_Int(Int a, Int b, Int* result);
static inline Long DivRem_Long(Long a, Long b, Long* result);

#define DivRem(a, b, result) ({ \
    typeof(a) _a = (a); \
    typeof(b) _b = (b); \
    typeof(result) _result = (result); \
    (void)(sizeof(_a) == sizeof(_b) && sizeof(_a) == sizeof(_result)); \
    _Generic((_a),\
        Int: DivRem_Int, \
        Long: DivRem_Long \
        )(_a, _b, _result); \
})

static inline Double Log_Natural(Double n);
static inline Double Log_To_Base(Double n, Double base);
#define Log(...) _Overload_Args2(Log_Natural, Log_To_Base, __VA_ARGS__)

static inline Double Log10(Double n);
static inline Double Log2(Double n);

static inline Double Exp(Double n);
static inline Double Remainder(Double x, Double y);

static inline Byte Min_Byte(Byte a, Byte b);
static inline Ubyte Min_Ubyte(Ubyte a, Ubyte b);
static inline Short Min_Short(Short a, Short b);
static inline Ushort Min_Ushort(Ushort a, Ushort b);
static inline Int Min_Int(Int a, Int b);
static inline Uint Min_Uint(Uint a, Uint b);
static inline Long Min_Long(Long a, Long b);
static inline Ulong Min_Ulong(Ulong a, Ulong b);
static inline Float Min_Float(Float a, Float b);
static inline Double Min_Double(Double a, Double b);

#define Min(a, b) ({ \
    _Generic((_a), \
        Byte: Min_Byte, \
        Ubyte: Min_Ubyte, \
        Short: Min_Short, \
        Ushort: Min_Ushort, \
        Int: Min_Int, \
        Uint: Min_Uint, \
        Long: Min_Long, \
        Ulong: Min_Ulong, \
        Float: Min_Float, \
        Double: Min_Double \
    )(_a, _b); \
})

static inline Byte Max_Byte(Byte a, Byte b);
static inline Ubyte Max_Ubyte(Ubyte a, Ubyte b);
static inline Short Max_Short(Short a, Short b);
static inline Ushort Max_Ushort(Ushort a, Ushort b);
static inline Int Max_Int(Int a, Int b);
static inline Uint Max_Uint(Uint a, Uint b);
static inline Long Max_Long(Long a, Long b);
static inline Ulong Max_Ulong(Ulong a, Ulong b);
static inline Float Max_Float(Float a, Float b);
static inline Double Max_Double(Double a, Double b);

#define Max(a, b) ({ \
    _Generic((_a), \
        Byte: Max_Byte, \
        Ubyte: Max_Ubyte, \
        Short: Max_Short, \
        Ushort: Max_Ushort, \
        Int: Max_Int, \
        Uint: Max_Uint, \
        Long: Max_Long, \
        Ulong: Max_Ulong, \
        Float: Max_Float, \
        Double: Max_Double \
    )(_a, _b); \
})

static inline Double Round_Nearest(Double n);
static inline Double Round_Digits(Double n, Int digits);
#define Round(...) _Overload_Args2(Round_Nearest, Round_Digits, __VA_ARGS__)

static inline Double Truncate(Double n);

static inline Int Sign_Byte(Byte n);
static inline Int Sign_Short(Short n);
static inline Int Sign_Int(Int n);
static inline Int Sign_Long(Long n);
static inline Int Sign_Float(Float n);
static inline Int Sign_Double(Double n);

#define Sign(x) ({ \
    _Generic((_x), \
        Byte: Sign_Byte, \
        Short: Sign_Short, \
        Int: Sign_Int, \
        Long: Sign_Long, \
        Float: Sign_Float, \
        Double: Sign_Double \
    )(_x); \
})

static inline Int NextPowerOfTwo_Int(Int n);
static inline Long NextPowerOfTwo_Long(Long n);
static inline Float NextPowerOfTwo_Float(Float n);
static inline Double NextPowerOfTwo_Double(Double n);

#define NextPowerOfTwo(n) ({ \
    _Generic((_n), \
        Int: NextPowerOfTwo_Int, \
        Long: NextPowerOfTwo_Long, \
        Float: NextPowerOfTwo_Float, \
        Double: NextPowerOfTwo_Double \
    )(_n); \
})

static inline Long Factorial(Int n);

static inline Long BinomialCoefficient(Int n, Int k);

static inline Float InverseSqrtFast_Float(Float n);
static inline Double InverseSqrtFast_Double(Double n);

#define InverseSqrtFast(n) ({ \
    _Generic((_n), \
        Float: InverseSqrtFast_Float, \
        Double: InverseSqrtFast_Double \
    )(_n); \
})

static inline Float DeegreesToRadians_Float(Float degrees);
static inline Double DeegreesToRadians_Double(Double degrees);

#define DeegreesToRadians(degrees) ({ \
    _Generic((_degrees), \
        Float: DeegreesToRadians_Float, \
        Double: DeegreesToRadians_Double \
    )(_degrees); \
})

static inline Float RadiansToDegrees_Float(Float radians);
static inline Double RadiansToDegrees_Double(Double radians);

#define RadiansToDegrees(radians) ({ \
    typeof(radians) _radians = (radians); \
    _Generic((_radians), \
        Float: RadiansToDegrees_Float, \
        Double: RadiansToDegrees_Double \
    )(_radians); \
})

static inline void Swap(T a, T b);

static inline Int Clamp_Int(Int n, Int min, Int max);
static inline Float Clamp_Float(Float n, Float min, Float max);
static inline Double Clamp_Double(Double n, Double min, Double max);

#define Clamp(n, min, max) ({ \
    typeof(n) _n = (n); \
    typeof(min) _min = (min); \
    typeof(max) _max = (max); \
    (void)(sizeof(_n) == sizeof(_min) && sizeof(_n) == sizeof(_max)); \
    _Generic((_n), \
        Int: Clamp_Int, \
        Float: Clamp_Float, \
        Double: Clamp_Double \
    )(_n, _min, _max); \
})

static inline Int MapRange_Int(Int value, Int min, Int max, Int newMin, Int newMax);
static inline Float MapRange_Float(Float value, Float min, Float max, Float newMin, Float newMax);
static inline Double MapRange_Double(Double value, Double min, Double max, Double newMin, Double newMax);

#define MapRange(value, min, max, newMin, newMax) ({ \
    typeof(value) _value = (value); \
    typeof(min) _min = (min); \
    typeof(max) _max = (max); \
    typeof(newMin) _newMin = (newMin); \
    typeof(newMax) _newMax = (newMax); \
    (void)(sizeof(_value) == sizeof(_min) && \
        sizeof(_value) == sizeof(_max) && \
        sizeof(_value) == sizeof(_newMin) && \
        sizeof(_value) == sizeof(_newMax) \
    ); \
    _Generic((_value), \
        Int: MapRange_Int, \
        Float: MapRange_Float, \
        Double: MapRange_Double \
    )(_value, _min, _max, _newMin, _newMax); \
})

static inline Bool AproximatelyEqual(Float a, Float b, Int maxDeltaBits);

static inline Bool ApproximateEqualEpsilon_Double(Double a, Double b, Double epsilon);
static inline Bool ApproximateEqualEpsilon_Float(Float a, Float b, Float epsilon);

#define ApproximateEqualEpsilon(a, b, epsilon) ({ \
    typeof(a) _a = (a); \
    typeof(b) _b = (b); \
    typeof(epsilon) _epsilon = (epsilon); \
    (void)(sizeof(_a) == sizeof(_b) && sizeof(_a) == sizeof(_epsilon)); \
    _Generic((_a), \
        Float: ApproximateEqualEpsilon_Float, \
        Double: ApproximateEqualEpsilon_Double \
    )(_a, _b, _epsilon); \
})