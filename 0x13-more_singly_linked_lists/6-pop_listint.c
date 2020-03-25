#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - get list data and return
 * @head: head
 * Return: value of list
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *tmp;

	if (head == NULL)
		return (0);

	tmp = (*head)->next;
	value = (*head)->n;
	free(*head);
	*head = tmp;
	return (value);
}
