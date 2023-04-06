#include "main.h"

/**
 * _atoi - convert a string into an integer.
 * @s: string to be used
 * Return: integer.
 */

int _atoi(char *s)
{
	int sign = 1, x = 0;
	unsigned int y = 0;

	while (!(s[x] <= '9' && s[x] >= '0') && s[x] != '\0')
	{
		if (s[x] == '-')
			sign *= -1;
		x++;
	}
	while (s[x] <= '9' && (s[x] >= '0' && s[x] != '\0'))
	{
		y = (y * 10) + (s[x] - '0');
		x++;
	}
	y *= sign;
	return (y);
}
