#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 *
 * Return: Always 0
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");

	return (0);
}
