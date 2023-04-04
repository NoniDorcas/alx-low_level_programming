#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - deletes the head of the list and returns its data
  * @head: head address of the list
  * Return: 0 if linked list is empty
  */

int pop_listint(listint_t **head)
{
	int x;
	listint_t *addr, *tmp;

	if (head == NULL)
		return (0);
	tmp = addr = *head;
	if (*head)
	{
		x = addr->n;
		*head = addr->next;
		free(tmp);
	}
	else
		x = 0;
	return (x);
}
