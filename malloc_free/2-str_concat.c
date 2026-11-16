#include <stdlib.h>

/**
* str_concat - Concatenates two strings
* @s1: The first string
* @s2: The second string
*
* Return: A pointer to the concatenated string, or NULL if it fails
*/
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int len;
	int i, j;
	char *concact_array;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}

	len = len1 + len2;

	concact_array = malloc((len + 1) * sizeof(char));

	if (concact_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		concact_array[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		concact_array[i] = s2[j];
		i++;
	}

	concact_array[i] = '\0';

	return (concact_array);
}
