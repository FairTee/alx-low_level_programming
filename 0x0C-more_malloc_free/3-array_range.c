#include "main.h"
#include <stdlib.h>

/**
 * *array_range - array of integers
 * @min: min range
 * @max: max range
 * Return: 0
 */

int *array_range(int min, int max)
{
	int *pnr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pnr = malloc(sizeof(int) * size);

	if (pnr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		pnr[i] = min++;

	return (pnr);
}
