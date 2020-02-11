#include "holberton.h"
/**
 * print_alphabet - print char a to z
 * Return: None, 1 if error
 */
void print_alphabet(void)
{
	for (int ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
