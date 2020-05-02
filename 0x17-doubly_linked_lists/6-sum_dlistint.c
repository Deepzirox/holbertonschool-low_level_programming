#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - sum node data
 * @head: head of list
 * Return: sum of node's value
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	if (!head)
		return (total);

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
