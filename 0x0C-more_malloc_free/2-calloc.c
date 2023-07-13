#include "main.h"
#include <stdlib.h>

/**
 * *_memset - allocates memory for an array
 * @s: memory
 * @b: character
 * @n: times to copy
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory
 * @nmemb: number of elements
 * @size: size of element
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pnr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pnr = malloc(size * nmemb);

	if (pnr == NULL)
		return (NULL);

	_memset(pnr, 0, nmemb * size);

	return (pnr);
}
