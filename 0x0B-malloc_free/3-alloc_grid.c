#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * alloc_grid - allocate multidimensional array in memory
 * @width: columns
 * @height: rows
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **db;
	int i, x, z;

	if (width <= 0 || height <= 0)
		return (NULL);

	db = (int **)malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
		db[i] = (int *)malloc(width * sizeof(int));

	if (db == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
		for (z = 0; z < width; z++)
			db[x][z] = 0;
	return (db);
}
