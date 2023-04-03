#include <unistd.h>

/**
 * _putchar.c - writes the character c to stdout
 * @c: THe character to print
 *
 * Return: on success 1.
 * On errr,. -1 is returned, and errnumber is set appropriately
 */

int _putchar.c(char c)
{
	return (write(1, &c, 1));
}
