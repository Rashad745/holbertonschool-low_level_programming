#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/* Struct to map symbols to function pointers */
typedef struct op
{
	char *symbol;
	void (*f)(va_list);
} op_t;

/* Function prototypes */
void print_all(const char * const format, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

#endif
