#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output
 * @filename: string pointer to be read
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could
 * read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd;
	ssize_t wr;
	char *buff;

	if (!filename)
	return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	return (0);

	rd = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	close(fd);
	free(buff);
	return (wr);
}
