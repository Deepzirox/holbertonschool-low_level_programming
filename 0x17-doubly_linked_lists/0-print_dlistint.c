#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - get number of elements
 * @h: head of list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements = 0;

	if (h == NULL)
		return (elements);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
