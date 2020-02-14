#include "holberton.h"
/**
 * print_square - print square
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	int rep, b;

	for (rep = 0; rep < size; rep++)
	{
		for (b = 10; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
