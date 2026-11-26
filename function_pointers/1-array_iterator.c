#include "function_pointers.h"

/**
* array_iterator - function execute on every elemnt in array
* @array: pointer to the array of integers
* @size: number of elements in the array
* @action: pointer to the function to execute on each element
*
* Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* so data will be the same type*/
	size_t i;

	if(action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
