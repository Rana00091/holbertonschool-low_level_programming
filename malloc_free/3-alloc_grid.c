#include <stdlib.h>

/**
* alloc_grid - Returns a pointer to a 2-dimensional array of integers
* @width: The width of the grid
* @height: The height of the grid
*
* Return: A pointer to the allocated grid, or NULL if it fails
*/
int **alloc_grid(int width, int height)
{
	int **two_d_array;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	two_d_array = malloc(height * sizeof(int *));

	if (two_d_array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		two_d_array[i] = malloc(sizeof (int) * width);

		if (two_d_array[i] == NULL)
		{
			while (i > 0)
			{
				i--;
				free(two_d_array[i]);
			}
			free (two_d_array);
			return (NULL);
		}	
		for(j = 0; j < width; j++)
		{
			two_d_array[i][j] = 0;
		}
	}
	return (two_d_array);
}
