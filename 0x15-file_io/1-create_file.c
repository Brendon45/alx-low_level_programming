#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: a pointer to a filename to be printed
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int letters;
	int wr;

	if (!filename)
	return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == 1)
	return (-1);

	if (text_content == NULL)
	text_content = "";
	for (letters = 0; text_content[letters]; letters++)
	;
	wr = write(fd, text_content, letters);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
