#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

/**
 * main - a program that adds positive numbers
 * @argc: An argument counter
 * @argv: Argument values
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int num, i, result = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result += num;

	}
	printf("%d\n", result);
	return (0);
}
