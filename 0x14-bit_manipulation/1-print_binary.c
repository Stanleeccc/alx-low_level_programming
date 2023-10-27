#include "main.h"

/**
 * _pow - a function that prints the binary representation of a number
 * @b: base of the exponent
 * @p: power of the exponent
 *
 * Return: value of (base ^ power)
 */

unsigned long int _pow(unsigned int b, unsigned int p)
{
	unsigned long int number;
	unsigned int i;

	number = 1;
	for (i = 1; i <= p; i++)
		number *= b;
	return (number);
}

/**
 * print_binary - prints a number binary
 * @n: number to print
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int d, c;
	char x;

	x = 0;
	d = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (d != 0)
	{
		c = n & d;
		if (c == d)
		{
			x = 1;
			_putchar('1');
		}
		else if (x == 1 || d == 1)
		{
			_putchar('0');
		}
		d >>= 1;
	}
}
