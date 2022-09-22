#include "main.h"
/**
 * infinite_add - Write a function that adds two numbers.
 * @n1: strings to be added
 * @n2: second number to be added
 * @r: result of addition
 * @size_r: size of buffer
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, size_r--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;

		*(r + size_index) = (num % 10) + '0';
		tens = num / 10;
}
