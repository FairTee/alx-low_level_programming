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
	unsigned int x = 0;
	int y = 1;

	do {
		if (*s == '-')
			y *= -1;
		else if (*s >= '0' && *s <= '9')
			x = (x * 10) + (*s - 0);
		else if (x > 0)
			break;
	} while (*s++);

	return (x * y);
}
