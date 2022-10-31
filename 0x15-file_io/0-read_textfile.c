#include "main.h"
#include <sys/uio.h>

/**
 * read_text_file - A function that reads a text file and prints to
 * POSIX STDOUT
 * @filename: The filename to be opened
 * @letters: the number of letters to read and print
 * Return: No of letters read and printed, 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo, fdr, fdw;
	char *temp;

	if (filename == NULL)
	{
		return (0);
	}

	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
	{
		return (0);
	}

	fdo = open(filename, O_RDONLY);
	if (fdo < 0)
	{
		free(temp);
		return (0);
	}

	fdr = read(fdo, temp, letters);
	if (fdr < 0)
	{
		free(temp);
		return (0);
	}

	fdw = write(STDOUT_FILENO, temp, fdr);
	free(temp);
	close(fdo);

	if (fdw < 0)
		return (0);
	return ((ssize_t)fdw);
}
