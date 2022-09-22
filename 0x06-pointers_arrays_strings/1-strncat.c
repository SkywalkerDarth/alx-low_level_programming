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
	int a = 0;
	int b = 0;

	while (dest[a++])
	{
		b++;
	}
	for (a = 0; src[a] && a < n; a++)
		dest[b++] = src[a];
	return (dest);
}
