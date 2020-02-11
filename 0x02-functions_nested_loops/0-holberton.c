#include<stdio.h>
#include "holberton.h"
/**
 * main- Entry point for app
 * Return: 0 Always (Success)
 */


int main(void)
{
	char hol[9] = "Holberton";

	for (int i = 0; i <= 9; i++)
	{
		_putchar(hol[i]);
	}
	_putchar('\n');
	return (0);
}
