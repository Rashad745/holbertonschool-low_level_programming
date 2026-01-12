#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/* Helper function prototypes */
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/**
 * print_all - prints anything based on format
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	const char *sep = "";
	const char types[] = {'c', 'i', 'f', 's'};
	void (*funcs[])(va_list) = {print_char, print_int, print_float, print_string};

	va_start(args, format);

	while (format && format[i])
	{
j = 0;
while (j < 4)
{
if (format[i] == types[j])
{
printf("%s", sep);
funcs[j](args);
sep = ", ";
}
j++;
}
i++;
}
va_end(args);
printf("\n");
}
/* Helper functions definitions */
void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}
void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}
void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}
void print_string(va_list args)
{
char *s = va_arg(args, char *);
if (!s)
s = "(nil)";
printf("%s", s);
}

