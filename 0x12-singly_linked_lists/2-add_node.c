#include "lists.h"
#include <string.h>

/**
 * add_node - a function that adds a new node
 * at the beginning of a list list_t.
 * @head: pointer to the list_t pointer that points to the head struct.
 * @str: pointer to string that adds as node
 * Return: A pointer to the address of the new element.
 * NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int lenght = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	while (str[lenght])
		lenght++;
	temp->len = lenght;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
