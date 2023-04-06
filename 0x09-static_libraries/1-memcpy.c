#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: where memory is stored
 *@src: where memory is copied
 *@n: number of bytes
 *Return: pointer to n
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
