#include "main.h"
/**
 * print_sign - prints the sign of a number.
 *
 * @n: number to printed
 *
 * Return: 1 if the number is greater than zero,
 * 0. if the number is zero
 * -1 if the number is less than 1
 */
int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		_putchar('+');
		value = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		value = 0;
	}
	else if (n < 0)
	{
		_putchar('-');
		value = -1;
	}
	return (value);
}
