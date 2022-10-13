#include <unistd>

/**
 * _putchar - prints a char c to stdout
 * @c: character to be printed
 * Return: 1 on success, or -1 on error and set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
