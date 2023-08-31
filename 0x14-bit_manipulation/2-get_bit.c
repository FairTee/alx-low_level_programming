#include "main.h"

/**
 * get_bit - returns the value of a bit an index
 * @n: number to be searched
 * @index: index of the bit
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int vab;

	if (index > 63)
		return (-1);

	vab = (n >> index) & 1;

	return (vab);
}
