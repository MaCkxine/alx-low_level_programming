#include <stdlib.h>
#include "main.h"

/**
 * count_word -  function returns a pointer to an array of strings
 * @s: string to be evaluated
 * Return: count of words
 */

int count_word(char *s)
{
	int i, n, t;

	i = 0;
	t = 0;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			t++;
		}
	}

	return (t);
}

/**
 * **strtow -function that splits a string into words
 * @str: string to split
 * Return: pointer to new string or NULL
 */

char **strtow(char *str)
{
	char **nstr, *newstr;
	int a, b = 0, c = 0, x, d = 0, y, z;

	while (*(str + c))
		c++;
	x = count_word(str);
	if (x == 0)
		return (NULL);

	nstr = (char **) malloc(sizeof(char *) * (x + 1));
	if (nstr == NULL)
		return (NULL);

	for (a = 0; a <= c; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (d)
			{
				z = a;
				newstr = (char *) malloc(sizeof(char) * (d + 1));
				if (newstr == NULL)
					return (NULL);
				while (y < z)
					*newstr++ = str[y++];
				*newstr = '\0';
				nstr[b] = newstr - d;
				b++;
				d = 0;
			}
		}
		else if (d++ == 0)
			y = a;
	}

	nstr[b] = NULL;

	return (nstr);
}
