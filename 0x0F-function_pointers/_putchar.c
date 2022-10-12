#include <unistd.h>
/**
 * _putchar - prints a char c to stdout
 * @c: character to be printed.
 * Return: On success 1 on error -1 and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
