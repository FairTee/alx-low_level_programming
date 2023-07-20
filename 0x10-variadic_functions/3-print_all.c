#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *yep, *zet = "";

	va_list lit;

	va_start(lit, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", zet, va_arg(lit, int));
					break;
				case 'i':
					printf("%s%d", zet, va_arg(lit, int));
					break;
				case 'f':
					printf("%s%f", zet, va_arg(lit, double));
					break;
				case 's':
					yep = va_arg(lit, char *);
					if (!yep)
						yep = "(nil)";
					printf("%s%s", zet, yep);
					break;

				default:
					x++;
					continue;
			}
			zet = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(lit);
}
