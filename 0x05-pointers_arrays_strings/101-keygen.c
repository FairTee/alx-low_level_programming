#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH_PASSWRD 11
/**
 * main- entry of the program
 * Return: Always 0
 */

int main(void)
{
	char p;
	int x;

	srand(time(NULL));

	while (x <= 2645)
	{
		p = rand() % 128;
		x += p;
		putchar(p);
	}
	putchar(2772- x)
	return (0);
}
