#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter.
 *
 * @array: pointer to an array of integers.
 * @size: size of the array.
 * @action: pointer to a function that takes a integers as parameters.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = -1;

	if (array != NULL && action != NULL && size > 0)
	{
		while (++i < (int)size)
			action(array[i]);
	}
}
