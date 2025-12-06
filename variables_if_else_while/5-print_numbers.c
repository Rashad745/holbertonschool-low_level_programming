#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);
	putchar('\n');

	return (0);
}
