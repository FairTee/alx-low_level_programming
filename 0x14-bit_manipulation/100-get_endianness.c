#include "main.h"

/**
 * get_endianness - checks if a machine is big or small
 * Return: 0
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
