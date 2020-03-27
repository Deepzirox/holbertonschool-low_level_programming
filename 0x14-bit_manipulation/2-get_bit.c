#include "holberton.h"
/**
	* get_bit - get bit from index
	* @n: number
	* @index: binary index
	* Return: result binary
	*/
int get_bit(unsigned long int n, unsigned int index)
{
	int i, bin, boolean = 0;

	if (index > sizeof(n) * 8)
		return (-1);
	for (i = 63; i >= 0; i--)
	{
		bin = n >> i;
		if ((bin & 1) && !boolean)
			boolean = 1;

		if (boolean)
		{
			if (i - 1 == 0)
			{
				bin = n >> index;
				return ((bin & 1) ? 1 : 0);
			}
		}
	}
	return (-1);
}
