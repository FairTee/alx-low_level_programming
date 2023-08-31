#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - COnverts a binary num to unsigned int
 * @b: Pointer to string containing binary representation
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);

		result = (result << 1) + (b[x] - '0');
	}

	return (result);
}
