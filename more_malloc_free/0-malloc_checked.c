#include <stdlib.h>

/**
* malloc_checked - Allocates memory using malloc
* @b: Number of bytes to allocate
*
* Return: Pointer to the allocated memory, or exit if malloc fails
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return(p);
}
