#include "search_algos.h"

/**
 * linear_search - searches for a value in an array linearly
 * it doesnt require sorting to reduce complexity
 * @array: Array input
 * @size: Array size
 * @value: value to search for
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
