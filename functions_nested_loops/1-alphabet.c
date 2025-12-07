#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	do {
		_putchar(c);
		c++;
	} while (c <= 'z');

	_putchar('\n');
}
