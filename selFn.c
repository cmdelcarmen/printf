#include "holberton.h"
/**
 * selFn - function prints out s argument, and calls 
 * appropiate function to print out list of arguments
 * @s - first argument that has the modifiers
 * @copyList: list of arguments to be printed
 * @modArray: array of modifiers
 */

void selFn(char *s, va_list copyList, char *modArray)
{
	/*int (*funct)(char *, char *, int); Pointer to function that will print out cL arguemnt*/
	int count, count2, count3; /*Loop counter variables*/
	char *holder = "YYY"; /*This variable is passed to *funct to select correct function */
	/* NEED TO ADD INDEX VARIABLE IN LOOP TO KNOW WHERE TO CONTINUE PRINTING*/

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] != '%')
		{
			if (s[count - 1] != '%')
			{
				putchar(s[count]);
			}
		}
		if (s[count] == '%')
		{
			initHolder(holder, s[count + 1], copyList);
			count += 1;
		}
	}
}
/**
 *
*/
void *initHolder(char *holder, char modifier, va_list copyList)
{
	void (*funct)(char *);
	void (*c_funct)(int);
	void (*i_funct)(int);
	void (*b_funct)(int);

	switch (modifier)
	{
		case 's':
			holder = "sYY";
			funct = selectorFunction(holder);
			funct(va_arg(copyList, char *));
			break;

		case 'c':
			holder = "cYY";
			c_funct = selectorFunction_c(holder);
			c_funct(va_arg(copyList, int));
			break;

		case 'i':
			holder = "iYY";
			i_funct = selectorFunction_i(holder);
			i_funct(va_arg(copyList, int));
			break;

		case 'd':
			holder = "iYY";
			i_funct = selectorFunction_i(holder);
			i_funct(va_arg(copyList, int));
			break;
		case 'b':
			holder = "bYY";
			b_funct = selectorFunction_b(holder);
			b_funct(va_arg(copyList, int));
			break;
	}

	return;
}

