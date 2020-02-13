#include "holberton.h"

/**
 * _isdigit - check if a char is uppercase
 *@c: char to check
 * Return: 1 (uppercase), 0 (otherwise)
 */
int _isdigit(int c)
{
	int value, res;

	res = 0;
	for (value = '0'; value <= '9'; value++)
	{
		if (value == c)
		{
			res = 1;	
		}
	}

	return (res);
}
