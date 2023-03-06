#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @c: character to be located
 * @s: string containing the character
 *
 * Return: if c is found - pointer to the first occurence
 *                   else - NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
