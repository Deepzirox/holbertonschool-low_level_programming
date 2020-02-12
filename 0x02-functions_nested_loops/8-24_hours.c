#include "holberton.h"
/**
 * jack_bauer - print 24 hours
 * Return: void
 */
void jack_bauer(void)
{
	int h1, h2, m1, m2;

	for (int h = 0; h <= 24; h++)
	{
		h1 = h / 10;
		h2 = h % 10;

		if ((h1 == 2) && (h2 == 4))
		{
			break;
		}
		for (int m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m1 = m / 10;
			m2 = m % 10;
			if ((m1 == 5) && (m2 == 9))
			{
				break;
			}
		}
	}
}
