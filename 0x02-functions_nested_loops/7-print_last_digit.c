#include "holberton.h"

int print_last_digit(int n)
{
	int res;
	char resc;
	res = _abs((n % 10));
	resc = res + 48;
	_putchar(resc);
	return (res);
}
