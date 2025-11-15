#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Free the structure called dog
 * @d: Pointer to the struct dog to initialize
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	return;

	free(d->name);
	free(d->owner);
	free(d);
}
