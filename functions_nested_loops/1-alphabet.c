#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 *
 * Return: Nothing
 */

void print_alphabet(void)
{
	char letter ='a';

	while (letter <='z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
