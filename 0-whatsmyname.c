#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: argument count (unused)
 * @argv: argument vector (array of strings)
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc; /* argc is unused */
	printf("%s\n", argv[0]);
	return (0);
}

