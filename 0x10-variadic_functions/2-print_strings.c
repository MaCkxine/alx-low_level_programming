#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed
 * @...: variable number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	char *str;
	unsigned int i;

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(x, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(x);
}
