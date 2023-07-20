#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed
 * @n: number of strings
 * @...: number of strings by variable
 * Description: if separator is NULL, dont print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list sep;
	char *string;
	unsigned int lit;

	va_start(sep, n);

	for (lit = 0; lit < n; lit++)
	{
		string = va_arg(sep, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (lit != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(sep);
}
