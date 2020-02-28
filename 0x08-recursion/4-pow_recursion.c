#include "holberton.h"
/**
 * _pow_recursion - find power of number
 * @x: int
 * @y: int
 * Return: power is succes -1 if not valid
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
