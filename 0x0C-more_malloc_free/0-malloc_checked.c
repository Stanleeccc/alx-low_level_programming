#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @n: represents the number of bytes
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int n)
{
	void *pnt;

	pnt = malloc(n);

	if (pnt == NULL)
		exit(98);

	return (pnt);
}
