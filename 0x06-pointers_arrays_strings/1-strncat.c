#include "holberton.h"
/**
 * _strncat - cat string
 * @dest: destiny string
 * @src: src string
 * @n: integer
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{

	int i, i2, x;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	i2 = 0;
	x = 0;
	for (i2 = 0; i2 < n; i2++)
	{
		dest[i + i2] = src[x];
		if (src[i2] == '\0')
		{
			break;
		}
		x++;
	}
	return (dest);
}
