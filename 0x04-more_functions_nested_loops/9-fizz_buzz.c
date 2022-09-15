#include <stdio.h>

/**
 * main - prints numbers 1-100
 * fizz, multiple of 3
 * buzz, multiple of 5
 * fizz buzz, muliple of 3 and 5
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i == 100)
			continue;
		printf(" ");

	}
	printf("\n");

	return (0);
}
