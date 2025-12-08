#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle
 *
 * If size <= 0, prints only a newline.
 * Only _putchar is allowed for printing.
 * Uses the character '#' for the triangle.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/* print leading spaces */
		for (j = size - i; j > 0; j--)
			_putchar(' ');

		/* print hashes */
		for (k = 0; k < i; k++)
			_putchar('#');

		_putchar('\n');
	}
}
