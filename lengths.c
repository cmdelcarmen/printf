/**
 * getLengthOfFirstArg - function gets length of 1st arg
 * @s: first argument passed
 * Return: arrayLength, length of array
 */
#include "holberton.h"

int getLengthOfFirstArg(const char *s)
{
	int count, arrayLength = 0, numOfMods = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if ((s[count] == '%') && s[count + 1] == 's')
		{
			numOfMods++;
		}
		arrayLength++;
	}
	arrayLength = (arrayLength - (numOfMods * 2));
	return (arrayLength);
}
