#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * delete_nodeint_at_index - delete a node at an index of a linked list
  * @head: address of head of the list
  * @index: location of the node to delete
  * Return: 1 if successful
  *         -1 if failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *addr, *subsequent;

	if (!head || !*head)
		return (-1);
	addr = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(addr);
		return (1);
	}
	for (x = 0; x < (index - 1); x++)
	{
		addr = addr->next;
		if (addr == NULL)
			return (-1);
	}
	subsequent = addr->next;
	addr->next = subsequent->next;
	free(subsequent);
	return (1);
}
