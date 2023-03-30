#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * _strlen - returns the length of a string.
 * @s: string whose length is to be found
 * Return: (Success)
 */

int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * add_node - adds a node onto the linked list
 * @head: pointer to head of linked list
 * @str: string to insert into the node of the linked listd
 * Return: number of nodes in the list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = (malloc(sizeof(list_t)));
	if (!tmp)
	{
		free(tmp);
		return (NULL);
	}
	if (*head == NULL)
	{
		tmp->next = *head;
		tmp->str = strdup(str);
		tmp->len = _strlen(str);
		*head = tmp;
	} else
	{
		tmp->next = *head;
		tmp->str = strdup(str);
		tmp->len = _strlen(str);
		*head = tmp;
	}
	return (*head);
}
