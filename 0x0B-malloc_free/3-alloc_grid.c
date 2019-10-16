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
		grido[i] = malloc(sizeof(int) * height);
		if (grido[i] == NULL)
		{
			while (i >= 0)
			{
				free(grido[i]);
				i--;
			}
			return (NULL);
		}
		i++;
	}
	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			grido[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grido);
}
