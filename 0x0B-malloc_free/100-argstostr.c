#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concantenate argunents into a string
 * @ac: no of argument to be passed
 * @av: array of pointers to the argument
 * Return: NULL if ac == 0 or av == NULL.
 * Returns a pointer to a new string, or NULL if it fail
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, index, byte, size = ac;

	if (ac == 0)
		return (NULL);
	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	index = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[index++] = av[arg][byte];
		str[index++] = '\n';
	}
	str[size] = '\0';
	return (str);
}
