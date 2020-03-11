#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - find index in array
 * @array: array given
 * @size: array lenght
 * @cmp: pointer to function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
		int i, val = 0;

		if (array == NULL || cmp == NULL)
		{
			return (-1);
		}
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			val = (*cmp)(array[i]);
			if (val != 0)
			{
				return (i);
			}
		}
		return (-1);
}
