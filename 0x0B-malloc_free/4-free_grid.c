#include "main.h"

/**
 * free_grid - function free allocated 2D array on the heap.
 *
 * @grid: the 2d array.
 * @height: the height of the array.
 *
 */



void free_grid(int **grid, int height)
{
	int i = 0;

	if (!grid || height == 0)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
