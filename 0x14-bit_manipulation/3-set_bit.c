#include "holberton.h"
/**
	* set_bit - set bit from index
	* @n: number
	* @index: binary index
	* Return: 1 (Success) -1 (Fail)
	*/

int set_bit(unsigned long int *n, unsigned int index)
{
	int new_val;

	if ((sizeof(unsigned long int) * 8) < index)
		return (-1);

	if (n)
	{
		new_val = *n;
		new_val = new_val | (1 << index);
		*n = new_val;
		return (1);
	}
	return (-1);
}
