#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: a pointer list_int structure
 * Return: the sum of all data(n) from list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
