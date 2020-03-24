#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - get number of nodes
 * @head: head
 * @n: number to put as node data
 * Return: New node address
 */
void free_listint(listint_t *head)
{
  while (1)
  {
    if (head != NULL)
    {
      head = head->next;
    }
    else
    {
      free(head);
    }
  }
}
