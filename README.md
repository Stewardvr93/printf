<p align="center">
  <img width="409" height="128" src="https://www.maizure.org/projects/printf/fig0.png">
</p>

# 0x11. C - printf

Repository for **_printf()** function written as part of the **Low-level programming and Algorithm** project at **Holberton School**. This implementation produces an output according to a format.


## Project overview

### Compilation:

All files will be compiled with gcc 4.8.4 using the flags:  -Wall -Werror -Wextra -pedantic

    gcc -Wall -Werror -Wextra -pedantic *.c

### Betty coding style:

All files are written in C and follows the Betty coding style for Holberton School. For more detail, check this page:

[Betty style documentation](https://github.com/holbertonschool/Betty/wiki)

### Authorized functions and macros

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)
* _putchar(char c)

## Function prototypes

All function prototypes used to compile _printf() are included in the header file **main.h**:
*    int (*get_function(const char *format))(va_list);
*    int _putchar(char c);
*    int _printf(const char *format, ...);
*    int print_s(va_list arg);
*    int print_c(va_list arg);
*    int print_pc(va_list arg);
*    int print_d(va_list arg);
*    int print_i(va_list arg);

## File description

* **_printf.c:** - contains the function _printf()
* **_putchar.c:** - contains the function _putchar()
* **man_3_printf:** - manual page for  _printf() function.
* **structure.c** - contains the function get_func()
* **structure_lists.c** - contains the functions print_char, print_str and print_pct for the case of printing character, string and '%', contains the function print_dec for the case of printing decimal and integer
* **main.h** - contains all headers, prototypes and structure declaration

## Function description

**int _printf(const char \*format, ...)**

This function produces output under the control of a *format string* that specifies how subsequent arguments (or arguments accessed via the variable-length argument of stdarg(3)) are converted for output.

The **format string** is composed of zero or more directives:
1. Ordinary characters that are copied unchanged to the output stream. (except %)
2. Conversion specifications, each of which results in fetching zero or more subsequent arguments. Each conversion specification starts with the character %, ends with a conversion specifier ( which is a letter).


The **conversion specifier:**


The conversion specifier is a letter that specifies the type of conversion to be applied. Our program includes the following conversion   specifiers:

**d, i:**	  The int are a argument in decimal notation. This return the
                decimal number, calculed the length of the digit and after
                print digit for digit and return the complex num, and writing this
                in the console.

**c:**      The char character, its print when in the variable get alone a
                character, this character are print in console in the assigment
                position.

**s:**      The char string, get the string and print all characters into,
                Characters from the array are written up to (but not including)
                a terminating null byte ('\0').

**%:**	    A '%' is written.  No argument is converted.  The complete
                conversion specification is '%%'.


**Return value:**

Upon successful return, these functions return the number of characters printed (excluding the null byte used to end output to strings).

If you put the % and after of this the program see a space of a null byte ('\0'), the program return (-1).
___

**int (\*get_func(const char \*format))(va_list)**

This function called by *_printf()* and checks for valid conversion specifier when it finds a '%' character. The *get_func function will check for the right conversion specifier. Upon valid specifier, it returns the corresponding function.
___

**int print_c(va_list arg)**

This function gets a variadic argument and prints each character of char type.
___

**int print_s(va_list arg)**

This function gets a variadic argument, traverse the string, and prints a character at a time. 
___

**int print_pc(va_list arg)**

This function prints a per cent sign '%'.
___

**int print_i(va_list arg);**
This function prints a per cent sign '%'.
___

**int print_d(va_list arg)**
This function prints a per cent sign '%'.
___

**int _putchar(char c)**

writes the character c to standard output
___


## Examples

        To print a character:

           #include "main.h"

           _printf("%c",
                   'S');

        To print a string:

           #include "main.h"

           char string[] = "Hello World!;

           _printf("%s",
                   string);

        To print a integrer or double:

           #include "main.h"

           int day = 24, moth = 3, year = 2022;

           _printf("The date is %i/%d/%i", day, moth, year);

## Authors
[Edwin Gaviria Cardenas](https://github.com/Edwin-0396) | [@egc4611](https://twitter.com/EGC4611)

[Leonardo Cumaco](https://github.com/Coderlancce) | [@Coderlancce](https://twitter.com/Coderlancce)

