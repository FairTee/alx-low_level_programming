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
	char passwrd[LENGTH_PASSWRD];
	int x;

	srand(time(NULL));

	for (x = 0; x < LENGTH_PASSWRD - 1; x++)
	{
		passwrd[x] = rand() % 26 + 'c';
	}
	passwrd[LENGTH_PASSWRD - 1] = '\0';

	printf("%s\n", passwrd);
	return (0);
}
