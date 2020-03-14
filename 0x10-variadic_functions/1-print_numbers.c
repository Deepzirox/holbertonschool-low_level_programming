#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - print num
 * @separator: separator between numbers
 * @n: count of numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list arg;

	va_start(arg, separator);
	for (i = 0; i < n; i++)
	{
		num = va_arg(arg, int);
		printf("%i%s", num, (i != n - 1 && separator != NULL) ? separator : "");
	}
	putchar('\n');
	va_end(arg);
}
