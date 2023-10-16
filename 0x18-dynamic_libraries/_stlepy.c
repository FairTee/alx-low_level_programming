#include "main.h"
#include <stdio.h>

/**
 * _strchr - String character
 * @s: An input
 * @c: input
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}

	return (NULL);
}

/**
 * _strlen - Function that returns the length of a string
 * @s: Character input
 * Return: length of string
 */
int _strlen(char *s)
{
	int x = 1, sum = 0;
	char z = s[0];

	while (z != '\0')
	{
		sum++;
		z = s[x++];
	}
	return (sum);
}

/**
 * _strncpy - Function that copies a string
 * @dest: Destination
 * @src: Source
 * @n: number of char
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
