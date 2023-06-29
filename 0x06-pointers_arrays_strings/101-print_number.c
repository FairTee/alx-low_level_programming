#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Character used
 * Return: zero
 */

void print_number(int n)
{
	unsigned int v;

	v = n;

	if (n < 0)
	{
		_putchar('-');
		v = -n;
	}

	if (v / 10 != 0)
	{
		print_number(v / 10);
	}
	_putchar((v % 10) + '0');
}
