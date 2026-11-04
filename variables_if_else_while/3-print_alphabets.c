#include <stdio.h>

/**
 * main - prints lowercase and uppercase alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';
	char letter_uppercase = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (letter_uppercase <= 'Z')
	{
		putchar(letter_uppercase);
		letter_uppercase++;
	}

	putchar('\n');

	return (0);
}
