#include "holberton.h"
/**
 * print_alphabet - print char a to z
 * Return: void
 */
void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}
	_putchar('\n');
}
