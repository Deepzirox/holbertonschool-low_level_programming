#include "holberton.h"
/**
 * _strlen - lenght of string
 * @s: string
 * Return: int (Success)
 */
int _strlen(char *s)
{
	int c;

	while (s[c] != '\0')
		c++;

	return (c);
}

