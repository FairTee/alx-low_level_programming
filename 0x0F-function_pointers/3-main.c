#include "function_pointers.h"
#include "3-calc.h"

/**
 * main - prints results of simple operations
 * @argc: arguments number given to a program
 * @argv: array of pointers
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int n, m;
	char *opt;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n = atoi(argv[1]);
	opt = argv[2];
	m = atoi(argv[3]);

	if (get_op_func(opt) == NULL || opt[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opt == '/' && m == 0) ||
		(*opt == '%' && m == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(opt)(n, m));

	return (0);
}
