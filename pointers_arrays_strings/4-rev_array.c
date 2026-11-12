#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to reverse
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < n / 2; i++, j--)
	{
		/* i < n /2 cause we replaced the half of the array*/
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}