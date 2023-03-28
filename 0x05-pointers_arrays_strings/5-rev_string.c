#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: print string
  * Return: void
  */
void rev_string(char *s)
{
	int x, y, z;
	char *a, r;

	a = s;

	while (s[y] != '\0')
	{
		y++;
	}

	for (z = 1; z < y; z++)
	{
		a++;
	}

	for (x = 0; x < (y / 2); x++)
	{
		r = s[x];
		s[x] = *a;
		*a = r;
		a--;
	}
}
