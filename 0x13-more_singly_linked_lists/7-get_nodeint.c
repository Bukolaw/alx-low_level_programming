i#include "lists.h"

/**
 * get_nodeint_at_index - Entry pointe
 * Desc: Returns the last node of a listint_t linked list.
 * @head: Pointer to first node in the linked list
 * @index: index of the node, starting at zero
 *
 * Return: NULL, node not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/* Declare i variable as the node */
	unsigned int i;

	/* Go through list until  end of list is reached */
	for (i = 0; i < index; i++)
	{
		/* If head node not exist */
		if (!head)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}

