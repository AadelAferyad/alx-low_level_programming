#include "dog.h"



/**
 * _strdup - function that allocates a block of memory and initialize it.
 *
 * @str: string will be coppied to the allocated memory.
 *
 * Return: return allocated memory.
 */

char *_strdup(char *str)
{
	int i = 0;
	char *p;

	while (str[i])
		i++;
	p = (char *) malloc(i + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: pointer to the new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	(*d).name = _strdup(name);
	(*d).owner = _strdup(owner);
	if ((*d).name == NULL || (*d).owner == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}
