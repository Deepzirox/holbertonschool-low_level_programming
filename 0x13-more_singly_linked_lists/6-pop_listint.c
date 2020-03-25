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

	if (*head && head)
	{
		value = (*head)->n;
	}
	else
	{
		return (0);
	}
	return (value);
}
