#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - get number of elements
 * @h: head of list
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
