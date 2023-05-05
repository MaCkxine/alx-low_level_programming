#include "main.h"

/**
 * clear_bit - sets value of a given bit to 0
 * @n: pointer to number to be changed
 * @index: index of bit to be cleared
 * Return: 1 for success -1 for fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
