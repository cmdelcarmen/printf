/**
 * reverse_mod - function prints string backwards
 * @string: string passed to be printed
 * @finalLength: count every character printed
 * Return: finalLength
 */
int reverse_mod(char *string, int finalLength)
{
	int count, newSpot, oldSpot, arrayLength = 0;
	char sub;

	for (count = 0; string[count] != '\0'; count++)
	{
		arrayLength++;
	}

	newSpot = arrayLength - 1;

	for (count = newSpot; count >= 0; count--)
	{
		putchar(string[count]);
	}

	return (finalLength);
}

/**
 * rot_mod - function prints string ROT13'd
 * @string: string passed to be printed
 * @finalLength: count every character printed
 * Return: final length
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
				putchar(lower[count2]);
				break;
			}
		}
	}

	return (finalLength);
}
