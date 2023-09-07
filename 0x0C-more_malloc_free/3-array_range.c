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
	size = max - min + 1;
	p = (int *) malloc(sizeof(int) * size);
	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
