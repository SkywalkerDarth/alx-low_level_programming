#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of the file
 * @filename: the filename to open and append in
 * @text_content: The NULL terminated string to add.
 * Return: 1 on success -1 if the file cannot be created, nor written
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdo, fdw, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fdo = open(filename, O_WRONLY | O_APPEND);
	fdw = write(fdo, text_content, len);
	if (fdo == -1 || fdw == -1)
		return (-1);
	close(fdo);
	return (1);
}
