Written by Caroline Del Carmen and Luis Melendez
as part of our **printf** Holberton School Project.

I. File List
------------
- holberton.h  
  - Header file. Contains libraries & prototypes.  
- printf.c  
  - Prints out string and calls appropiate functions for string modifiers.  
- printf_helper_functions.c  
  - Contains helper functions.  
- printf_modifiers.c  
  - Contains the printing functions for c, s, i, and d string modifiers.  
- printf_modifiers_2.c  
  - Contains the printing functions for more advanced string modifiers.  

II. Design
----------
The program is designed to mimic printf abilities. It is capable of handling
the 'c', 's', and 'i' arguments just like printf. It also always returns the length of
the string printed as well. Below are some examples:

Example:  
**len = printf("Let's try to printf a simple sentence.\n");**  
**len2 = _printf("Let's try to printf a simple sentence.\n");**  
**printf("Length:[%d, %i]\n", len, len2);**  

Let's try to printf a simple sentence.  
Let's try to printf a simple sentence.  
Length:[39, 39]  
Length:[39, 39]  

III. File Descriptions
----------------------
A. **holberton.h**  

This is our header file. It contains the libraries used in our code:
stdio.h, stdlib.h, stdarg.h, and limits.h. The prototypes for all functions are
also listed here. Starting with our two mainly used onces, follows by a list of the
functions we used to print out the special arguments.

B. **_printf.c**  
Contains: _printf;

int _printf(const char s[], ...);  
This is our version of the printf function. It starts out with validating the input and then
creating a va_list of all the arguments passed. It then goes through a for loop that either
prints out the passed string or passed the string modifier to another function called
printArgument;. Returns the length of the string.


C. **printf_helper_functions.c**  
Contains function printfArugment;  

int printArgument(char, va_list, int);  
This functin takes the string modifier, and uses it to call the appropiate printing function.
It returns the length of the string.

D. **printf_modifiers.c**  
This file contains the functions to be verify by the modifiers 's', 'c', 'i' or 'd' and 'b'. The funtions are string_mod(), char_mod(), int_mod() and binary_mod().

int string_mod(char \*string, int finalLength);  
Takes a pointer of characters and print it out.

int char_mod(int character, int finalLength);  
Print out the character passed to.

int int_mod(int integer, int finalLength);  
Recieve an integer number and print it out.

int binary_mod(int integer, int finalLength);  
Take an integer and print it out in binary mode.

E. **printf_modifiers_2**  
In this file we have functions that change a string pass to it. The functions are reverse_mod() and rot_mod().

int reverse_mod(char \*string, int finalLength);  
Funtion that print a string in reverse, except for the null byte ('\0').

int rot_mod(char \*string, int finalLength);  
Function that change a string to a rot13 mode and print it out.

