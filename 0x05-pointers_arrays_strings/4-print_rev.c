#include "holberton.h"
/**
 * print_rev - print reverse string
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int c;

	for (c = 0; c != '\0'; c++)
		_putchar(s[c]);

	_putchar(10);
}
