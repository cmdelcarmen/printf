Written by Caroline Del Carmen and Luis Melendez
as part of our **printf** Holberton School Project.

I. File List
------------
holberton.h  
- Header file. Contains libraries & prototypes.  
printf.c  
- Prints out string and calls appropiate functions for string modifiers.  
lengths.c  
- Gets the length of a string.  
functions.c  
- Contains the putchar function written by holberton used to print out characters.  
printModifiers.c  
- Contains the printing functions for c, s, i, and d string modifiers.  
avPrintModifiers.c  
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
Contains two functions: _printf; and printfArugment;  

int _printf(const char s[], ...);  
This is our version of the printf function. It starts out with validating the input and then
creating a va_list of all the arguments passed. It then goes through a for loop that either
prints out the passed string or passed the string modifier to another function called
printArgument;. Returns the length of the string.

int printArgument(char, va_list, int);  
This functin takes the string modifier, and uses it to call the appropiate printing function.
It returns the length of the string.

C. **Lengths.c**  
Contains function getLengthOfFirstArg;  

int getLengthOfFirstArg(const char s[])  
Function takes the first arguement passed to our _printf function and gets the length of the
string. This value is then returned to _printf.

D. **PrintfModifiers.c**  


