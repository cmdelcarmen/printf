#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

typedef struct modifier
{
	char *modifier;
	void (*f)(char *string);
} modifierFunc;

typedef struct modifier_c
{
	char *modifier;
	void (*c)(int character);
} modifierFunc_c;

typedef struct modifier_i
{
	char *modifier;
	void (*i)(int integer);
} modifierFunc_i;

typedef struct modifier_b
{
	char *modifier;
	void (*b)(int integer);
} modifierFunc_b;

char *copyModifiers(char *dest, char *src, unsigned int n);
int getLength(char *s);
int getLengthOfFirstArg(char *s);
int getNumOfMods(char *s);
void selFn(char *s, va_list copyList, char *modArray);
void _printf(char *s, ...);
void (*selectorFunction(char *holder))(char*);
void (*selectorFunction_c(char *holder))(int);
void (*selectorFunction_i(char *holder))(int);
void (*selectorFunction_b(char *holder))(int);
void string_mod(char *string);
void char_mod(int character);
void int_mod(int integer);
void binary_mod(int integer);
void *initHolder(char *, char modifier, va_list copyList);

#endif
