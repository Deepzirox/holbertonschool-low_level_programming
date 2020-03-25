#include <stdlib.h>
#include "lists.h"
/**
 * find_index - get value of node index
 * @h: head
 * @i: node index
 * Return: address of node
 */
listint_t *find_index(unsigned int i, listint_t *h)
{
	unsigned int c = 0;

	if (h)
	{
		while (h)
		{
			if (c == i)
			{
				return (h);
			}
			h = h->next;
			c++;
		}
	}
	return (NULL);
}
/**
 * get_nodeint_at_index - get value of node index
 * @head: head
 * @index: node index
 * Return: address of node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	return (find_index(index, head));
}
