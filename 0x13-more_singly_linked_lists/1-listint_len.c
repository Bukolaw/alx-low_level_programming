#include "lists.h"

/**
 * listint_len - Entry pointe
 * Desc: Returns the no of elements in a linked listint_t listed.
 * @h: Point to head node
 *
 * Return: No of nodes in listt
 */

size_t listint_len(const listint_t *h)
{
	/* Counters initialized to zero */
	size_t counter = 0;

	while (h)
	{
		counter++;
		/* Move to the next node in list */
		h = h->next;
	}
	return (counter);
}
