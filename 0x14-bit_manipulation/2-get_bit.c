#include "main.h"

/**
 * get_bit - returns the value pf a bit at an index
 * @n: number to be searched
 * @index: index of the bit
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int vab;

	if (index > 63)
		return (-1);

	vab = (n >> index) & 1;

	return (vab);
}
