#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/* Helper function prototypes */
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/**
 * print_char - prints a char from va_list
 * @args: va_list containing the char
 *
 * Return: nothing
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer from va_list
 * @args: va_list containing the integer
 *
 * Return: nothing
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float from va_list
 * @args: va_list containing the float
 *
 * Return: nothing
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string from va_list
 * @args: va_list containing the string
 *
 * Return: nothing
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything based on format string
 * @format: list of types of arguments
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "";

	/* Array of type symbols and function pointers */
	typedef struct op
	{
		char *symbol;
		void (*f)(va_list);
	} op_t;

	op_t ops[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		int j = 0;

		while (ops[j].symbol)
		{
			if (format[i] == *(ops[j].symbol))
			{
				printf("%s", separator);
				ops[j].f(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}

