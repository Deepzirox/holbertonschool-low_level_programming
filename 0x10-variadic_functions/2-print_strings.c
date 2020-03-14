#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - print string of chars
 * @separator: separator between numbers
 * @n: count of numbers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list arg;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		separator = (separator != NULL) ? separator : "";
		str = va_arg(arg, char*);
		str = (str != NULL) ? str : "(nil)";
		printf("%s%s", str, (i != n - 1) ? separator : "");
	}
	putchar('\n');
}
