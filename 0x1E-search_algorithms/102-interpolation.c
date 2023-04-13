#include "search_algos.h"

/**
 * interpolation_search - An algorithm to search using interpolation.
 * @array: Array to be search
 * @size: Array Size
 * @value: Array Value
 * Return: int number index
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t a = 0, b = size - 1;

	if (array == NULL || size <= 0)
		return (-1);

	while (array[a] != array[b])
	{
		size_t c = (((double)(b - a) / (array[b] - array[a])) * (value - array[a]));
		size_t m = c + a;

		if (m > size)
		{
			printf("Value checked array[%lu] is out of range\n", m);
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", m, array[m]);
		if (array[m] < value)
			a = m + 1;
		else if (array[m] > value)
			b = m - 1;
		else
			return (m);
	}

	if (value == array[a])
		return (a);
	return (-1);
}
