#include "holberton.h"
/**
 * _strlen_recursion - get lenght of string
 * @s: string
 * Return: None
 */
int _strlen_recursion(char *s)
{
	int co;

	if (*s != '\0')
	{
		co = _strlen_recursion(s + 1);
		co++;
	}
	return (co);
}
