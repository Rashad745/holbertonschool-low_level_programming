#include "main.h"

/**
 * _strcat - concatenates the string pointed to by src
 *            to the end of the string pointed to by dest
 * @dest: destination string
 * @src: source string to append
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	/* find end of dest */
	while (dest[i] != '\0')
		i++;

	/* copy src to end of dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* add null terminator */
	dest[i] = '\0';

	return (dest);
}
