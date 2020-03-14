#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum all parameters
 * @n: number of parameters
 * Return: sum of sum_them_all
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum = 0;
	unsigned int i;

	if (n != 0)
	{
		va_start(arg, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(arg, int);
		}
		va_end(arg);
		return (sum);
	}
	va_end(arg);
	return (0);
}
