#include "function_pointers.h"

/**
 * main - test print_name functions
 *
 * Return: Always 0.
 */
int main(void)
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
