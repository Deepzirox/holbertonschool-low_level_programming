#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * free_grid - free space of a grid
 * @grid: 2D array
 * @height: lenght
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
