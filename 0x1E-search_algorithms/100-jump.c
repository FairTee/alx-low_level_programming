#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the Jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in @array.
 * @value: Value to search for.
 *
 * Return: The index where @value is located,
 * or -1 if @value is not present in @array or if @array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	int j = sqrt(size);
	int st = 0;
	int secn_end = 0;

	if (array == NULL || size == 0 || array[st] > value)
		return (-1);

	while (secn_end < (int)size)
	{
		if (array[secn_end] < value)
		{
			printf("Value checked array[%d] = [%d]\n", secn_end, array[secn_end]);

			st = secn_end;
			secn_end += j;
		}
		else
		{
			break;
		}
	}

	printf("Value found between indexes [%d] and [%d]\n", st, secn_end);

	if (secn_end > (int)size - 1)
		secn_end = size - 1;

	while (st <= secn_end)
	{
		printf("Value checked array[%d] = [%d]\n", st, array[st]);
		if (array[st] == value)
			return (st);
		st++;
	}

	return (-1);
}
