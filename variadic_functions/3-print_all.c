#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *s;
    char *sep = "";

    va_start(args, format);

    while (format && format[i])
    {
        while (format[i] != 'c' && format[i] != 'i' &&
               format[i] != 'f' && format[i] != 's' && format[i])
            i++;

        if (format[i])
        {
            printf("%s", sep);

            if (format[i] == 'c')
                printf("%c", va_arg(args, int));

            if (format[i] == 'i')
                printf("%d", va_arg(args, int));

            if (format[i] == 'f')
                printf("%f", va_arg(args, double));

            if (format[i] == 's')
            {
                s = va_arg(args, char *);
                if (s == NULL)
                    s = "(nil)";
                printf("%s", s);
            }

            sep = ", ";
        }
        i++;
    }

    printf("\n");
    va_end(args);
}
