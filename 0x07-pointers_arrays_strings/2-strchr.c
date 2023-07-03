#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: input value
 * @c: input value
 * Return: pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	int x = 0;

	for (; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
