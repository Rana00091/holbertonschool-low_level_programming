#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
int _strlen(char *s)
{
    int length =0;

    while(s[length] != '\0')
    {
        length++;
    }

    return (length);
}
