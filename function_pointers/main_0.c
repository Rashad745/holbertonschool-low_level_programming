#include "function_pointers.h"

/**
 * main - test print_name functions
 *
 * Return: Always 0.
 */
int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob Dylan", print_name_uppercase);
	print_name("Hodor", NULL); /* should safely do nothing */

	return (0);
}
