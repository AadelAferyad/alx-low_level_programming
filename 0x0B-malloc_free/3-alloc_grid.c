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
	int i = 0, j;
	int **buffer;

	if (width <= 0 || height <= 0)
		return (NULL);
	buffer = (int **) malloc(sizeof(int) * height);
	for (i = 0; i < width; i++)
	{
		buffer[i] = (int *) malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			buffer[i][j] = 0;
		}
	}
	return (buffer);
}
