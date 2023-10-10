#include <stdlib.h>
#include "main.h"

/**
 * *array_range - a function that creates an array of integers
 * @min: represents the minimum range of values to be stored
 * @max: represents the maximum range of values to be stored
 * Return: a pointer
 */

int *array_range(int min, int max)
{
	int *pnt;
	int a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pnt = malloc(sizeof(int) * size);

	if (pnt == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		pnt[a] = min++;

	return (pnt);
}
