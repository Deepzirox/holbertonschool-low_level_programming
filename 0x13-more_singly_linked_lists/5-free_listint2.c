#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free head of list
 * @head: head
 * Return: voidp
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	*head = NULL;
}
