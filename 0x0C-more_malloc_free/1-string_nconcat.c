#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string.
 * @s2: second string
 * @n: input integer.
 * Return: if the functions fails NULL,
 * otherwise a pointer to the concatendd.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[len1])
		len1++;
	if (s2 == NULL)
		s2 = "";
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	new_str = malloc(len1 + n + 1);
	if (new_str == NULL)
		return (NULL);
	for (; i < (len1 + n); i++)
	{
		if (i < len1)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';
	return (new_str);
}
