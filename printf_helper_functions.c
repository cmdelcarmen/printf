#include "holberton.h"

/**
 * printArgument - function prints out arguments in
 * accordance with string modifiers
 * @stringMod: string modifier
 * @printList: list of arguments ot be printed
 * @totalCharsPrinted: total numbre of charactes printed
 * Return: totalCharsPrinted
 * Description: Select the function to print based on the modifier
 */
int printArgument(char stringMod, va_list printList, int totalCharsPrinted)
{
	int count;

	for (count = 0; count < 1; count++)
	{
		if (stringMod == 's')
		{
			totalCharsPrinted = string_mod(va_arg(printList, char*), totalCharsPrinted);
		}
		if (stringMod == 'c')
		{
			totalCharsPrinted = char_mod(va_arg(printList, int), totalCharsPrinted);
		}
		if (stringMod == 'i' || stringMod == 'd')
		{
			totalCharsPrinted = int_mod(va_arg(printList, int), totalCharsPrinted);
		}
		if (stringMod == 'b')
		{
			totalCharsPrinted = binary_mod(va_arg(printList, int), totalCharsPrinted);
		}
		if (stringMod == 'r')
		{
			totalCharsPrinted = reverse_mod(va_arg(printList, char *), totalCharsPrinted);
		}
		if (stringMod == 'R')
		{
			totalCharsPrinted = rot_mod(va_arg(printList, char *), totalCharsPrinted);
		}
	}

	return (totalCharsPrinted);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On error, -1 is returned, and errno is set appropriately.
 * Description: Function to print characters
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
