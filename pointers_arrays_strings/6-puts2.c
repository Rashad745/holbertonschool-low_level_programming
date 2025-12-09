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

    /* Check if string is empty */
    if (str == NULL)
        return;

    /* Loop through the string */
    while (str[i] != '\0')
    {
        /* Print current character */
        _putchar(str[i]);
        
        /* Move to next character to print (skip one) */
        i += 2;
        
        /* Check if we've reached or passed the end */
        if (str[i - 1] == '\0')
            break;
    }
    
    _putchar('\n');
}
