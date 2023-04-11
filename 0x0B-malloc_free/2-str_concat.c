#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: input
 * @s2: input
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	s = malloc(sizeof(char) * (x + y + 1));

	if (s == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		s[x] = s1[x];
		x++;
	}

	while (s2[y] != '\0')
	{
		s[x] = s2[y];
		x++, y++;
	}
	s[x] = '\0';
	return (s);
}
