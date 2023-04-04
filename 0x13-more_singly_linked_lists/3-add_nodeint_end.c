#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node to the end of the list
 * @head: current address in the list
 * @n: node to add to the list
 * Return: address tothe new element
 *         NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *addr;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	addr = *head;
	while (addr->next != NULL)
		addr = addr->next;
	addr->next = new_node;
	return (*head);
}
