#include <stdbool.h>

typedef void* T;

typedef signed char Byte;
typedef unsigned char Ubyte;

typedef signed char Char;
typedef unsigned char Uchar;

typedef signed short Short;
typedef unsigned short Ushort;

typedef signed int Int;
typedef unsigned int Uint;

typedef signed long Long;
typedef unsigned long Ulong;

typedef float Float;
typedef double Double;

typedef bool Bool;

typedef char UTF8;
typedef unsigned char UTF16;
typedef unsigned int UTF32;

typedef const char* StringTableEntry;

#define DOUBLE_EPSILON 0.0000000000001
#define FLOAT_EPSILON 0.0000001f

#define FLOAT_MAX 0x1.fffffep127f
#define FLOAT_MIN 0x1.0p-126f

#define DOUBLE_MAX 0x1.fffffffffffffp1023
#define DOUBLE_MIN 0x1.0p-1022