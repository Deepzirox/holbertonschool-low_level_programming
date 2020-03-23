#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - get number of nodes
 * @h: head
 * Return: N nodes
 */
size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
