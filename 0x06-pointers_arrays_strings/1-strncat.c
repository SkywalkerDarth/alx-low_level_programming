#include "main.h"
/**
 * _strncat - function to concantenate two groups of characters
 * @dest: input string to be concatenated
 * @src: input string source
 * @n: input integer for max byte
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
