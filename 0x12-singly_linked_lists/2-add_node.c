#include "lists.h"

/**
 * add_node - Entry point
 * Description: Adds new node at start
 * @head: Pointer to the head of the list_tt
 * @str: String added to the list_tt
 * Return:  address of the new element, or else NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	/* Duplicate the string */
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	/* Count characters within square brackets */
	len = 0;
	while (str[len])
		len++;
	/* Set next pointer of new n to current head */
	new->next = *head;
	new->len = len;
	/* Set head to  new node */
	*head = new;

	return (new);
}
