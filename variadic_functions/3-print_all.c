#include "variadic_functions.h"

typedef void (*printer)(va_list args);

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
    if (s == NULL)
        s = "(nil)";
    printf("%s", s);
}

/**
 * print_all - prints anything
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *sep = "";
    typedef struct {
        char symbol;
        printer f;
    } mapping;

    mapping map[] = {
        {'c', print_char},
        {'i', print_int},
        {'f', print_float},
        {'s', print_string},
        {0, NULL}
    };

    va_start(args, format);

    while (format && format[i])
    {
        unsigned int j = 0;
        while (map[j].symbol)
        {
            if (map[j].symbol == format[i])
            {
                printf("%s", sep);
                map[j].f(args);
                sep = ", ";
            }
            j++;
        }
        i++;
    }

    va_end(args);
    printf("\n");
}

