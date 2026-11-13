#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any byte in accept
 * @s: string to search
 * @accept: bytes to search for
 *
 * Return: pointer to the first matching byte, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}

	return (NULL);
}
