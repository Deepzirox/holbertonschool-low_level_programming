#include "holberton.h"
/**
 * times_table - print tables
 * Return: void
 */
void times_table(void)
{

	int x, y, op;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			op = (x * y);
			if (y > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (op < 10)
				{
					_putchar(' ');
				}
			}

			if (op >= 10)
			{
				_putchar(op / 10 + '0');
				_putchar(op % 10 + '0');
			}
			else
			{
				_putchar(op + '0');
			}
		}
		_putchar('\n');
	}
}
