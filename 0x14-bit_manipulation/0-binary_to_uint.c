#include <stdlib.h>
#include "holberton.h"
/**
	* binary_to_uint - convert integer to binary
	* @b: string
	* Return: result number
	*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;

	if (!b)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		value <<= 1;
		if (*b == '1')
			value++;

		b++;
	}
	return (value);
}
