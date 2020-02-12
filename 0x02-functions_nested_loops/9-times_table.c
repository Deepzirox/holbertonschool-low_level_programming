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
			if (op > 9)
			{
				_putchar((op / 10) + 48);
				_putchar((op % 10) + 48);

				if (y != 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			else
			{
				_putchar((op % 10) + 48);
				if (y != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
