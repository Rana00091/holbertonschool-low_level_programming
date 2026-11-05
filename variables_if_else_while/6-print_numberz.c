#include <stdio.h>

/**
 * main - prints single digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');
		number++;
	}

	putchar('\n');

	return (0);
}
