#include "lists.h"

/**
 * insert_nodeint_at_index - Entry pointe
 * Descn: Insert a new node at a given place.
 * @head: Pointer to pointer of the first node in the linked list
 * @idx: Index of the list where the new node is added.
 * @n: The new node
 *
 * Return: the address of the new node, or NULL at failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current = *head;
	/* Where new is the new node, current as it is, i is a node */
	unsigned int i;

	/* Allocates memory to new */
	new = malloc(sizeof(listint_t));
	/* Checks if new node is empty and store its data */
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	/* Insert idx at beginning of the list(starts at zero) and adds new node */
	if (idx == 0)
	{
		new->next = current;
		*head = new;
		return (new);
	}
	/* Locate node first  before location for new node, then insert new  */
	for (i = 0; i < (idx - 1); i++)
	{
		/* Checks if null for current node and next node  before inserting */
		if (current == NULL || current->next == NULL)
		{
			return (NULL);
		}
		current  = current->next;
	}
	/* puts new node between current and new node */
	new->next = current->next;
	current->next = new;

	return (new);
}
