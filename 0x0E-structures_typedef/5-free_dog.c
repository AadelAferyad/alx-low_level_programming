#include "dog.h"
#include <stdlib.h>


/**
  * free_dog - fees the dog (allocated memory on the heap).
  *
  * @d: the dog's structures.
  *
  * Return: Nothing (void).
  */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
