#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int printArgument(char stringMod, va_list printList, int finalLength);

int string_mod(char *string, int finalLength);
int char_mod(int character, int finalLength);
int int_mod(int integer, int finalLength);
int binary_mod(int integer, int finalLength);
int reverse_mod(char *string, int finalLength);
int rot_mod(char *string, int finalLength);

#endif
