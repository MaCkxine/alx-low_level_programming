#include "main.h"

/**
 * main - swap values of integer
 * @a: swap integer
 * @b: swap integer
 */
void swap_int(int *a, int *b);
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
