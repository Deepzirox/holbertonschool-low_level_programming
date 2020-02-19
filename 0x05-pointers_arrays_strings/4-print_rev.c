#include "holberton.h"
/**
 * print_rev - print reverse string
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int c, x;

	while (s[c] != '\0')
	{
		c++;
	}
	c--;
	for (x = c; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar(10);
}
