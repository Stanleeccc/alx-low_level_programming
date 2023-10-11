#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - a function that initializes a variable of type struct dog
 * @d: struct dog to be initialize
 * @name: the name of the struct dog to initialize
 * @age: the age of the struct dog to initialize
 * @owner: the owner of the struct dog to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
