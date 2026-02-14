#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
 * create_file - creates a file and writes text_content into it
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write into the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w_bytes;
	size_t len = 0;

	if (!filename)
		return (-1);

	if (text_content)
		len = strlen(text_content);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (len > 0)
	{
		w_bytes = write(fd, text_content, len);
		if (w_bytes != (ssize_t)len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
