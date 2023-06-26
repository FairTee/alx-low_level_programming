#include "main.h"
#include <limits.h>
#include <stddef.h>

/**
 * _atoi - Function that converts a string to an integer
 * @s: Character used
 * Return: x by y
 */

int _atoi(char *s)
{
	int a, b, c, d, f, dgt;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	f = 0;
	dgt = 0;

	while (s[d] != '\0')
		d++;
	while (a < d && f == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			dgt = s[a] - '0';
			if (b % 2)
				dgt = -dgt;
			c = c * 10 + dgt;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;

			f = 0;
	}
		a++;
}
	if (f == 0)
	{
	return (0);
	}

	return (c);
	}
