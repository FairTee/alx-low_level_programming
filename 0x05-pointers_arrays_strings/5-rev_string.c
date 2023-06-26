#include "main.h"
#include <stdio.h>
/**
 * rev_string - This function that reverses a string
 * @s: Character used for this function
 */

void rev_string(char *s)
{
	int len = 0;
	int a;

	while (s[len] != '\0')
	{
		len++;
	}
	for (a = 0; a < len / 2; a++)
	{
		char revs = s[a];

		s[a] = s[len - a - 1];
		s[len - a - 1] = revs;

	}
}
