#include <stdlib.h>
#include "dog.h"

/**
 * main - a function that initialize a variable of type struct dog
 * return nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
