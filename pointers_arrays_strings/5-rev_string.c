#include "main.h"
#include <stdio.h>

/**
* rev_string - reverses a string
* @s: string to reverse
*
* Return: nothing
*/
void rev_string(char *s)
{
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
