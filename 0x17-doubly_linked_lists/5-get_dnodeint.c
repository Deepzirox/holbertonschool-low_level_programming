#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t len(dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux;
	size_t num_nodes = len(head);;
	size_t n;

	if (index > num_nodes)
		return (NULL);

	aux = head;
	for (n = 0; n != index; n++)
	{
		aux = aux->next;
	}
	return (aux);

}
