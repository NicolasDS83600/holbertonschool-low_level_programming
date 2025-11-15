#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: The string to duplicate
 * Return: Pointer to the duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{

	char *cpy;
	unsigned int i, len = 0;

	if (str == NULL)
	return (NULL);

	while (str[len] != '\0')
	len++;

	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
	return (NULL);

	for (i = 0; i < len; i++)
	cpy[i] = str[i];

	cpy[len] = '\0';

	return (cpy);
}

/**
* new_dog - Get a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Pointer to the newly created dog, or NULL on failure
*/
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *d;

	if (name == NULL || owner == NULL)
	return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	return (NULL);

	d->name = _strdup(name);
	d->owner = _strdup(owner);

	if (d->name == NULL || d->owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}
