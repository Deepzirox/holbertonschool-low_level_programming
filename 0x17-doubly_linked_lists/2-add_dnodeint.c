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

	new->n = n;
	new->next = (*head);
	new->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new;

	*head = new;
	return (new);
}
