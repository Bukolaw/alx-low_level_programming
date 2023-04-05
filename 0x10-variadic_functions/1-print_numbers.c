#include "variadic_functions.h"

/**
 *  print_numbers - Entry points
 *  Description: print number, followed by a new lines
 *  @separatoe: String to be printed between numbers
 *  @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int j;

	va_start(list, n);
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(list, int));
		/* If separator provides and is not the last argument, print */
		if(separator != NULL && j != (n - 1))
		{
			printf("%s", separator);

		}
	}
	printf("\n");
	va_end(list);
}
