#include <stdio.h>
/**
 * main - program that prints all possible combinations of single-digit numbers
 *
 * Return: reurn 0 please.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)

	{
		putchar((num % 10) + '0');

		putchar(",");
		putchar(" ");
	}
	putchar('\n');

	return (0);
}
