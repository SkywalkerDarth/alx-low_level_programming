#include "search_algos.h"

/**
 * advanced_binary - search mtd
 * i while loop, j = mid point, k = start and l as defined
 * @array: array to search
 * @size: Array size
 * @value: Array Value
 * Return: index value integer
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i = 0, j = 0, k = 0, l = size - 1;

	if (array == NULL || size <= 0)
		return (-1);
	while (k <= l)
	{
		printf("Searching in array: ");
		for (i = k; i <= l; i++)
		{
			if (i <= l)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		j = (k + l) / 2;
		if (array[j] < value)
			k = j + 1;
		else if (array[j] > value)
			l = j - 1;
		else
			return (j);
		printf("\n");
	}
	return (-1);
}

