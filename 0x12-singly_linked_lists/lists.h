#ifndef LISTS_H
#define LISTS_H

/* 
 * description: header file with prototype
 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - single linking list
 * @str: string -malloc string
 * @len: lengh of strngs
 * @next: points to next nodes'
 *
 * Desc: single linking structure
 * holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add node(list_t **head, const char *str);
list_t *add node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H */
