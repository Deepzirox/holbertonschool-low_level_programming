#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - allocate memory
 * @nmemb: elements
 * @size: size in bytes
 * Return: char array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *aux;
	void *mem;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	aux = mem;
	for (x = 0; x < (nmemb * size); x++)
		aux[x] = '\0';

	return (aux);
}
