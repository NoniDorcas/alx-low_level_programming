#include "main.h"
#include <stdlib.h>
#include <stdio.h>

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new);

/**
 * _r - reallocates memory to the nodes in a linked list
 * @list: the previous list to append
 * @size: size of the new list
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 *         98 if failed
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t x;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (x = 0; x < size - 1; x++)
		newlist[x] = list[x];
	newlist[x] = new;
	free(list);
	return (newlist);
}

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
