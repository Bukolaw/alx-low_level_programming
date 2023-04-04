#include "lists.h"

/**
 * pop_listint - Entry pointe
 * Desc: Deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: Pointer to pointer of first node in linked list
 *
 * Return: zero, if the linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int info;

	/* Checks if head is empty */
	if (!*head)
	{
		return (0);
	}
	/* Stores head node in temp */
	temp = *head;
	/* Info stored in the head node */
	info = temp->n;
	/* Makes next node the new */
	*head = (*head)->next;

	free(temp);

	return (info);
}
