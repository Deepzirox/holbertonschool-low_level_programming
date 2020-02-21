#include "holberton.h"
/**
 * _strncpy - copy string
 * @dest: destination
 * @src: source
 * @n: int
 * Return: character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	
	i = 0;
	for(; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
