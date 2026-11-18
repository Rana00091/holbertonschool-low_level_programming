#include <stdlib.h>

/**
* array_range - Creates an array of integers
* @min: Minimum value in the array
* @max: Maximum value in the array
*
* Return: Pointer to the newly allocated array, or NULL if allocation fails
*/
int *array_range(int min, int max)
{
	int *array;
	int length;
	int i;

	if (min > max)
		return (NULL);

	length = max - min + 1;

	array = malloc(length * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
