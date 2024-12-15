#pragma once

#include <limits.h>

#if UINTPTR_MAX == 0xFFFFFFFFFFFFFFFF
    #define BIE_ONE 1ULL
#else
    #define BIE_ONE 1UL
#endif

// Single Bit Operations
#define BIE_CHECK_BIT(value, bit) (!!((value) & (BIE_ONE << (bit))))
#define BIE_GET_BIT(value, bit) (!!((value) & (BIE_ONE << (bit))))
#define BIE_SET_BIT(value, bit) ((value) |= (BIE_ONE << (bit)))
#define BIE_CLEAR_BIT(value, bit) ((value) &= ~(BIE_ONE << (bit)))
#define BIE_TOGGLE_BIT(value, bit) ((value) ^= (BIE_ONE << (bit)))

// Range Bits Operations
#define BIE_CHECK_RANGE(value, start, count) (((value) & (((BIE_ONE << (count)) - 1) << (start))) != 0)
#define BIE_GET_RANGE(value, start, count) (((value) >> (start)) & ((BIE_ONE << (count)) - 1))
#define BIE_SET_RANGE(value, start, count) ((value) |= (((BIE_ONE << (count)) - 1) << (start)))
#define BIE_CLEAR_RANGE(value, start, count) ((value) &= ~(((BIE_ONE << (count)) - 1) << (start)))
#define BIE_TOGGLE_RANGE(value, start, count) ((value) ^= (((BIE_ONE << (count)) - 1) << (start)))

// Mask Bits Operations
#define BIE_CHECK_MASK(value, mask) (((value) & (mask)) != 0)
#define BIE_GET_MASK(value, mask) ((value) & (mask))
#define BIE_SET_MASK(value, mask) ((value) |= (mask))
#define BIE_CLEAR_MASK(value, mask) ((value) &= ~(mask))
#define BIE_TOGGLE_MASK(value, mask) ((value) ^= (mask))

// Rotation Operations
#define BIE_ROTATE_LEFT(value, shift) (((value) << (shift)) | ((value) >> (BIE_BITS - (shift))))
#define BIE_ROTATE_RIGHT(value, shift) (((value) >> (shift)) | ((value) << (BIE_BITS - (shift))))
