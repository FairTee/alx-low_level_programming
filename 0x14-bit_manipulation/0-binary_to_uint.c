#include "main.h"

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: string containing binary num
 * Return: Number converted
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int sure = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		sure = 2 * sure + (b[x] - '0');
	}

	return (sure);
}
