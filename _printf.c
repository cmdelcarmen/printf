#include "holberton.h"
/**
 * _printf - function prints out string
 * @s: first arguemnt passed
 * Return: totalLength, the total number of characters printed
 * Description: Our own printf funtion
 */
int _printf(const char *s, ...)
{
	int n, firstArgumentLength, finalLength = 0;
	va_list printList;

	if (s == NULL)
		return (-1);

	va_start(printList, s);

	if (printList == NULL)
		return (-1);

	firstArgumentLength = getLengthOfFirstArg(s);
	if (firstArgumentLength == 1 && s[0] == '%')
		return (-1);

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] != '%') /*prints out every index of s*/
		{_putchar(s[n]);
			finalLength++; }
		if (s[n] == '%' && s[n + 1] == '%')
		{_putchar(s[n]);
			finalLength++;
		}
		if (s[n] == '%' && s[n + 1] == '\0')
			return (-1);

		if (s[n] == '%' && printList != NULL) /*calls function that prints argument*/
		{
			if (s[n + 1] != 's' && s[n + 1] != 'c' && s[n + 1] != 'i' && s[n + 1] != 'R'
					&& s[n + 1] != 'd' && s[n + 1] != 'r' && s[n + 1] != '%')
			{_putchar(s[n]);
				finalLength++; }
			else
			{finalLength = printArgument(s[n + 1], printList, finalLength);
				n += 1; }
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
 * Description: Select the function to print based on the modifier
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
