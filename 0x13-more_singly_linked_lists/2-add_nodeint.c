#include "lists.h"
#include <stdlib.h>

/**add_nodeint - add a new node at the beginning of the list
  * @head: current place in the list
  * @n: node to add to the list
  * Return: address to the new element if success
  *         NULL if failed
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
