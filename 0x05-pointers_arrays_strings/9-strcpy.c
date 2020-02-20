#include "holberton.h"
/**
 * _strcpy - copy variable value
 * @src: source value
 * @dest: destiny pointer
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (len = 0; src[len]; len++)
		len = len;

	for (i = 0; <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
