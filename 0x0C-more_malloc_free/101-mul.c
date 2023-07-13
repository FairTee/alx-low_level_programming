#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define ERR_MSG "Error"

/**
 * is_digit - checks if a string contains a char
 * @s: string
 * Return: 0
 */
int is_digit(char *s)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] < '0' || s[x] > '9')
			return (0);
		x++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: 0
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	return (x);
}
/**
 * errors - checks errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - multiplies two positives
 * @argc: number
 * @argv: array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, x, car, dig1, dig2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (x = 0; x <= len1 + len2; x++)
		result[x] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		dig1 = s1[len1] - '0';
		car = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			dig2 = s2[len2] - '0';
			car += result[len1 + len2 + 1] + (dig1 * dig2);
			result[len1 + len2 + 1] = car % 10;
			car /= 10;
		}
		if (car > 0)
			result[len1 + len2 + 1] += car;
	}
	for (x = 0; x < len - 1; x++)
	{
		if (result[x])
			a = 1;
		if (a)
			_putchar(result[x] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
