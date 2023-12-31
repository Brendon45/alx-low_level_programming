#include "main.h"

/**
 * append_text_to_file - This function appends a text at the end of a file.
 * @filename: The pointer to a name of the file.
 * @text_content: This is the string to add to the end of the file.
 *
 * Return: When this function fails or filename is NULL - -1,
 * When the file does not exist the user lacks write permissions - -1,
 * Else - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, nel = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (nel = 0; text_content[nel];)
			nel++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, nel);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);

	return (1);
}
