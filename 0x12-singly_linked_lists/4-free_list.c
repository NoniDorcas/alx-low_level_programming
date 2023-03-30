#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function Frees a list_t list.
 * @head: A pointer that points to the list_t list.
 * return: void
 */

void free_list(list_t *head)
{
	list_t *i;

	while (head)
	{
		i = head->next;
		free(head->str);
		free(head);
		head = i;
	}
}
