#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array using a comparison function.
 *
 *
 * @array: pointer to an array of integer.
 * @size: size of the array.
 * @cmp: pointer to a function that takes an integer argument.
 *
 * Return: if success return the index of the array else -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = -1;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (++i < size)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
