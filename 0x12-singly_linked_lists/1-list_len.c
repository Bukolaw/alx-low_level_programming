#include "lists.h"

/**
 * list_len - Entry point
 * Description: Returns no of elements in linkeds list_t
 * @h: Pointer to the head of the  list
 * Return: No of nodes in linked list
 */

size_t list_len(const list_t *h)
{
	size_t count_nodes = 0;

	while (h != NULL)
	{
		/* Increase count for each node */
		count_nodes++;
		/* Next node */
		h = h->next;
	}
	return (count_nodes);
}
