#include "holberton.h"
/**
 * _strncat - cat string
 * @dest: destiny string
 * @src: src string
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{

        int i, i2;

        i = 0;
        while (dest[i] != '\0')
        {
                i++;
        }
        i2 = 0;
        while ((dest[i++] = src[i2++]))
        {
		if (i >= n)
		{
			break;
		}
	}
	if (i < n)
	{
		dest[i] = '\0';
	}
        return (dest);
}
