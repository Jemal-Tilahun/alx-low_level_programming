#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a dog structure
 * @d: A dog structure
 * @name: The name of the dog
 * @age: The age of dog
 * @owner: The owner of dog
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
