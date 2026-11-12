#include "main.h"

/**
* _strncat - concatenates two strings using at most n bytes from src
* @dest: destination string
* @src: source string
* @n: maximum number of bytes to use from src
*
* Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0' ; i++)
	{
		/* where does text stop*/
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
