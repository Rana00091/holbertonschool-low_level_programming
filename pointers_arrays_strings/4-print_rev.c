#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
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
