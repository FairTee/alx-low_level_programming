#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints in reverse
 * @s: character for this function
 */

void print_rev(char *s)
{
	int len = 0;
	int a;

	while (s[len] != '\0')
	{
		len++;
	}

	for (a = len - 1; a >= 0; a--)
	{
		putchar(s[a]);
	}
	putchar('\n');
}
