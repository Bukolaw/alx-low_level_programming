#include "lists.h"

/**
 * print_listint - Entry point
 * Desc: Prints elements of a listint_t list.
 * @h: Pointer to the first node
 *
 * Return: No of nodes
 */

size_t print_listint(const listint_t *h)
{
	/* Count no of nodes */
	size_t counter = 0;

	while (h)
	{
		/* Print current node */
		printf("%d\n", h->n);
		/* Move to next node */
		h = h->next;
		counter++;
	}
	return (counter);
}
