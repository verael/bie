# BIE Library: Bit Interpretation and Editing

## About

**bIE** is a lightweight, header-only C library for efficient bit manipulation. It provides simple macros to check, get, set, clear, and toggle individual bits, bit ranges, and masks.

## Features

- Single-bit operations
- Bit range operations
- Bit mask operations
- Bit rotation
- Compatible with both 32-bit and 64-bit systems

## Installation

1. Copy `bie.h` into your project's include directory.
2. Include it in your C source files:

```c
#include "bie.h"
```

## Macro Overview

### Single-Bit Operations
- **`BIE_CHECK_BIT(value, bit)`**: Check if a bit is set  
- **`BIE_GET_BIT(value, bit)`**: Get a bit's value  
- **`BIE_SET_BIT(value, bit)`**: Set a bit to `1`  
- **`BIE_CLEAR_BIT(value, bit)`**: Clear a bit to `0`  
- **`BIE_TOGGLE_BIT(value, bit)`**: Flip a bit  

### Bit Range Operations
- **`BIE_CHECK_RANGE(value, start, count)`**: Check if any bits in a range are set  
- **`BIE_GET_RANGE(value, start, count)`**: Extract a range of bits  
- **`BIE_SET_RANGE(value, start, count)`**: Set bits in a range to `1`  
- **`BIE_CLEAR_RANGE(value, start, count)`**: Clear bits in a range to `0`  
- **`BIE_TOGGLE_RANGE(value, start, count)`**: Flip bits in a range  

### Bit Mask Operations
- **`BIE_CHECK_MASK(value, mask)`**: Check if any masked bits are set  
- **`BIE_GET_MASK(value, mask)`**: Extract masked bits  
- **`BIE_SET_MASK(value, mask)`**: Set masked bits to `1`  
- **`BIE_CLEAR_MASK(value, mask)`**: Clear masked bits to `0`  
- **`BIE_TOGGLE_MASK(value, mask)`**: Flip masked bits  

### Bit Rotation
- **`BIE_ROTATE_LEFT(value, shift)`**: Rotate bits left  
- **`BIE_ROTATE_RIGHT(value, shift)`**: Rotate bits right  

## Example

```c
#include <stdio.h>
#include "bie.h"

int main() {
    unsigned long value = 0b10101010;

    // Set the 3rd bit
    BIE_SET_BIT(value, 3);

    // Check if the 2nd bit is set
    if (BIE_CHECK_BIT(value, 2)) {
        printf("2nd bit is set!\n");
    }

    // Extract bits 2 to 4
    unsigned long range = BIE_GET_RANGE(value, 2, 3);
    
    printf("Extracted range: %lu\n", range);

    return 0;
}
```

## Requirements

- C99 or later
- No external dependencies
- Works on 32-bit and 64-bit platforms

## Licence

This project is released under the MIT Licence. See the [LICENCE](LICENCE) file for details.

## Contributions

Contributions are welcome! Submit a pull request or open an issue on the repository.
