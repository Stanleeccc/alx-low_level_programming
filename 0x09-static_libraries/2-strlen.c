#include "main.h"

/**
 * _strlen - this represents the lenght of a string
 * @s: stands for string
 * Return: length
 */

int _strlen(char *s)
{
	int longa = 0;

	while (*s != '\0')
	{
		longa++;
		s++;
	}
	return (longa);
}
