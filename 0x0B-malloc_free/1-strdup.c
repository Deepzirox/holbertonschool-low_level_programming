#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - copy string to new memory
 * @str: string to copy
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	char *aux;
	int counter = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[counter] != '\0')
		counter++;

	counter += 1;
	aux = malloc(counter * sizeof(char));
	if (aux == NULL || counter == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < counter; i++)
		{
			aux[i] = str[i];
		}
	}
	return (aux);
}
