#include "main.h"
/**
 * _islower - check Alx
 *
 * @c: input character
 *
 * Write a function that checks for lowercase character.
 *
 * Return: 1 if it is lowercase, 0(failure) if it is uppercase.
 *
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{

		if (i == c)
			lower = 1;

}
	return (lower);
}
