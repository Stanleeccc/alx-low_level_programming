#include"main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index..
 * @n: number of bits
 * @index: checker index
 * Return: value of the bit, -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d, c;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	d = 1 << index;
	c = n & d;
	if (c == d)
		return (1);
	return (0);
}
