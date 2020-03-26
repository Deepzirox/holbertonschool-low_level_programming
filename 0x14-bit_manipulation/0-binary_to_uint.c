#include <stdlib.h>
#include "holberton.h"
/**
	* _isdigit - check if contain only digits
	* @c: string
	* Return: 1 if digit 0 is not
	*/
int _isdigit(const char *c)
{
	int value, res = 1;

	for (value = 0; c[value] != '\0'; value++)
	{
		if (c[value] != '0' && c[value] != '1')
		{
			return (0);
		}
	}

	return (res);
}
/**
	* ctoint - convert string to int
	* @string: string
	* Return: result number
	*/
unsigned int ctoint(const char *string)
{
		int n = 0;

		while ((*string >= '0') && (*string <= '9'))
		{
			n = (n * 10) + (*string - '0');
			string++;
		}
		return (n);
}
/**
	* binary_to_uint - convert integer to binary
	* @b: string
	* Return: result number
	*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int value;
	int reminder, base = 1;
	unsigned int res = 0;
	int check;

	if (b == NULL)
		return (0);

	check = _isdigit(b);
	if (!check)
		return (0);

	value = ctoint(b);
	while (value != 0)
	{
		reminder = value % 10;
		res = res + reminder * base;
		value = value / 10;
		base = base * 2;
	}
	return (res);
}
