#include "main.h"

/**
 * print_diagonal - Draws a diagonal line
 * @n: Number of times to print the character _
 *
 * Return: Nothing
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
