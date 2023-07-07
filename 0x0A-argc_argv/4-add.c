#include <stdio.h>
#include <stdlib>
#include <ctype.h>
#include <string.h>
/**
 * check_num -checks string digit
 * @str: array str
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int count;

	count = 0;

	while (count < strlen(str))

	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Prints the name of a program
 * @argc: counting arguments
 * @argv: argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int total;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			total += str_to_int;
		}

		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", total);

	return (0);
}
