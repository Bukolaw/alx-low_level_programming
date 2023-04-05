#include "variadic_functions.h"

/**
 * sum_them_all - entry point
 * Description: returns the sum of all its parameter
 * @n: the number of parameters to sum
 * Return: the sum of all parameters, or 0 if n ==0
 */

int sum_them_all(const unsigned int n, ...)
{
	/** declar a variable of type va_list to store the parameters */
	va_list list;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return(0);
	}

	/* intialize the va_list with the first parameter */
	va_start(list, n);
	
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
		/* add each parameter to the sum */
	}
	/* clean up the va_list */
	va_end(list);
	return (sum);
}
