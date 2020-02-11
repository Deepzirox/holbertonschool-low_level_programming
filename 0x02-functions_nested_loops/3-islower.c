#include "holberton.h"

/**
 * _islower - check if a char is lowercase
 * @c: char to check
 * Return: 1 (lowercase), 0 (otherwise)
 */
int _islower(int c)
{
	char lower;
	char value;
	int res;

	value = c;
	res = 0;
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower == value)
		{
			res = 1;
		}
	}
	return (res);

}
