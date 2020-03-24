#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - get number of nodes
 * @head: head
 * @n: number to put as node data
 * Return: New node address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *New = malloc(sizeof(listint_t));
	listint_t *Node = *head;

	if (New == NULL)
	{
		return (NULL);
	}
	New->n = n;
	New->next = NULL;
	if (*head == NULL)
	{
		*head = New;
		return (New);
	}
	while (Node->next != NULL)
	{
		Node = Node->next;
	}
	Node->next = New;
	return (New);
}
