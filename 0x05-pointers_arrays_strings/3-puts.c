#include "main.h"
#include <stdio.h>

/**
 * _puts - Function that prints a string to stdout
 * @str:character to print
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		putchar(str[a]);
		a++;
	}
	putchar('\n');
}
