#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Construit un tableaux en 2 dimension.
 * @width: La longeur du tableaux.
 * @height: La hauteur du tableaux.
 *
 * Return: grid l'adresse du tableaux.
 */

int **alloc_grid(int width, int height)
{

int num1, num2, i;
int **grid;
if (height <= 0 ||  width <= 0)
	{
	return (NULL);
	}

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
	{
	return (NULL);
	}
for (num1 = 0; num1 < height; num1++)
	{
	grid[num1] = malloc(sizeof(int) * width);
	if (grid[num1] == NULL)
		{
		for (i = 0; i < num1; i++)
			{
			free(grid[i]);
			}
		free(grid);
		return (NULL);
		}
	for (num2 = 0; num2 < width; num2++)
		{
		grid[num1][num2] = 0;
		}
	}
return (grid);
}
