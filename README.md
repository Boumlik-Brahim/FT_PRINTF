# PRINTF

ft_printf is a project that requires you to recreate the functionality of the standard C library function, printf. In this project, you will write a function that takes a format string and a variable number of arguments and outputs the formatted string.

# Installation:

To use this function in your projects, you must first compile it into a static library file. To do this, run the following command:

`make`

This will compile the library into a file called libftprintf.a. 

# Usage:

To use the function in your code, you must include the ft_printf.h header file:

`#include "ft_printf.h"`

You can then call the ft_printf function with a format string and a variable number of arguments:

`int	ft_printf(const char *format, ...);`

The function returns the number of characters printed, excluding the null byte used to end the output to strings.

# Format Specifiers:

The function recognizes the following format specifiers:

- %c: Character
- %s: String
- %p: Pointer address
- %d or %i: Signed decimal integer
- %u: Unsigned decimal integer
- %x or %X: Hexadecimal integer

Conclusion
The ft_printf project is an important project that will help you to gain a better understanding of how the printf function works and how to write your own C functions that take variable arguments. By completing this project, you will gain a deeper understanding of how to format output in C and how to work with variable arguments in your functions.
