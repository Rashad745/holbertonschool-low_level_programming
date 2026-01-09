#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>

/* Function prototype for the main task */
void print_name(char *name, void (*f)(char *));

/* Optional helper functions from your main.c */
void print_name_as_is(char *name);
void print_name_uppercase(char *name);

#endif /* FUNCTION_POINTERS_H */
