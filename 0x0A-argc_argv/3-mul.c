#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 * @argc: An argument counter
 * @argv: Argument values
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, j, z;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		z = i * j;
		printf("%d\n", z);
		return (0);
	}
}
