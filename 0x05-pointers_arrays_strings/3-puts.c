#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line to stdout
 * @str : print string
 * return: 0
 */
void _puts(char *str);
{
	char *str[] = "1, 2, 3, 4, 5";

	putchar("The first five numbers are : %s\n", *str);

	return (0);
}
