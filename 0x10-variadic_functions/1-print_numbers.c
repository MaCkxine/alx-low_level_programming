#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers
 * @separator: string to be printed inbetween numbers
 * @n: number of integers passed to function
 * @...: variable number of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list integers;
	unsigned int i;

	va_start(integers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(integers, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(integers);
}
