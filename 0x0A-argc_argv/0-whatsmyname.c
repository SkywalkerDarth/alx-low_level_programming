#include <stdio.h>
#include "main.h"

/**
 * main -  a program that prints its name, followed by a new line.
 * @argc: argument count
 * @argv: argument value, a string tat comes after the calling function
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
