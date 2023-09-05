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
	int i;

	if (height <= 0)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
