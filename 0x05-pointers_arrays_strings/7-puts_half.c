#include "main.h"
#include <stdio.h>

/**
 * puts_half - Function that prints of a string
 * @str: character used
 */

void puts_half(char *str)
{
	int x = 0, y = 0, z = 0;

	while (str[y] != '\0')
	{
		y++;
	}
	z = y / 2;

	if (y % 2 != 0)
	{
		z += 1;
	}
	for (x = z; x < y; x++)
	{
		putchar(str[x]);
	}
	putchar('\n');
}
