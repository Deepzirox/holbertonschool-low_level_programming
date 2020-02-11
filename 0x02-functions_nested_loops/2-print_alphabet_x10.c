#include <stdio.h>
#include "holberton.h"
void print_alphabet_x10(void)
{
	for(int cicle = 0; cicle < 10; cicle++)
	{
		for(int ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
