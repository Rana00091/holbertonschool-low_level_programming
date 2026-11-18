#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings
* @s1: First string
* @s2: Second string
* @n: Maximum number of bytes to concatenate from s2
*
* Return: Pointer to the newly allocated string, or NULL if allocation fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int copy_len;
	unsigned int len;
	unsigned int i, j;
	char *concat_array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	copy_len = (n < len2) ? n : len2;
	len = len1 + copy_len;

	concat_array = malloc(len + 1);
	if (concat_array == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat_array[i] = s1[i];

	for (j = 0; j < copy_len; j++)
	{
		concat_array[i] = s2[j];
		i++;
	}

	concat_array[i] = '\0';

	return (concat_array);
}
