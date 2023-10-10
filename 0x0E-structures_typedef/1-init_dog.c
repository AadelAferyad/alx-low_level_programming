#include "dog.h"

/**
 * init_dog - function that initialize my dog struct.
 *
 * @d: struct dog.
 * @name: pointer to char string dog's name.
 * @age: float the age dog's age.
 * @owner: pointer to char string dog's owner.
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d || !name || !owner)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

