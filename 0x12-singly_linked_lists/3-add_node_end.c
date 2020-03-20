#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
	* len - get lenght of string
	* @str: string
	* Return: lenght of str
	*/
int len(const char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
		counter++;

	return (counter);
}
/**
	* add_node_end - adding new node
	* @head: head list
	* @str: string
	* Return: address of new node
	*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *New = malloc(sizeof(list_t));
	list_t *Node = *head;

	if (New == NULL)
	{
		return (NULL);
	}
	New->str = strdup(str);
	New->next = NULL;
	New->len = len(str);
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
