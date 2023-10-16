#include "main.h"

/**
 * _islower - Function that checks for lowercase character
 * @c: Letter input
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/**
 * _puts - Function that prints a string
 * @str: String
 * Return: The string
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}

/**
 * _strcmp - Function that compares two strings
 * @s1: input
 * @s2: input
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int x;

	for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}
	return (0);
}
/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: String input
 * @accept: input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, z, net, w;

	net = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		w = 0;

		for (z = 0; accept[z] != '\0'; z++)
		{
			if (accept[z] == s[x])
			{
				net++;
				w = 1;
			}
		}
		if (w == 0)
			return (net);
	}

	return (net);
}
