#include "holberton.h"
/**
 * _puts_recursion - print string in recursion with char
 * @s: string
 * Return: None
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}
