#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A nested loop that makes the grid
 * @width: input for width
 * @height: input for height
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **dim;

	int x, y;

	if (width <= 0 || height <= 0)

		return (NULL);

	dim = malloc(sizeof(int *) * height);

	if (dim == NULL)

		return (NULL);
	for (x = 0; x < height; x++)
	{
		dim[x] = malloc(sizeof(int) * width);

		if (dim[x] == NULL)

		{
			for (; x >= 0; x--)

				free(dim[x]);

			free(dim);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			dim[x][y] = 0;
	}

	return (dim);
}
