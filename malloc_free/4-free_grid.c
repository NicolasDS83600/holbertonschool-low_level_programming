#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously created by alloc_grid
 * @grid: Pointer to the 2D array to free
 * @height: Number of rows in the grid
 *
 * Description: Frees the memory allocated for a two-dimensional
 * grid of integers created by alloc_grid. If @grid is NULL,
 * the function does nothing.
 *
 * Return: Nothing (void)
 */
void free_grid(int **grid, int height)
{

	int i;

	if (grid == NULL)
	return;

	for (i = 0; i < height; i++)
	free(grid[i]);

	free(grid);
}
