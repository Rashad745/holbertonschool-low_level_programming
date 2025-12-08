#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to print the character '_'
 *
 * If n <= 0, only a newline is printed.
 * Only _putchar is allowed for printing.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
