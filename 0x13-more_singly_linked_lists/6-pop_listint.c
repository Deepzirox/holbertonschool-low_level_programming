#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - get list data and return
 * @head: head
 * Return: value of list
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *tmp;

	if (head == NULL)
		return (value);

	if (*head)
	{
		tmp = (*head)->next;
		value = (*head)->n;
		free(*head);
		*head = tmp;
	}
	return (value);
}
