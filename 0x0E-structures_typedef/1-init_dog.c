#include "dog.h"

/**
 * init_dog - initializes a dog struct
 * @d: pointer to struct to initialize
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Initializes the members of the given dog struct with the
 *              specified values.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
