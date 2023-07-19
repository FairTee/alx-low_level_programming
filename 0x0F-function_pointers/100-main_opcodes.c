#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: arguments array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int m, n;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	m = atoi(argv[1]);

	if (m < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (n = 0; n < m; n++)
	{
		if (n == m - 1)
		{
			printf("%02hhx\n", array[n]);
			break;
		}
		printf("%02hhx ", array[n]);
	}
	return (0);
}
