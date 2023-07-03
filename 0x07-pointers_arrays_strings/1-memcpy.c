#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: memory where its stored
 * @src: memory where its copied
 * @n: numbers of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
