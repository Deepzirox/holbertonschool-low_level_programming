#include "holberton.h"
/**
	* clear_bit - set bit from index
	* @n: number
	* @index: binary index
	* Return: 1 (Success) -1 (Fail)
	*/
int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index < sizeof(n) * 8)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
