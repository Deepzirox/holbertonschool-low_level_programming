#include "holberton.h"
/**
 * _memset - function
 * @s: string
 * @b: char
 * @n: number
 * Return: new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
