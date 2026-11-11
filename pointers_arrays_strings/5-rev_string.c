#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
void rev_string(char *s)
{
    /**
    * rev_string - reverses a string
    * @s: string to reverse
    *
    * Return: nothing
    */
    
    int len = 0;
    int start = 0;
    int end;
    char temp;

    while (s[len] != '\0')
    {
        len++;
    }

    end = len - 1;

    while (start < end)
    {
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;

        start++;
        end--;
    }

}
