#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Libere de la memoire.
 * @grid: l'adresse du tableaux en 2 dimension.
 * @height: le nombre de colonne dans le tableau.
 *
 */

void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
	{
	return;
	}
for (i = 0; i < height; i++)
	{
	if (grid[i] != NULL)
		{
		free(grid[i]);
		}
	}
free(grid);
}
