#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: size of the square
 *
 * If size <= 0, prints only a newline.
 * Only _putchar is allowed for printing.
 * Uses the character '#' for the square.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
	}
}
