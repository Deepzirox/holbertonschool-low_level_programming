#include "holberton.h"
/**
 * _strcpy - copy variable value
 * @src: source value
 * @dest: destiny pointer
 * Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0; src[len]; len++)
	{
		dest[len] = src[len];
	}
	return (dest);
}
