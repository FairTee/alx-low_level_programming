#include "main.h"
/**
 * rev_string - Reversing an array
 * @n: Integer
 * Return: 0
 */

void rev_string(char *n)
{
	int x = 0;
	int y = 0;
	char tell;

	while (*(n + x) != '\0')
	{
		x++;
	}
	x--;

	for (y = 0; y < x; y++, x--)
	{
		tell = *(n + y);
		*(n + y) = *(n + x);
		*(n + x) = tell;
	}
}
/**
 * infinite_add - Adds two numbers together
 * @n1: First number
 * @n2: Second number
 * @r: pointer to buffer
 * @size_r: size of buffer
 * Return:Calls function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, x = 0, y = 0, d = 0;
	int b = 0, c = 0, tell_total = 0;

		while (*(n1 + x) != '\0')
			x++;

	while (*(n2 + y) != '\0')
		y++;
	x--;
	y--;

	if (y > size_r || x >= size_r)
		return (0);
	while (y >= 0 || x >= 0 || a == 1)
	{
		if (x < 0)
			b = 0;
		else
			b = *(n1 + x) - '0';
		if (y < 0)
			c = 0;
		else
			c = *(n2 + y) - '0';
		tell_total = b + c + a;
		if (tell_total >= 10)
			a = 1;
		else
			a = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (tell_total % 10) + '0';
		d++;
		y--;
		x--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
}
