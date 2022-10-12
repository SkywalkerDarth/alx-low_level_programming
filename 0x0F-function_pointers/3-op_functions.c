#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - a function to return the sum of a, b
 * @a: input integer
 * @b: input integer
 * Return: The result of sum a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function to return the subtraction of a, b.
 * @a: input integer
 * @b: input integer
 * Return: The result of sub a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function to return the multiplication of a, b.
 * @a: input integer
 * @b: input integer
 * Return: The result of mul a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function to return the division of a, b.
 * @a: input integer
 * @b: input integer
 * Return: The result of div a / b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a function to return modulus of a,b
 * @a: input integer
 * @b: input integer
 * Return: The result of a mod b (a % b)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
