#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

void close_file(int fd);

/**
 * main - copies content of a file to another file
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t r, w;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

/**
 * close_file - closes a file descriptor
 * @fd: file descriptor
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

