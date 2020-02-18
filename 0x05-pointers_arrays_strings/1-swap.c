#include "holberton.h"
/**
 * swap_int - swap two values
 * @a: int
 * @b: int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int h;

	h = *a;
	*a = *b;
	*b = h;
}

