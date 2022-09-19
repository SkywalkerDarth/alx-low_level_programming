#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * including the terminating null byte (\0),
 * o the buffer pointed to by dest.
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{	dest[b] = src[a];
	++b;
	}
	dest[b] = '\0';

	return (dest);
}
