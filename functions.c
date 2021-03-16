#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _abs - prints absolute value
 * @r: int sents to function
 *
 * Return: 0
 */
int _abs(int r)
{

	int mod_r = (r * -1);

	if (r > 0)
	{
		return (r);
	}

	else if (r < 0)
	{
		return (mod_r);
	}

	else

		return (0);

}
