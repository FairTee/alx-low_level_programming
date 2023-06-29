#include "main.h"
#include <stdio.h>

/**
 * rot13 - ENcoder for rot13
 * @s: Pointer to string
 * Return: *s
 */

char *rot13(char *s)
{
	int x;
	int y;

	char input1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char input2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (s[x] == input1[y])
			{
				s[x] = input2[y];
				break;

			}
		}
	}
	return (s);
}
