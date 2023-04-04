#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of the list
  * @head: head address of the list
  * @index: index of the node
  * Return: adress to the nth node
  *         NULL is node does not exist
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	x = 0;
	while (x < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		x++;
	}
	return (head);
}
