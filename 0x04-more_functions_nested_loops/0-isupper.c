#include "holberton.h"

/**
 * _isupper - check if a char is uppercase
 *@c: char to check
 * Return: 1 (uppercase), 0 (otherwise)
 */
int _isupper(int c)
{
	char upper;
	char value;
	int res;

	value = c;
	res = 0;
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (upper == value)
		{
			res = 1;
		}
	}
	return (res);

}
