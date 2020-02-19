#include "holberton.h"
/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	char aux[1000];
	int r, r2, handler;

	for (r = 0; s[r] != '\0'; r++)
	{
		aux[r] = s[r];
	}
	r -= 1;
	for (r2 = r; r2 >= 0; r2--)
	{
		s[handler] = aux[r2];
		handler++;
	}
}
