#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free a two dimensional grid
 * @grid: the grid
 * @height: height
 * Return: 0
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
