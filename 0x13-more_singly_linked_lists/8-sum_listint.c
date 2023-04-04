#include "lists.h"

/**
  * sum_listint - sums all data of a linked list
  * @head: address to the head of the list
  * Return: sum of all elements
  *         0 if list is empty
  */

int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
