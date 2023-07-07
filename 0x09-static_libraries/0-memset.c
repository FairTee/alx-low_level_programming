#include "main.h"
/**
 * _memset - Program fills a block of memory
 * @s: starting address of a memory
 * @b: desired value
 * @n: number of bytes
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)

	{
		s[a] = b;

		n--;
	}
	return (s);
}
