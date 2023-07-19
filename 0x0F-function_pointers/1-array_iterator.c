#include "function_pointers.h"

/**
 * array_iterator - function that executes an element of an array
 * @array: array to execute
 * @size: size
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array && action)
	{
		x = 0;

		while (x < size)
		{
			action(array[x]);

			x++;
		}
	}
}
