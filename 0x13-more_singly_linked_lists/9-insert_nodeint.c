#include <stdlib.h>
#include "lists.h"
/**
 * address - get addres
 * @h: head
 * @i: index
 * @lenght: integer
 * Return: address
 */
listint_t *address(unsigned int i, listint_t *h, unsigned int *lenght)
{
	unsigned int c = 0;
	listint_t *tmp2 = h;

	if (i == 0)
	{
		return (tmp2);
	}

	if (tmp2)
	{
		while (tmp2)
		{
			if (c == i)
			{
				*lenght = c;
				return (tmp2);
			}
			tmp2 = tmp2->next;
			c++;
		}
	}
	return (NULL);
}
/**
 * insert_nodeint_at_index - insert node
 * @head: head
 * @idx: index
 * @n: integer
 * Return: New node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *node;
	listint_t *tmp = *head;
	unsigned int x, len;

	if (!head)
		return (NULL);

	if (*head == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);


	(*node).n = n;
	if (idx == 0)
	{
		(*node).next = *head;
		*head = node;
		return (node);
	}

	(*node).next = address(idx, *head, &len);
	if (idx > len)
		return (NULL);
	for (x = 0; x < 1 - idx; x++)
	{
		tmp = (*tmp).next;
	}
	(*tmp).next = node;
	return (node);
}
