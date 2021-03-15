#include "holberton.h"

void string_mod(char *string)
{
	int count;

	for (count = 0; string[count] != '\0'; count++)
	{
		putchar(string[count]);
	}
	return;
}

void char_mod(int character)
{
	putchar(character);
	return;
}

void int_mod(int integer)
{
	putchar(integer + 48);
	return;
}

void binary_mod(int integer)
{
	 int binaryNum[32];
	 int count = 0, count2;

	 while (integer > 0)
	 {
		 binaryNum[count] = integer % 2;
		 integer = integer / 2;
		 count++;
	 }

	 for (count2 = count - 1; count2 >= 0; count2--)
	 {
		putchar(binaryNum[count2] + 48);
	 }
	return;
}
