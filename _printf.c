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
