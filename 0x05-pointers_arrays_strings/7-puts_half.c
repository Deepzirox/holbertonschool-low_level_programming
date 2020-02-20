#include "holberton.h"
/**
 * puts_half - print half string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	char ax[1000];
	int half, counter, result;

	for (counter = 0; str[counter] != '\0'; counter++)
	{
		ax[counter] = str[counter];
	}
	half = counter / 2;
	for (result = half; result < counter; result++)
	{
		_putchar(ax[result]);
	}
}
