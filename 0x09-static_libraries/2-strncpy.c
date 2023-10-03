#include "main.h"

/**
 * _strncpy - this is used to copy a string
 * @dest: this represents value input
 * @src: this represents value input
 * @n: this represents value input
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
