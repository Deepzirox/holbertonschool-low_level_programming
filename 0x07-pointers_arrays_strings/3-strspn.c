#include "holberton.h"
/**
 * _strspn - get lenght of prexif
 * @s: string
 * @accept: substring;
 * Return: lenght of substring in string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, z, c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (z = 0; s[z] != '\0'; z++)
		{
			if (s[a] == accept[z])
			{
				c++;
				break;
			}
		}
		if (s[a] != accept[z])
		{
			break;
		}
	}
	return (c);
}
