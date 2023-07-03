#include "main.h"

/**
 * _memset - Fills a memory with constant byte
 * @s: Starting address of memory
 * @b: value
 * @n: number of bytes
 * Return: Pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
