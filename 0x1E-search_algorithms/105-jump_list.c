#include "search_algos.h"

/**
 * jump_list - searches for a value jump algorithm
 * @list: Input list
 * @size: size of the array
 * @value: value to search
 * Return: index of number
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t index, i, j;
	listint_t *prev;

	if (list == NULL || size <= 0)
		return (NULL);
	i = (size_t)sqrt((double)size);
	j = 0;
	index = 0;

	do {
		prev = list;
		j++;
		index = i * j;

		while (list->next && list->index < index)
			list = list->next;
		if (list->next == NULL && index =! list->index)
			index = list->index;
		printf("Value checked at index [%d] = [%d]\n", (int)index, list->n);
	} while (index < size && list->next && list->n < value);
	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);
	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked array[%d] = [%d]\n", (int)prev->next, prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
