#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>

/**
 * struct listint_s - structure of singly linked list
 * @n: number of nodes
 * @next: points to the next node
 */

typedef struct listint_s
{
		int n;
		struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
