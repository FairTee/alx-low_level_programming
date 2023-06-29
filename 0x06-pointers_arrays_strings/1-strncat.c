#include "main.h"

/**
 * _strncat - concatenates two strings
 * using n bytes
 * @dest: an input value
 * @src: an input value
 * @n: an input value
 * Return: Dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	x = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	y = 0;

	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';

	return (dest);
}
