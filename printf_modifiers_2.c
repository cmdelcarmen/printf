#include "holberton.h"
/**
 * reverse_mod - function prints string backwards
 * @string: string passed to be printed
 * @finalLength: count every character printed
 * Return: finalLength
 * Description: Lets reverse a string
 */
int reverse_mod(char *string, int finalLength)
{
	int count, newSpot, arrayLength = 0;

	for (count = 0; string[count] != '\0'; count++)
	{
		arrayLength++;
	}

	newSpot = arrayLength - 1;

	for (count = newSpot; count >= 0; count--)
	{
		_putchar(string[count]);
	}

	return (finalLength);
}

/**
 * rot_mod - function prints string ROT13'd
 * @string: string passed to be printed
 * @finalLength: count every character printed
 * Return: final length
 * Description: Lets change some letters to rot13 mode
 */
int rot_mod(char *string, int finalLength)
{
	int count;
	int count2;

	char upper[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M',
		'N', 'O', 'P', 'Q', 'R', 'S', 'T',
		'U', 'V', 'W', 'X', 'Y', 'Z',
		'a', 'b', 'c', 'd', 'e', 'f', 'g',
		'h', 'i', 'j', 'k', 'l', 'm',
		'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z'};
	char lower[] = {'N', 'O', 'P', 'Q', 'R', 'S',
		'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
		'I', 'J', 'K', 'L', 'M',
		'n', 'o', 'p', 'q', 'r', 's',
		't', 'u', 'v', 'w', 'x', 'y', 'z', 'a',
		'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	for (count = 0; string[count] != '\0'; count++)
	{
		for (count2 = 0; upper[count2] != '\0'; count2++)
		{
			if (string[count] == upper[count2])
			{
				_putchar(lower[count2]);
				break;
			}
		}
		if (upper[count2] == '\0')
		{
			_putchar(string[count]);
		}
	}

	return (finalLength);
}
