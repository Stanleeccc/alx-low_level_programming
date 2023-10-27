#include "main.h"

/**
 * flip_bits - a function that returns the number of bits to flip
 * to get from one number to another
 * @n: number 1
 * @m: number 2
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, countbit = 0;
	unsigned long int c;
	unsigned long int e = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = e >> i;
		if (c & 1)
			countbit++;
	}

	return (c);
}
