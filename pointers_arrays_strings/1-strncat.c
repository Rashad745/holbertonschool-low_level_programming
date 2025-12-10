#include "main.h"

/**
 * _strncat - concatenates at most n bytes from src to the end of dest
 * @dest: destination string
 * @src: source string to append
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	/* find end of dest */
	while (dest[i] != '\0')
		i++;

	/* append at most n characters from src */
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* add null terminator */
	dest[i] = '\0';

	return (dest);
}
