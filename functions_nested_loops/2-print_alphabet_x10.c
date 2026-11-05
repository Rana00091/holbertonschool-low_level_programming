#includ "main.h"

/**
 * function print alphabatic 10 times
 *
 * return : always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char letter;

	while (i <= 9)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
	
	_putchar('\n');
	i++

	}
}
