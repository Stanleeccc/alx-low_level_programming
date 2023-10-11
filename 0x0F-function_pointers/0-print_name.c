#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name using pointer to function
 * @name: name of the person
 * @f: variable to the name of function
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
