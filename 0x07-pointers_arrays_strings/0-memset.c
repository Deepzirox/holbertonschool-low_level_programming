#include "holberton.h"
/**
 * _memset - fills  the  first  n  bytes of the memory area
 * @s: array of char
 * @b: character to fill
 * @n: number of memory to fill
 * Return: filled array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
