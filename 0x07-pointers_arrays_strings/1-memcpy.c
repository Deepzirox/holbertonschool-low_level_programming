#include "holberton.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int is, id;

	id = n;
	for (is = 0; is < n; is++)
	{
		*(dest + id) = src++;
		id++;
	}
	return (dest);
}
