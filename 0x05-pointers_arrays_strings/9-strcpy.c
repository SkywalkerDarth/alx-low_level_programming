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
	int index;

	index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
