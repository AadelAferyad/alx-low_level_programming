#include "dog.h"

/**
  * free_dog - fees the dog (allocated memory on the heap).
  *
  * @d: the dog's structures.
  *
  * Return: Nothing (void).
  */

void free_dog(dog_t *d)
{
	if (!d)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
