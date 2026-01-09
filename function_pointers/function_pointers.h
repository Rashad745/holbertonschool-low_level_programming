#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * print_name - prints a name using a function pointer
 * @name: the name to print
 * @f: pointer to a function that takes a char* argument
 *
 * Description: If name or f is NULL, the function does nothing.
 */
void print_name(char *name, void (*f)(char *));

#endif /* FUNCTION_POINTERS_H */

