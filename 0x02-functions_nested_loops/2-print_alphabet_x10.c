#include "main.h"
/**
 * print_alphabet_x10-Prints alphabets 10X
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 97; y <= 122; y++)
			_putchar(y);
		_putchar('\n');
	}

}
