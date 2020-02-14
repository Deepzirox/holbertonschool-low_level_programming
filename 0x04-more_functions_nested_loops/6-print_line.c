#include "holberton.h"
/**
 * print_line - print the number of lines given by n
 * @n: number of lines to print
 * Return: void
 */

void print_line(int n)
{
	int val;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (val = 0; val < n; val++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
