 #include "lists.h"

/**
 * sum_listint - Entry pointe
 * Desc: returns the sum of all the data (n) of  linked list
 * @head: Pointers to the first node of the linked list
 *
 * Return: zero, if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	/* passes through the linked list and sums up all data (n) */
	while (head)
	{
		/* Sums up node starting from head, then next */
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
