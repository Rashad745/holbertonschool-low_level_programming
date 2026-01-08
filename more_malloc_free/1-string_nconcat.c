#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 *
 * Return: pointer to newly allocated memory with s1 + first n bytes of s2
 * If allocation fails, return NULL
 * If s1 or s2 is NULL, treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *new_str;
    unsigned int len1 = 0, len2 = 0, total_len;

    if (s1 != NULL)
        len1 = strlen(s1);
    if (s2 != NULL)
        len2 = strlen(s2);

    if (n > len2)
        n = len2;

    total_len = len1 + n + 1;  /* +1 for null terminator */

    new_str = malloc(total_len * sizeof(char));
    if (new_str == NULL)
        return (NULL);

    /* Copy s1 */
    if (s1 != NULL)
        memcpy(new_str, s1, len1);

    /* Copy first n bytes of s2 */
    if (s2 != NULL)
        memcpy(new_str + len1, s2, n);

    /* Null terminate */
    new_str[len1 + n] = '\0';

    return (new_str);
}
