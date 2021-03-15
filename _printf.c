#include "holberton.h"
/**
 * _printf - function prints out string
 * @s: first arguemnt passed
 * Return: totalLength, the total number of characters printed
 */
int _printf(const char *s, ...)
{
	int count, finalLength = 0;
	va_list printList;

	va_start(printList, s);

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] != '%') /*prints out every index of s*/
		{
			putchar(s[count]);
			finalLength++;
		}
		if (s[count] == '%') /*calls function that prints argument*/
		{
			if (s[count + 1] != 's' && s[count + 1] != 'c' &&
				s[count + 1] != 'i' && s[count + 1] != 'b' &&
				s[count + 1] != 'r' && s[count + 1] != 'R')
			{
				putchar(s[count]);
				finalLength++;
			}
			else
			{
				finalLength = printArgument(s[count + 1], printList, finalLength);
				count += 1;
			}
		}
	}
	va_end(printList);

	return (finalLength);
}

/**
 * printArgument - function prints out arguments in
 * accordance with string modifiers
 * @stringMod: string modifier
 * @printList: list of arguments ot be printed
 * @finalLength: total numbre of charactes printed
 * Return: finalLength
 */
int printArgument(char stringMod, va_list printList, int finalLength)
{
	int count;

	for (count = 0; count < 1; count++)
	{
		if (stringMod == 's')
		{
			finalLength = string_mod(va_arg(printList, char*), finalLength);
		}
		if (stringMod == 'c')
		{
			finalLength = char_mod(va_arg(printList, int), finalLength);
		}
		if (stringMod == 'i' || stringMod == 'd')
		{
			finalLength = int_mod(va_arg(printList, int), finalLength);
		}
		if (stringMod == 'b')
		{
			finalLength = binary_mod(va_arg(printList, int), finalLength);
		}
		if (stringMod == 'r')
		{
			finalLength = reverse_mod(va_arg(printList, char *), finalLength);
		}
		if (stringMod == 'R')
		{
			finalLength = rot_mod(va_arg(printList, char *), finalLength);
		}
	}

	return (finalLength);
}
