#include <stdlib.h>

/**
* _calloc - Allocates memory for an array and initializes it to zero
* @nmemb: Number of elements
* @size: Size of each element in bytes
*
* Return: Pointer to the allocated memory, or NULL if allocation fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total;
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		ptr[i] = 0;

	return (ptr);
	}
