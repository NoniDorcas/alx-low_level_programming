#include "lists.h"
#include <stdlib.h>

/**
  * insert_nodeint_at_index - insert a node at index idx
  * @head: address of the head of the list
  * @index: location to insert node
  * @n: inserted node
  * Return: pointer to head of list
  *         NULLif not possible
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *addr, *new_node;

	addr = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (index == 0)
	{
		new_node->next = addr;
		*head = new_node;
		return (*head);
	}
	while (index > 1)
	{
		addr = addr->next;
		index--;
		if (!addr)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = addr->next;
	addr->next = new_node;
	return (new_node);
}
