#include "lists.h"

/**
 * free_listint - Entry pointe
 * Desc: Frees the listint_t list.
 * @head: Pointer to head node in linked lists
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head)
	{
		/* Sets a present variable to head node */
		current = head;
		head = head->next;
		/* Frees the present node */
		free(current);
	}
}
