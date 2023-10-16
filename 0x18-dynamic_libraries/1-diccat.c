#include "main.h"

/**
 * _isdigit -  Function that checks for a digit 0-9
 * @c: input
 * Return: 1
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}

/**
 * _memcpy - Memory copy
 * @dest: Destination
 * @src: Source
 * @n: input
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}

/**
 * _strncat - Function that concatenates two strings
 * @dest:Destination
 * @src: Source
 * @n: n
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, z;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	for (z = 0; z < n; z++)
	{
		dest[x + z] = src[z];
		if (src[z] == '\0')
			z = n;
	}
	return (dest);
}
