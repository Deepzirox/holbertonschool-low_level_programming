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
	void *aux;
	int i;

	if (min > max)
		return (NULL);

	max = malloc((max + 1) * sizeof(int));
	if (range == NULL)
		return (NULL);

	range = aux;

	for (i = min; i <= max; i++)
		range[i] = i;

	return (range);
}
