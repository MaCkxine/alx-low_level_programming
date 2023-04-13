#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int x, y;

	if (min > max)
		return (NULL);

	y = max - min + 1;

	ptr = malloc(sizeof(int) * y);

	if (ptr == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		ptr[x] = min++;

	return (ptr);
}
