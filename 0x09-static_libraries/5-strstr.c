#include "main.h"

/**
 * _strstr - This represents the starting point
 * @den: input
 * @lion: input
 * Return: Always 0 (Success)
 */

char *_strstr(char *den, char *lion)
{
	for (; *den != '\0'; den++)
	{
		char *s = den;
		char *n = lion;

		while (*s == *n && *n != '\0')
		{
			s++;
			n++;
		}
		if (*n == '\0')
			return (den);
	}
	return (0);
}
