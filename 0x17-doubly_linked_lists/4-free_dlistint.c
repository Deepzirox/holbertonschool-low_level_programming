#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - free a double linked list
 * @head: head of liked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	if (head != NULL)
	{
		while (head != NULL)
		{
			aux = head->next;
			free(head);
			head = aux;
		}
		free(aux);
	}
	free(aux);
}
