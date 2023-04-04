#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the start head of the list
 *
 * Return: the number of nodes in the list
 *         98 if program fails
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t x, m = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (x = 0; x < m; x++)
		{
			if (head == list[x])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (m);
			}
		}
		m++;
		list = _r(list, m, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (m);
}
