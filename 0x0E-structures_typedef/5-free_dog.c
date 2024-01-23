#include <stdlib>
#include "dog.h"

/**
 * main -  a function that frees dogs
 * return nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
