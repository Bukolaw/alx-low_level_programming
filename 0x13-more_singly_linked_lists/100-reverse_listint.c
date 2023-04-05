#include "lists.h"

/**
 * reverse_listint - Entry pointe
 * Desc: To reverse listint_t linked list.
 * @head: Pointer to pointer of first node in the linked list
 *
 * Return: A pointer to the first node of the reversed_lists
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *top = NULL;
	listint_t *bottom;

	if (!head || !*head)
	{
		return (NULL);
	}

	while (*head)
	{
		/* Saves next node */
		bottom = (*head)->next;
		/* Reverses point direction */
		(*head)->next = top;
		/* Move the top node to current node */
		top = *head;
		/* Move head node to the next */
		*head = bottom;
	}
	/* sets head to the last node at the (top) */
	*head = top;

	return (*head);
}
