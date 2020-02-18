#include "holberton.h"

int _strlen(char *s)
{
	int c;

	while(s[c] != '\0')
		c++;

	return (c);
}

