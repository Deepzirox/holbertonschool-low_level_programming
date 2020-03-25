#include <stdlib.h>
#include "lists.h"
/**
 * sum_nodes - sum datas in list
 * @h: head
 * Return: sum of nodes
 */
int sum_nodes(listint_t *h)
{
	int c = 0;

	if (h)
	{
		while (h)
		{
			c += h->n;
			h = h->next;
		}
		return (c);
	}
	return (0);
}
/**
 * sum_listint - sum datas in list
 * @head: head
 * Return: sum of nodes
 */
int sum_listint(listint_t *head)
{
	return (sum_nodes(head));
}
