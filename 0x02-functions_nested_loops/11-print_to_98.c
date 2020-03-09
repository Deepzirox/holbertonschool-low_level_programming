#include <stdio.h>
/**
 * print_to_98 - print n to 98
 * @n: integer
 * Return: void
 */
void print_to_98(int n)
{
	int i, limit = 98;

	for (i = n; i <= limit; i++)
	{
		printf("%i",i);
		if (i != limit - 1)
		{
			putchar(',');
		}
		putchar(' ');
	}
	putchar('\n');
}
