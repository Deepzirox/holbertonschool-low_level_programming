#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet ten times
 * @void: no parameters
 * Return: None
 */
void print_alphabet_x10(void)
{
	for (int cicle = 0; cicle < 10; cicle++)
	{
		for (int ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
