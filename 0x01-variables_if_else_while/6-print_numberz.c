#include <stdio.h>
/**
 * main - Write a program that prints all single digit numbers
 * You are not allowed to use any variable of type char
 *
 * Return: return 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');

	return (0);
}
