#include "holberton.h"
/**
 * _printf - function prints out string
 * @s: first arguemnt passed
 * Return: totalLength, the total number of characters printed
 * Description: Our own printf funtion
 */
int _printf(const char *s, ...)
{
	int n, totalCharsPrinted = 0;
	va_list printList;

	if (s == NULL)
		return (-1);

	va_start(printList, s);

	if (printList == NULL)
		return (-1);

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == '%' && s[n + 1] == '\0')
			return (-1);

		if (s[n] == '%') /*calls function that prints argument*/
		{
			if (s[n + 1] != 's' && s[n + 1] != 'c' && s[n + 1] != 'i' &&
					s[n + 1] != 'R' && s[n + 1] != 'd' && s[n + 1] != 'r' &&
					s[n + 1] != 'b')
			{_putchar(s[n]);
				totalCharsPrinted++; }
			else
			{totalCharsPrinted = printArgument(s[n + 1], printList, totalCharsPrinted);
				n += 1; }
		}
		else
		{
			_putchar(s[n]);
			totalCharsPrinted++;
		}
	}
	va_end(printList);
	return (totalCharsPrinted);
}

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
