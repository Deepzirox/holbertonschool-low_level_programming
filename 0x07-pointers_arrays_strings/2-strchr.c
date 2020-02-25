#include "holberton.h"
/**
 * _strchr - find concurrence in string
 * @s: string
 * @c: char
 * Return: pointer to s or null
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (0);
		}
	}
	return (s);
}
