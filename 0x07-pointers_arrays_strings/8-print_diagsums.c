#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: input
 * @size: input
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int tot1, tot2, x;

	tot1 = 0;
	tot2 = 0;

	for (x = 0; x < size; x++)
	{
		tot1 = tot1 + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		tot2 += a[x * size + size + (size - x - 1)];
	}

	printf("%d, %d\n", tot1, tot2);
}
