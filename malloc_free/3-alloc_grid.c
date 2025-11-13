#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers
 * @width: The number of columns in the grid
 * @height: The number of rows in the grid
 *
 * Description: Allocates memory for a two-dimensional array of integers
 * with @height rows and @width columns. Each element of the grid is
 * initialized to 0. If width or height is less than or equal to 0, or
 * if memory allocation fails, the function returns NULL.
 *
 * Return: Pointer to the 2D array (grid), or NULL on failure
 */
int **alloc_grid(int width, int height)
{

	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
	return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{

		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == NULL)
		{

			while (i > 0)
			{
				i--;
				free(arr[i]);
			}

			free(arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		arr[i][j] = 0;
	}

	return (arr);
}
