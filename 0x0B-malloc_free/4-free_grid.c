#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: represents the 2 dimensional grid
 * @height: represents the height dimension of the grid
 * Return: nothing
 *
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
