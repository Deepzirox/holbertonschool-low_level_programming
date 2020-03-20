#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - print all nodes
 * @h: list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	char *s = 0;
	int i = 0;

	while (h != NULL)
	{
		s = h->str;
		if (s == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, s);

		i++;
		h = h->next;
	}
	return (i);
}
