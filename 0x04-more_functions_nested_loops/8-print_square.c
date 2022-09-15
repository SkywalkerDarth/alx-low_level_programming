#include "main.h"

/**
 * print_square - priints a square using a character #
 * @size : square size
 */

void print_square(int size)
{
	int lenght1, lenght2;

	if (size > 0)
	{
		for (lenght1 = 0; lenght1 < size; lenght1++)
		{
			for (lenght2 = 0; lenght2 < size; lenght2++)

				_putchar('#');

			if (lenght1 == size - 1)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
