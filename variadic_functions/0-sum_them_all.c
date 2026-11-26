#include "variadic_functions.h"
/**
* sum_them_all - returns the sum of all its parameters
* @n: number of arguments to sum
*
* Return: sum of all arguments, or 0 if n is 0.
*/
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int result = 0;
/*va list creates a list fot the input vars */
	va_list args;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(args, int);
	}

	va_end(args);

	return (result);

}
