#include "holberton.h"

void (*selectorFunction(char *holder))(char*)
{
	int count = 0;

	modifierFunc modifiers[] = {

		{"sYY", string_mod},
		{NULL, NULL}
	};

	return (modifiers[count].f);
}

void (*selectorFunction_c(char *holder))(int)
{
	int count = 0;

	modifierFunc_c modifiers[] = {

		{"cYY", char_mod},
		{NULL, NULL}
	};

	return (modifiers[count].c);
}

void (*selectorFunction_i(char *holder))(int)
{
	int count = 0;

	modifierFunc_i modifiers[] = {

		{"iYY", int_mod},
		{NULL, NULL}
	};

	return (modifiers[count].i);
}

void (*selectorFunction_b(char *holder))(int)
{
	int count = 0;

	modifierFunc_b modifiers[] = {

		{"bYY", binary_mod},
		{NULL, NULL}
	};

	return (modifiers[count].b);
}
