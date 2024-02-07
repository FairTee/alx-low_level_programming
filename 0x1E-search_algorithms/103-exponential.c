#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: pointer to the start of the array
 * @size: size of the array (number of elements)
 *
 * Return: nothing
 */
void print_array(int *array, int size)
{
	int i;

	if (array == NULL || size == 0)
		return;

	printf("Searching in array: ");

	for (i = 0; i < size; i++)
	{
		if (i == 0)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}

	printf("\n");
}

/**
 * binary_search - find value in sorted array using binary search method
 * @array: pointer to first element in array to be searched
 * @size: size of the array (number of elements)
 * @value: value to be searched for
 *
 * Return: index position of value or -1 if not found or array is null
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		mid = low + (high - low) / 2;

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

/**
 * exponential_search - Searches for a value in a sorted array of integers
 * using the Exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in @array.
 * @value: Value to search for.
 *
 * Return: The index where @value is located,
 * or -1 if @value is not present in @array or if @array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
	int l_d;
	int u_d = 1;
	int val_pos;

	if (array == NULL || size == 0)
		return (-1);

	while (u_d < (int)size && array[u_d] < value)
	{
		printf("Value checked array[%d] = [%d]\n", u_d, array[u_d]);
		l_d = u_d;
		u_d *= 2;
	}

	if (u_d >= (int)size)
		u_d = size - 1;

	printf("Value found between indexes [%d] and [%d]\n", l_d,
	       u_d);
	val_pos = binary_search(&array[l_d],
				       u_d - l_d + 1, value);

	if (val_pos != -1)
		val_pos += l_b;

	return (val_pos);
}
