#include "main.h"

/**
 * flip_bits - counts number of bits
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, num = 0;
	unsigned long int y;
	unsigned long int z = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		y = z >> x;
		if (y & 1)
			num++;
	}

	return (num);
}
