#include <unistd.h>

/**
 * _putchar - prints a character c to stdout
 * @c: character to be printed
 * Return: 1 on success, -1 on error and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
