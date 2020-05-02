#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_dnodeint - get number of elements
 * @head: head of list
 * @n: data to insert in node
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (head == NULL)
	{
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		*head = new;
		return (new);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	*head = new;
	return (new);
}
