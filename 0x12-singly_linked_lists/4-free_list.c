#include <stdlib.h>
#include "lists.h"
/**
	* free_list - liberate list
	* @head: head list
	* Return: void
	*/
void free_list(list_t *head)
{
	list_t *aux;

	if (head != NULL)
	{
		while (head != NULL)
		{
			aux = head;
			head = head->next;
			free(aux->str);
			free(head);
		}
		free(head);
		free(aux);
	}
}
