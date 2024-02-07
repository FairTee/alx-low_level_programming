#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in @array.
 * @value: Value to search for.
 *
 * Return: The index where @value is located,
 * or -1 if @value is not present in @array or if @array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t p;
	int low = 0;
	int high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		p = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));

		if (p > size - 1)
		{
			printf("Value checked array[%ld] is out of range\n", p);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", p, array[p]);

		if (array[p] == value)
		{
			return (p);
		}
		else
		{
			if (array[p] > value)
				high = p - 1;
			else
				low = p + 1;
		}
	}

	return (-1);
}
