#include <stdio.h>
#include "holberton.h"
/**
	* print_binary - print decimal to binary
	* @n: decimal
	* Return: void
	*/
void print_binary(unsigned long int n)
{

	int boolean = 0, i, bin;

	if (!n)
	{
		_putchar('0');
		return;
	}
	for (i = 31; i >= 0; i--)
	{
		bin = n >> i;
		if ((bin & 1) && !boolean)
			boolean = 1;

		if (boolean)
		{
			if (bin & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
	_putchar('\0');
}
