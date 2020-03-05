#include <stdio.h>
#include <stdlib.h>
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

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);

	aux =  mem;
	return (aux);
}
