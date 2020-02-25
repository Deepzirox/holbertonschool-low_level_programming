#include "holberton.h"
/**
 * _strpbrk - get lenght of prexif
 * @s: string
 * @accept: substring;
 * Return: lenght of substring in string
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return ('\0');
}
