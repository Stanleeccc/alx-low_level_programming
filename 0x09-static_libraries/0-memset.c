#include "main.h"

/**
 * _memset - filling a block of a memory with a specific value
 * @s: starting address of memory to be filled
 * @b: this is the desired value
 * @n: represents the number of bytes to be changed
 *
 * Return: changed array with the new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
