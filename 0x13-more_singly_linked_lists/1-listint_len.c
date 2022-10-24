#include "lists.h"
#include <stdio.h>

/**
 * listint_len - A function that returns the number of elemnets in a list
 * @h: a pointer to list_int structure
 * Return: no of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
