#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	/* find the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* print characters in reverse */
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
