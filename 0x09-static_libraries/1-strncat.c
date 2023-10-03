#include "main.h"

/**
 * _strncat - representas a character that is used to concatenate two strings
 * using at most n bytes from src
 * @dest: represents value inputed
 * @src: represents value inputed
 * @n: represents value inputed
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < a && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}