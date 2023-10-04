#include "main.h"

/**
 * alloc_grid - function allocate 2D array on the heap.
 *
 * @height: the height of the array.
 * @width:  the width of the array.
 *
 * Return: return allocated memory for 2d array.
 */
int **alloc_grid(int width, int height)
{
	int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (!array)
		return (NULL);
	while (i <  height)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (!array[i])
		{
			while (j < i)/*j = 0, 1, 2, 3, i = 0, 1, 2, 3 width = 4*/
			{
				free(*(array + j));
				j++;
			}
			free(array);
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			array[i][j] = 0;
			j++;
		}
		i++;
	}
	return (array);
}
