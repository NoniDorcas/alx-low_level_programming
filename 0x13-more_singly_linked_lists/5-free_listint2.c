#include "lists.h"
#include <stdlib.h>

/**
  * free_listint2 - Function sets the head to NULL
  * @head: current address
  */

void free_listint2(listint_t **head)
{
	listint_t *temp, *addr;

	if (head == NULL)
		return;
	addr = *head;
	while (addr != NULL)
	{
		temp = addr;
		addr = addr->next;
		free(temp);
	}
	*head = NULL;
}
