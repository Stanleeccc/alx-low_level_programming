#include <stdlib.h>
#include "main.h"

/**
 * *_memset - represents memory with a constant byte
 * @s: memory area to be filled
 * @b: represents the char to copy
 * @n: represents the number of times to copy b
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * *_calloc - function allocates memory for an array with a constant byte
 * @nmemb: represents the number of elements in the array
 * @size: represnts the size of each element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pnt;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pnt = malloc(size * nmemb);

	if (pnt == NULL)
		return (NULL);

	_memset(pnt, 0, nmemb * size);

	return (pnt);
}
