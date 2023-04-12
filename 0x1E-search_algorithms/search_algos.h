#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: Integer
 * @index: Position of node in the list
 * @next: pointer to the next linked address
 */
typedef struct listint_s
{
	int n;
	int index;
	struct listint_s *next;
} listint_t;

/* prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif
