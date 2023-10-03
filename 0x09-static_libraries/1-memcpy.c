#include "main.h"

/**
 * _memcpy - this represents a function that is used to copy memory area
 * @dest: represents memory stored
 * @src: represents memory copied
 * @n: represents the number of bytes
 *
 * Return: The memory that is copied with n byte changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
