#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - get number of nodes
 * @h: list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
