#include "holberton.h"
/**
 * factorial - return factorial of number given
 * @n: number
 * Return: -1 (Err), Factorial number (Success)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n >= 1)
		return (n * factorial(n - 1));
	else
		return (1);
}
