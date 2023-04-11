#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: array
 * @height: array
 * Return: NULL on failure and If width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int a, b, **grid;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			if (grid[a] == NULL)
			{
				for (b = 0; b < a; b++)
					free(grid[b]);
				free(grid);
				return (NULL);
			}
			for (b = 0; b < width; b++)
				grid[a][b] = 0;
		}
	}
	return (grid);
}
