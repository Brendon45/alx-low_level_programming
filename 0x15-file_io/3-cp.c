#include "main.h"
#include <stdio.h>

/**
 * fnderror_file - it locate errors and check if it is opened
 * @file_from:  to copy file
 * @file_to: where the file will be returned
 * @argv: the argument vector
 * Return: Nothing on Success
 */

void fnderror_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	if (file_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}
}

/**
 * main - a program that copies the content of a file to another file
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 on Success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t chars, wr;
	char buf[1024];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
	exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	fnderror_file(file_from, file_to, argv);

	chars = 1024;
	while (chars == 1024)
	{
	chars = read(file_from, buf, 1024);
	if (chars == -1)
	fnderror_file(-1, 0, argv);
	wr = write(file_to, buf, chars);
	if (wr == -1)
	fnderror_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
