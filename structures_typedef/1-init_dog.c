#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function sets the name, age, and owner fields
 * of the struct dog pointed to by d. It does not allocate memory,
 * it only assigns the pointers directly.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;

	d->name = name;
	d->age = age;
	d->owner = owner;

}
