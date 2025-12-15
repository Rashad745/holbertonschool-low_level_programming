#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: argument count
 * @argv: argument vector (unused)
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{ (void)argv; /* argv is unused */ printf("%d\n", argc - 1); /* subtract 1 because argv[0] is program name */
  return (0);
}
