#include "main.h"
#include <stdlib.h>

/**
 * create_array - represnts creating array of any size and ssign char c
 * @size: represents the size of array
 * @c: represents char which is to assign
 * Description: creating an array of any size and assign char c
 * Return: pointer to arry, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		str[a] = c;
	return (str);
}
