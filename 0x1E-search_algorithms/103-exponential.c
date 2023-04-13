#include "search_algos.h"

/**
 * binarysearch - search algorithm for arrays.
 * i while loop, j = mid point, l = start and r as defined of divided side
 * @array: A pointer to input array
 * @r: Array size
 * @l: Array sub start
 * @value: Array value
 * Return: j
 */
int binarysearch(int *array, int l, int r, int value)
{
	int i, j;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i <= r)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		j = (l + r) / 2;
		if (array[j] < value)
			l = j + 1;
		else if (array[j] > value)
			r = j - 1;
		else
			break;
		printf("\n");
	}
	return (j);
}

/**
 * exponential_search - Search exponentially
 * @array: Array to search
 * @size: size of Array
 * @value: value to search for
 * Return: index of found search or -1 if it fails
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t a = 0, b = size - 1, tmp;
	int found;

	if (array == NULL || size <= 0)
		return (-1);

	if (array[a] == value)
	{
		printf("Found [%d] at index: [%lu]\n", array[a], a);
	}
	else
	{
		a++;
		while (a < b && array[a] <= value)
		{
			printf("Value checked array[%lu] = [%d]\n", a, array[a]);
			a = a * 2;
		}
		if (a < b)
		{
			tmp = a;
		}
		else
			tmp = b;
		found = binarysearch(array, a / 2, tmp, value);
	}
	return (found);
}
