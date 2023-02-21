#include "main.h"

/*
 *function print_alphabet  prints the alphabet in lowercase, followed by a new line.
 */
int main(void)
{
    print_alphabet(void);
    return (0);
}
void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
}
