#include "holberton.h"

void reverse_array(int *a, int n)
{
	int c1, c2, it;
	for (c1 = n; c1 > 0; c1--)
	{
		it = a[c1];
		a[c2] = it;
		c2++;
	}
}
