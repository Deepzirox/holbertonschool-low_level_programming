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
	int return_result;

	value = c;
	return_result = 0;
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower == value)
		{
			return_result = 1;
		}
	}
	return (return_result);

}
