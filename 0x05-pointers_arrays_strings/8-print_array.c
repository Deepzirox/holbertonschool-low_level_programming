#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print array for len given
 * @a: array
 * @n: number
 * Return: void
 */
void print_array(int *a, int n)
{
	int c1;

	for (c1 = 0; c1 < n; c1++)
	{
		printf("%d", a[c1]);
		if (c1 != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
}
