#include "main.h"
/**
 * _strcat - Concatenates the string pointed to by src
 * terminating the null byte to the end of the string pointed by @dest
 * @src: the source string to be appended to @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * Return: A pointer to the destination on string @ dest.
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
