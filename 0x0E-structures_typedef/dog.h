#ifndef _HEADER_
#define _HEADER_
#include <stdio.h>

/**
  * struct dog - Dog's info.
  * @name: The name of the dog.
  * @age: The age of the dog.
  * @owner: The owner of the dog.
  *
  * Description: my doggy.
  */

struct dog
{
	char *name;
	float age;
	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _HEADER_ */
