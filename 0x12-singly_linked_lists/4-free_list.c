#include <stdlib.h>
#include "lists.h"
/**
	* free_list - liberate list
	* @head: head list
	* Return: void
	*/
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	if ((*head).next != NULL)
		free_list((*head).next);
	free((*head).str);
	free(head);
}
