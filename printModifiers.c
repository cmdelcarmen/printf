#include "holberton.h"

/**
 * string_mod - function prints string
 * @string: string argument passed to be printed
 * @finalLength: counts every character printed
 * Return: finalLength
 */
int string_mod(char *string, int finalLength)
{
	int count;

	for (count = 0; string[count] != '\0'; count++)
	{
		_putchar(string[count]);
		finalLength++;
	}

	return (finalLength);
}

/**
 * char_mod - function prints char
 * @character: char arguemnt passed to be printd
 * @finalLength: counts every character printed
 * Return: finalLength
 */
int char_mod(int character, int finalLength)
{
	_putchar(character);
	return (finalLength);
}

/**
 * int_mod - function prints int
 * @integer: int arguemnt passed to be printd
 * @finalLength: counts every character printed
 * Return: finalLength
 */
int int_mod(int integer, int finalLength)
{

	if (integer < 0)
	{
		_putchar('-');
		finalLength++;
		integer = abs(integer);
	}

	if (integer > 9)
	{
		int digit = integer / 10;

		integer -= 10 * digit;
		int_mod(digit, finalLength);
	}

	_putchar(integer + '0');
	finalLength++;

	return (finalLength);
}

/**
 *  binary_mod - function prints binary
 * @integer: char arguemnt passed to be printd
 * @finalLength: counts every character printed
 * Return: finalLength
 */
int binary_mod(int integer, int finalLength)
{
	int binaryNum[1000];
	int count = 0, count2;

	while (integer > 0)
	{
		binaryNum[count] = integer % 2;
		integer = integer / 2;
		count++;
	}

	for (count2 = count - 1; count2 >= 0; count2--)
	{
	_putchar(binaryNum[count2] + 48);
	}
	return (finalLength);
}
