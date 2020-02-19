#include "holberton.h"
/**
 * puts2 - print string in pair
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int i, pair;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (pair % 2 == 0)
		{
			_putchar(str[i]);
		}
		pair++;
	}
	_putchar(10);	
}
