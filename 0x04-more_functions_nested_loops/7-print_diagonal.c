#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of characters \ to be printed
 */
void print_diagonal(int n)
{
	int len, spacebar;

		if (n > 0)
		{
			for (len = 0; len < n; len++)
			{
				for (spacebar = 0; spacebar < len; spacebar++)
					_putchar(' ');
				_putchar('\\');

				if (len == n - 1)
					continue;

				_putchar('\n');
			}
		}
	_putchar('\n');
}
