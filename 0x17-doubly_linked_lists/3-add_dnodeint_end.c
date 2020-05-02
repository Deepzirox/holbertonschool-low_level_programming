#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node to end
 * @head: head of liked list
 * @n: value to insert
 * Return: new address of node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux = *head;
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);
	node->next = NULL;
	if (*head == NULL)
	{
		node->n = n;
		node->prev = NULL;
		*head = node;
		free(aux);
		return (node);
	}

	while (aux->next != NULL)
		aux = aux->next;

	node->n = n;
	node->prev = aux;
	aux->next = node;
	return (aux);
}
