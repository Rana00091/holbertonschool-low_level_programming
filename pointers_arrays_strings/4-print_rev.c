#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
    int rev = 0;
    int i;
    int len;

    for(len = 0; s[len] !='\0'; len++)
    {
        rev++;
    }
    for(i = rev -1; s[i] > 0; i--)
    {
        _putchar(s[i]);
    }

    _putchar('\n');
}
