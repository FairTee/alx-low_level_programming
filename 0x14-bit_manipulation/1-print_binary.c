#include "main.h"

/**
 * print_binary - prints the binary equivalent of a dec num
 * @n: number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int x, list = 0;
	unsigned long int new;

	for (x = 63; x >= 0; x--)
	{
		new = n >> x;

		if (new & 1)
		{
			_putchar('1');
			list++;
		}
		else if (list)
			_putchar('0');
	}
	if (!list)
		_putchar('0');
}
