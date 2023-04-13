#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - evaluates if string has a non-digit
 * @s: string to be checked
 * Return: 0 if a non-digit is found, 1 otherwise
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
 * _strlen - length of a string
 * @s: string to be checked
 * Return: length of the string
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * errors - errors
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *s1, *s2;
	int x, y, z, i, a, b, c, *d, e = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	x = _strlen(s1);
	y = _strlen(s2);
	z = x + y + 1;
	d = malloc(sizeof(int) * z);
	if (!d)
		return (1);
	for (i = 0; i <= x + y; i++)
		d[i] = 0;
	for (x = x - 1; x >= 0; x--)
	{
		b = s1[x] - '0';
		a = 0;
		for (y = _strlen(s2) - 1; y >= 0; y--)
		{
			c = s2[y] - '0';
			a += d[x + y + 1] + (b * c);
			d[x + y + 1] = a % 10;
			a /= 10;
		}
		if (a > 0)
			d[x + y + 1] += a;
	}
	for (i = 0; i < z - 1; i++)
	{
		if (d[i])
			a = 1;
		if (e)
			_putchar(d[i] + '0');
	}
	if (!e)
		_putchar('0');
	_putchar('\n');
	free(d);
	return (0);
}
