#include "holberton.h"
#include "main.h"
/**
 *_putchar function writes the character c to stdout
 * @c: The character to print
 * main - prints _putchar
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * Return: Always 0 in success
 */
int _putchar(char c)
int main(void)
{
	return (write(1, &c, 1));
	_putchar(95); /*95 is asci for _*/
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}

