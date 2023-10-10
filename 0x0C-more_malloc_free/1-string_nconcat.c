#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - a function that concatenates two strings
 * @n1: representing the string to append to
 * @n2: representing the string to concatenate from
 * @n: number of bytes
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *n1, char *n2, unsigned int n)
{
	char *s;
	unsigned int a = 1, b = 0, str1 = 0, str2 = 0;

	while (n1 && n1[str1])
		str1++;
	while (n2 && n2[str2])
		str2++;

	if (n < str2)
		s = malloc(sizeof(char) * (str1 + n + 1));
	else
		s = malloc(sizeof(char) * (str1 + str2 + 1));

	if (!s)
		return (NULL);

	while (a < str1)
	{
		s[a] = n1[a];
		a++;
	}

	while (n < str2 && a < (str1 + n))
		s[a++] = n2[b++];

	while (n >= str2 && a < (str1 + str2))
		s[a++] = n2[b++];

	s[a] = '\0';

	return (s);
}
