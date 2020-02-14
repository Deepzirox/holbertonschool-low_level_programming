#include "holberton.h"
/**
 * print_triangle - print a triangle in the size given
 * @size: lenght of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i, i2, i3, dep, ped;

	dep = size;
	ped = 0;
	if (size < 0)
	{
		for (i = 0; i < size; i++)
		{
			for (i2 = 0; i2 < dep - 1; i2++)
			{
				_putchar(' ');
			}
			ped++;
			for (i3 = 0; i3 < ped; i3++)
			{
				_putchar('#');
			}
			dep--;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
