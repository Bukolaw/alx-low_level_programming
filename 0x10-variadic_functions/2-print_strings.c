#include variadic_functions.h

/**
 * print_string - print variable no of strings.separated by a 
 * particular string, followed by a new line
 * @separator: the string printed between strings
 * @n: no of strings printed
 * @...: variable no of argument, each printed
 *
 * Return: void
 */

void print_string(const char * separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for(i = 0; i < n; i++)
	{
		/* get the next argument from the list */
		str = va_arg(args, char *);
		if(str == NULL)
		{
			print("(nil)");
		}
		else
		{
		printf("%s, str);
		}
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator)
		}
	}
	printf("\n")
	va_end(args);
}

