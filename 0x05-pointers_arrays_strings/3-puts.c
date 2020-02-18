#include "holberton.h"
/**
 * _puts - print string to stdout
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int c;
	
	c = 0;
	while(str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar(10);
}
