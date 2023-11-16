#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees allocated memories
 * @grid: parametr grid
 * @height: parametr height
 * Description: Function frees a 2 dimensional grid previously created
 * Return: IDK
*/
void free_grid(int **grid, int height)
{
	if (grid != NULL)
	{
	while (height >= 0)
		free(grid[height--]);
	free(grid);
	}
}
