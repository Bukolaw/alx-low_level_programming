#include "variadic_functions.h"

/**
 *  print number - Entry points
 *  Description: print number, followed by a new lines
 *  @separatoe: String to be printed between numbers
 *  @n: number of integers passed to the function
 */

void print_number(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		/* If separator provides and is not the last argument, print */
		if(separator != NULL && i != (n - 1))
		{
			printf("%s", separator);

		}
	}
	printf("\n");
	va_end(args);	
}
