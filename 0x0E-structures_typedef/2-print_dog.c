#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a dog struct
 * @d: pointer to dog struct to print
 *
 * Description: Prints the members of the given dog struct to stdout.
 *              If a member is NULL, prints (nil) instead.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n",  d->owner ? d->owner : "(nil)");
}
