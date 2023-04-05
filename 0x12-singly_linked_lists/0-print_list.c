#include "lists.h"

/**
 * print_list - Entry pointe
 * Description: print all element of list
 * @h : pointer to head
 * Return: Number of node in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NUll)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		count++;
		h = h->next
	}

	return (count);
}
