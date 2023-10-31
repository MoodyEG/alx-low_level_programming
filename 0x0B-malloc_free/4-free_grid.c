#include "main.h"

/**
 * free_grid -  returns a pointer to a 2 dimensional array of integers
 * @grid: what to be freed
 * @height: our parameters
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
