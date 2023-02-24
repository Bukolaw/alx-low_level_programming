#include <stdio.h>
#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * int: number withour fractional component
 * @c: input
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(void);

/**
 * main - check the code
 * Description: distinct capital
 * Return: Always 0.
 */

	int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);

int _isupper(int c)
{
/**
 * _isupper - function that check for uppercase
 */

	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}

}
