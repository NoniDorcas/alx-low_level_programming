#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 * Description: print alphabet 10 times
 * print_alphabet_x10 - function declaration
 * Description: print alphabet in lowercase 10 times
 * Return: void
 */

void print_alphabet_x10(void);

/**
 * main - entry point
 * Description: calls print_alphabet_x10
 * Return: 0, success
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet_x10 - print alphabet 10 times
 * Description: has no arguements
@@ -37,9 +25,9 @@ void print_alphabet_x10(void)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			putchar(letter);
			_putchar(letter);
		}
		putchar('\n');
		_putchar('\n');
		count++;
	}
}}
