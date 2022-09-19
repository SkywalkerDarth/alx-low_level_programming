#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: integer pointer
 * @b: integer pointer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int swapping;

	swapping = *a;
	*a = *b;
	*b = swapping;
}
