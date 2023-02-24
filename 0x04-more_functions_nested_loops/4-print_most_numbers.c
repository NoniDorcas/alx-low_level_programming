#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * Do not print 2 and 4
 * use putchar twice
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++;)
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
}
_putchar('\n')
}
