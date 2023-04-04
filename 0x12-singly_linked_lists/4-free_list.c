#include "lists.h"

/**
 * free_list - Entry pointe
 * Description: Frees a linkeds list
 * @head: A pointer to the head
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}

