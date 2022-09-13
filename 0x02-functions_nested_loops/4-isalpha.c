#include "main.h"
/**
 * _isalpha - Alx guide
 * @c: is a letter, lowercase or uppercase
 * main - letter, lowercase or uppercase
 * Return: Either 1 or 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

}
