#include "lists.h"

/**
 * add_nodeint - Entry pointe
 * Description: Adds a new node at start of a listint_t list.
 * @head: Pointer to pointer to the head node in all listed
 * @n: New nod
 *
 * Return: The address of the new element, or sets to  NULL when failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	/* Allocates memory for the  newly created node */
	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	/* Initialize a new  */
	new->n = n;
	/* Set pointer of new node to current one head */
	new->next = *head;
	/* Settiing head to point to the new node */
	*head = new;
	return (new);
}

