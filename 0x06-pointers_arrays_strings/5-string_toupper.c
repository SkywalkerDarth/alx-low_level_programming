#include "main.h"
/**
 * string_toupper - Write a function that changes all lowercase letters
 * of a string to uppercase.
 * @s: input string
 * Return: char pointer
 */
char *string_toupper(char *s)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
