#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * array_range - print range in string
 * @min: minimun int
 * @max: maximun int
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *range;
	int i, counter;

	if (min > max)
		return (NULL);

	counter = min + max + 1;
	range = malloc(counter * sizeof(int));
	if (range == NULL)
		return (NULL);

	for (i = 0; i < counter; i++)
	{
		range[i] = min;
		min++;
	}
	return (range);
}
