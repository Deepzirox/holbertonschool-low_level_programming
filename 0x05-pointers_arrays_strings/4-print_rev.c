#include "holberton.h"
/**
 * print_rev - print reverse string
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int c, cc;

	while (s[c] != '\0')
	{
		c++;
	}
	for (cc = c; cc >= 0; cc--)
	{
		_putchar(s[cc]);
	}
	_putchar(10);
}
