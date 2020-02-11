#include "holberton.h"
#include <ctype.h>
/**
 * _islower - check if a char is lowercase
 * @c: char to check
 * Return: 1 (lowercase), 0 (otherwise)
 */
int _islower(int c)
{
	char ch_handler;
	int islow;

	h_handler = (char)c;
	islow = islower(ch_handler);
	if (islow == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	return (0);
}
