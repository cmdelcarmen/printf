#include "holberton.h"

/**
 * convertIntToOctal - Convert decimal to octal
 * @integer: Number to be converted
 * @finalLength: Length of the string to print
 *
 * Return: Final length
 */
int convertIntToOctal(int integer, int finalLength)
{
	int octalNumber = 0, i = 1, number = integer;

	while (integer != 0)
	{
		octalNumber += (integer % 8) * i;
		integer /= 8;
		i *= 10;
	}

	while (octalNumber != 0)
	{
		_putchar('0' + (octalNumber % 10));
		octalNumber /= 10;
		finalLength++;
	}

	return (finalLength);
}
