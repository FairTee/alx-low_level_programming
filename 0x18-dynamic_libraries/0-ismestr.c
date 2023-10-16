#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: an input
 * Return: 1
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: const byte
 * @n: bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}

/**
 * _strcat - Function that concatenates two strings
 * @dest: Copying to
 * @src: Copying from
 * Return: Strings
 */
char *_strcat(char *dest, char *src)
{

	int x, z;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	for (z = 0; (dest[x + z] = *src++) != '\0'; z++)
	{
	}
	return (dest);
}
