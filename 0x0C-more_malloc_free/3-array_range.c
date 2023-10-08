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
	int *array, i = 0;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (!array)
		return (NULL);

	while (min <= max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
