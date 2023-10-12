#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - a function that executes a function
 * @array: array that is to be printed to
 * @size: size of the array
 * @action: a pointer to the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
