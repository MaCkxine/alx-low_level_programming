#include "main.h"

/**
 * print_last_digit - function that prints the last digit
 * @n: takes ln an integer
 * Return: returns output
 */

int print_last_digit(int n)
{
	int a;

	if  (n < 0)
	n = -n;

	a = n % 10;

	if (a < 0)
		a = ln * -1;
	_putchar(a + '0');

	return (a);
}
