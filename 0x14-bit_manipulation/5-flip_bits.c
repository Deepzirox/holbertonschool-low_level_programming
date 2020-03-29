#include "holberton.h"
/**
	* flip_bits - set bit from index
	* @n: int
	* @m: int
	* Return: flips needed
	*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned int flip = 0;

	x = n ^ m;
	if (x)
	{
		while (x)
		{
			flip += (x & 1);
			x >>= 1;
		}
	}
	return (flip);
}
