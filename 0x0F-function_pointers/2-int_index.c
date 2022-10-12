#include <stdlib.h>

/**
 * int_index - A function that searches for an integer.
 * @array: A pointer to array
 * @size: Size of thw array
 * @cmp: cmp is a pointer to the function to be used to compare values
 * Return: the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1, If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	if (i == size)
		return (-1);

	return (-1);

}
