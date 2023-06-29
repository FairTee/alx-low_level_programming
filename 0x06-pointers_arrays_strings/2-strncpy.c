#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: An input value
 * @src: An input value
 * @n: An input value
 * Return: Dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	y = 0;

	while (y < n && src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}

	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}

	return (dest);
}
