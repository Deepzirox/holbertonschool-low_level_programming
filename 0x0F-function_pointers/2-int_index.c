#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - find index array
 * @array: arr given
 * @size: size array
 * @cmp: pointer to array
 * Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, val = 0;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			val = (*cmp)(array[i]);
			if (val != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
