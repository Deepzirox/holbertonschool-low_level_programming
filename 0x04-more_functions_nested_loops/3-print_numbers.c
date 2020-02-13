#include "holberton.h"
/**
 * print_numbers - print nums 0 to 9
 * Return: void
 */

void print_numbers(void)
{
	int nums;

	for (nums = '0'; nums <= '9'; nums++)
	{
		_putchar(nums);
	}
	_putchar('\n');
}
