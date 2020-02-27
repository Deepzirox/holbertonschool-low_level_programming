#include "holberton.h"

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
