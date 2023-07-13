#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *pnr;

	pnr = malloc(b);

	if (pnr == NULL)
		exit(98);

	return (pnr);
}
