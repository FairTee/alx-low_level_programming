#include "search_algos.h"

void print_array(int *array, int size);
/**
 * print_array - It prints an array of integers
 * @array: A pointer to the start of the array
 * @size: The size of the array
 *
 * Return: nill
 */
void print_array(int *array, int size)
{
	int x;

	if (array == NULL || size == 0)
		return;

	printf("Searching in array: ");

	for (x = 0; x < size; x++)
	{
		if (x == 0)
			printf("%d", array[x]);
		else
			printf(", %d", array[x]);
	}

	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in @array.
 * @value: Value to search for.
 *
 * Return: The index where @value is located,
 * or -1 if @value is not present in @array or if @array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	if (array == NULL || size == 0 || array[0] > value)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;

		print_array(&array[low], (high - low) + 1);

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			high = mid - 1;

		else
			low = mid + 1;
	}

	return (-1);
}
