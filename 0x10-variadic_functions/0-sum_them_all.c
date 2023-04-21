#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all paramters
 * @n: number of paramters passed to function
 * @...: variable number of paramters
 * Return:  0 or the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	unsigned int i, sum = 0;

	va_start(x, n);

	for (i = 0; i < n; i++)
		sum += va_arg(x, int);

	va_end(x);

	return (sum);
}
