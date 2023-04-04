 #include <unistd.h>

/**
 * putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success one
 * on error, -1 is returned and error number is set
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
