#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Function that checks for alphabetic character
 * @c: letter
 * Return: 1 if c is a letter
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
/**
 * _strpbrk - String break
 * @s: letter
 * @accept: input
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int x, z;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (s[x] == accept[z])
				return (s + x);
		}
	}

	return (NULL);
}
