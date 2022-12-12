#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: input string
 * Return: integer
 */

int _atoi(char *s)
{
	int sign;
	unsigned int total;
	char null_flag = 0;

	sign = 1;
	total = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;

			total = total * 10 + *s - '0';
		}
		else if (null_flag)
			break;
		s++;
	}
	if (sign < 0)
	total = (-total);

	return (total);
}
