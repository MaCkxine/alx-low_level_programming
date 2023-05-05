#include "main.h"

/**
 * get_endianness - will check if the machine is little or big
 * Return: 0 for big and 1 for little
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *) &x;

	return (*y);
}
