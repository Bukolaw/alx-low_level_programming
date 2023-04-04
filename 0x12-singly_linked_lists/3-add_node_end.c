#include "lists.h"

/**
 * add_node_end - Entry point
 * Description: Adds new node at the end of a list
 * @head: Pointer to pointer to the head node of the list
 * @str: String stored in the new node
 * Return: Address of the new element, or else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current;

	if (!head)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	/* Duplicate */
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	/* Count the no of characters within square brackets */
	new->len = strlen(str);
	new->next = NULL;
	/* If the list is empty, the new  becomes the head */
	if (!*head)
	{
		*head = new;
		return (new);
	}
	current = *head;
	/* Traverse the list until the last node */
	while (current->next)
	{
		current = current->next;
	}
	/* Add node to the end of the list */
	current->next = new;
	return (new);
}
