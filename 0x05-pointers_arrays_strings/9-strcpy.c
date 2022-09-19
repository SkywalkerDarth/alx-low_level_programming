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
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);
}
