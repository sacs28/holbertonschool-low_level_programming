#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid
 * @grid: Pointer to the 2D array to free
 * @height: Height of the grid (number of rows)
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
