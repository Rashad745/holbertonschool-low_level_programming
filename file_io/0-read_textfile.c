#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to STDOUT
 * @filename: name of the file
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t r_bytes, w_bytes;
    char *buffer;

    if (!filename || letters == 0)
        return (0);

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (!buffer)
    {
        close(fd);
        return (0);
    }

    r_bytes = read(fd, buffer, letters);
    if (r_bytes == -1)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    w_bytes = write(STDOUT_FILENO, buffer, r_bytes);
    if (w_bytes != r_bytes)
    {
        free(buffer);
        close(fd);
        return (0);
    }

    free(buffer);
    close(fd);
    return (w_bytes);
}

