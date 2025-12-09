#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to process
 *
 * Return: void
 */
void puts2(char *str)
{
    int i = 0;

    /* Loop through the string */
    while (str[i] != '\0')
    {
        _putchar(str[i]);
        /* Move to next character to print (skip one) */
        i += 2;
        /* Check if we've reached the end of string */
        if (str[i - 1] == '\0')
            break;
    }
    _putchar('\n');
}
