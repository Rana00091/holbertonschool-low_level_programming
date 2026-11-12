#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to print
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	while (str[i] != '\0')
	{
		if (i <= len)
		{
			_putchar(str[i]);
		}
		i += 2;
	}
	_putchar('\n');
}

