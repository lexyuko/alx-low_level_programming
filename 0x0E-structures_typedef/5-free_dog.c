#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memory of the struct dog
 * @d: pointer to struct dog
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}

