#include <stdio.h>
#include "main.h"

/**
 * _strstr - String
 * @haystack: input
 * @needle: input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}
/**
 * _abs - Function that computes the absolute value of an integer
 * @ab: Input for integer
 * Return: Value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
/**
 * char *_strcpy - Function that copies the string pointed to by src
 * @dest: Destination
 * @src: Source
 * Return: The string
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	for (; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
