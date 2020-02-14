#include "holberton.h"
/**
 * more_numbers - print ten times a range(0,14)
 * Return: more_numbers
 */

void more_numbers(void)
{

	int cicles, nums;

	for (cicles = 0; cicles < 10; cicles++)
	{
		for (nums = 0; nums <= 14; nums++)
		{
			if (nums > 9)
			{
				_putchar(nums / 10 + 48);
			}
			_putchar(nums % 10 + 48);
		}
		_putchar('\n');
	}
}
