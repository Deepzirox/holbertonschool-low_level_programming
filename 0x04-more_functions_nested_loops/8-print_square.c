#include "holberton.h"
/**
 * print_square - print square
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	int n, rep, b;

	n = size;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (rep = 0; rep < n; rep++)
		{
			for (b = 0; b < n; b++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
