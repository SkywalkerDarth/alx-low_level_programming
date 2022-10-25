#include "lists.h"

/**
 * freelist_int - A function that frees a linked list
 * @head - a pointer to linked listint_t structure
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
