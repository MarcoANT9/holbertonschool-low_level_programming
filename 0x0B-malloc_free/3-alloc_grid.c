#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates the memory to a 2D grid.
 *
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Description - This function allocates the memory space required to
 *               make a 2D grid, initialize all its values to 0 and
 *               returns a pointer to the beginning of the array.
 *
 * Return: → Pointer to array.
 *         → NULL if an error ocurrs.
 */

int **alloc_grid(int width, int height)
{
	int **grido;
	int i, j;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	grido = malloc(sizeof(int *) * height);
	if (grido == NULL)
	{
		return (NULL);
	}

	while (i < height)
	{
		grido[i] = malloc(sizeof(int) * width);
		if (grido[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(grido[i]);
			}
			free(grido);
			return (NULL);
		}
		i++;
	}

	for (i = 0; j < height; j++)
	{
		grido[i][j] = 0;
	}

	return (grido);

}
