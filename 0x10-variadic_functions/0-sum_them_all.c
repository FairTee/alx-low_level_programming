#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * @...: num of parameters to calculate
 * Return: 0, if n ==0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int y, sum = 0;

	va_start(x, n);

	for (y = 0; y < n; y++)
		sum += va_arg(x, int);

	va_end(x);

	return (sum);
}
