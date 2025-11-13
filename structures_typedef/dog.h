#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structure to store information about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Description: This structure is used to store basic information
 * about a dog, including its name, age, and owner's name.
 */
typedef struct dog
{

	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
