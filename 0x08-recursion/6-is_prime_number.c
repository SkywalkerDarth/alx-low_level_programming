#include "main.h"
/**
 * is_divisible - a function that returns 1 if the input integer is prime.
 * Otherwise return 0.
 * @num: input integer
 * @div: checker for divisibilityr
 * Return: 1 if prime otherwise 0
 */

int is_divisible(int num, int div)
{
	if (num % div == 0)
	{
		return (0);
	}

	if (div == num / 2)
	{
		return (1);
	}
	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - a function that returns 1 if the input integer is prime.
 * Otherwise return 0.
 * @n: input integer
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	return (is_divisible(n, div));
}
