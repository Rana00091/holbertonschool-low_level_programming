#include <stdlib.h>

/**
* _strdup - Returns a pointer to a newly allocated space in memory
* containing a copy of the given string
* @str: The string to duplicate
*
* Return: A pointer to the duplicated string, or NULL if it fails
*/
char *_strdup(char *str)
{
	char *dup;
	int len = 0;
	int i;

	if (str == 0)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len ; i++ )
	{
		dup[i] = str[i];
	}

	dup[i] = '\0';

	return (dup);

}
