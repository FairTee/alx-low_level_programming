#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: string involved
 * @n: number of integers
 * @...: numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pun;
	unsigned int lit;

	va_start(pun, n);

	for (lit = 0; lit < n; lit++)
	{
		printf("%d", va_arg(pun, int));

		if (lit != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(pun);
}
