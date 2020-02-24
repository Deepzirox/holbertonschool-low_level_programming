#include "holberton.h"
/**
 * _memcpy - copy memory area
 * @dest: destination buffer
 * @src: source buffer
 * @n: bytes to buffer
 * Return: pointer to (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;
	int len;

	while(dest[len])
		len++;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
