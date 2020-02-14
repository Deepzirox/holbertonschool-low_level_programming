#include "holberton.h"
/**
 * print_line - print the number of lines given by n
 * @n: number of lines to print
 * Return: void
 */

void print_diagonal(int n)
{
	int spaces,ss;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (spaces = 0; spaces < n; spaces++)
		{
			for (ss = 0; ss < spaces; ss++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
