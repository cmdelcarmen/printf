#include "holberton.h"

/** _printf - function prints out string
 * @s: first argument passed
 */
void _printf(char *s, ...)
{
	unsigned int count, numOfMods, length, totalArrayLength = 0; 
	unsigned int firstArgumentLength = 0;
	char *string;
	va_list printList;
	va_list copyList;
	char modArray[100] = {0};

	firstArgumentLength = getLengthOfFirstArg(s); /*Gets lenght of s */
	numOfMods = getNumOfMods(s); /*Gets number of modifiers */

	copyModifiers(modArray, s, numOfMods); /*creates array of Modifiers */

	va_start(printList, s);
	va_copy(copyList, printList);

	totalArrayLength = 21;

	selFn(s, copyList, modArray); /*Passes 1st argument, list of arguments & array of mods*/
	va_end(printList);
}

/**
 * copyModifiers - function creates array of modifiers
 * @dest: array of modifiers
 * @src: first argument passed
 * @n: number of arguments
 * Return: dest, the array of modifiers
 */
char *copyModifiers(char *dest, char *src, unsigned int n)
{
	unsigned int count, stop = 0, count2 = 0;

	for (count = 0; src[count] != '\0'; count++)
	{
		if (src[count] == '%')
		{
			dest[count2] = src[count + 1];
			count2++;
		}
	}

	//printf("%s\n", dest);
	return (dest);
}

