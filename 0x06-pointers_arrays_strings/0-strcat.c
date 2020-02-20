#include "holberton.h"
/**
 * _strcat - concatenate two variables
 * @dest: append destiny
 * @src: append source
 * Return: if True (dest+source)
 */
char *_strcat(char *dest, char *src)
{
	int i, i2;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	i2 = 0;
	while ((dest[i++] = src[i2++]) != '\0')
	{}

	dest[i] = '\0';
	return (dest);
}
