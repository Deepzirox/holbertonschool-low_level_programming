#include "holberton.h"
/**
 * print_sign - check number if positive or negative and print sign
 * @n: number for checking
 * Return: 1 (Positive), 0 (Zero), -1 (Negative)
 */

int print_sign(int n)
{
	int evaluation;
	char sign;

	if (n > 0)
	{
		sign = '+';
		evaluation = 1;
	}
	else if (n < 0)
	{
		sign = '-';
		evaluation = -1;
	}
	else
	{
		sign = '0';
		evaluation = 0;
	}
	_putchar(sign);
	return (evaluation);
}
