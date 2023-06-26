#include "main.h"

/**
 * _atoi - Function that converts a string to an integer
 * @s: Character used
 * Return: x by y
 */

int _atoi(char *s)
{
	int x = 0;
	int y = 1;
	int z = 0;

	while (s[z] != '\0')
	{
		if (s[z] == '-')
		{
			y = -1;
		}
		else if (s[z] >= '0' && s[z] <= '9')
		{
			x = x * 10 + (s[z] - '0');
		}
		else if (x > 0)
		{
			break;
		}
		z++;
	}
	return (x * y);

}
