#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector (array of strings)
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
  (void)argc; /* argc is unused */
 printf("%s\n", argv[0]); /* print program name including path */
  return (0);
}

