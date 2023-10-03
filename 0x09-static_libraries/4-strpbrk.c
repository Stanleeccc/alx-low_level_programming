#include "main.h"
/**
 * _strpbrk - This represents the starting point
 * @n: represents input
 * @accept: represents input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *n, char *accept)
{
	int a;

	while (*n)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*n == accept[a])
				return (n);
		}
		n++;
	}
	return ('\0');
}
