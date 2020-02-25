#include "holberton.h"
/**
 * _strspn - get lenght of prexif
 * @s: string
 * @accept: substring;
 * Return: lenght of substring in string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c, i = 0, i2 = 0;

	while (s[i] != '\0')
	{
		i2 = 0;
		while (accept[i2] != '\0')
		{
			if (s[i] == accept[i2])
			{
				c++;
			}
			i2++;
		}
		i++;
	}
	c -= 2;
	return (c);
}
