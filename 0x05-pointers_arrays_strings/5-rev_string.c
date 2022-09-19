#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len;
	int i;
	char reverse;

	i = 0;
	len = 0;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		reverse = s[i];
		s[i++] = s[len];
		s[len] = reverse;
	}
}
