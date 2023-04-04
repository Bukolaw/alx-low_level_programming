#include "lists.h"

/**
 * add_nodeint_end - Entry pointe
 * Desc: Adds a new node at the end of a listint_tt.
 * @head: Pointer to pointer to the head node
 * @n: New node
 *
 * Return: The address of the new element, or NULL at failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	/* Allocates memory for the newest node */
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	/* Initializes new */
	new->n = n;
	new->next = NULL;
	/* If head is null,  new node become the head */
	if (!*head)
	{
		*head = new;
	}
	else
	{
		/* Locat the last node  */
		current = *head;
		while (current->next)
		{
			current = current->next;
		}
		/* Attach new node to the end */
		current->next = new;
	}
	return (new);
}
