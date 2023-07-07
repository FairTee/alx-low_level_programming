#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: number of bytes
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = 0;

	for (; a < b; a++)
	{
		dest[a] = src[b];
		n--;
	}
	return (dest);
}
