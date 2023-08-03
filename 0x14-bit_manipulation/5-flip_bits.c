#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, list = 0;
	unsigned long int new;
	unsigned long int pec = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		new = pec >> x;
		if (new & 1)
			list++;
	}
	return (list);
}
