#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free list
 * @head: head
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
		return;

	while (head != NULL)
	{
		free(head);
		head = (*head).next;
	}
}
