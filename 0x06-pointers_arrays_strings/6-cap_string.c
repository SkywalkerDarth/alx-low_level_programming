#include "main.h"
int check_separators(char c);
/**
 * cap_string - Write a function that capitalizes all words of a string
 * @s: input string
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;
		if (check_separators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;
		i++;
	}
	return (s);
}

/**
 * run the check_separators
 * check_separators - Separators of words e.g space, comma, etc
 * @c: character input
 * Return: 1 if separator, else 0
 */
int check_separators(char c)
{
	int i = 0;
	char separators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (; i < 13; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}
