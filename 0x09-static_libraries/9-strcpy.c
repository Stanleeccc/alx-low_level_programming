#include "main.h"

/**
 * char *_strcpy - function that copies the string pointed to by src
 * @dest: represents copy to
 * @src: represents copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int s = 0;
	int n = 0;

	while (*(src + s) != '\0')
	{
		s++;
	}
	for (; n < s ; n++)
	{
		dest[n] = src[n];
	}
	dest[s] = '\0';
	return (dest);
}
