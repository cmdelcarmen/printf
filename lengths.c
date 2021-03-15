#include "holberton.h"

int getLength(char *s)
{
	int count, arrayLength = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		arrayLength++;
	}
	return (arrayLength);
}
int getLengthOfFirstArg(char *s)
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
int getNumOfMods(char *s)
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
	return (numOfMods);
}

