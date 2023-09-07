#include "main.h"

/**
 * array_range - function that creates an array of integers.
 *
 * @min: min integer.
 * @max: max integer.
 *
 * Return: returns allocated array.
 */


int *array_range(int min, int max)
{
	int i = 0, size;
	int *p;

	if (min > max)
		return (NULL);
	size = max - min;
	p = (int *) malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	while (min <= max)
	{
		p[i] = min;
		i++;
		min++;
	}
	p[i] = '\0';
	return (p);
}
