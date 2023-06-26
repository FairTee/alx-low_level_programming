#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- entry of the program
 * Return: Always 0
 */

int main(void)
{
	int psd[100];
	int x, y, z;

	y = 0;

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		psd[x] = rand() % 78;
		y += (psd[x] + '0');
		putchar(psd[x] + '0');

		if ((2772 - y) - '0' < 78)
		{
			z = 2772 - y - '0';
			y += z;
			putchar(z + '0');
			break;

		}

	}
	return (0);

}
