#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates a pointer to an array of a fixed value.
 *
 * @size: Size of the array.
 * @c: Character to initialize the array.
 *
 * Description - Using malloc, this program will initialize an array of any
 *               size using the character c; if the size is 0 the program will
 *               return NULL.
 *
 * Return: → Pointer to the created array.
 *         → NULL if it fails to initialize the array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *hlist;

	if (size == 0)
	{
		hlist = NULL;
		return (hlist);
	}

	else
	{
		hlist = malloc(sizeof(char) * size);
		for (i = 0; i < size; i++)
		{
			*(hlist + i) = c;
		}
		hlist[i] = '\0';
		return (hlist);
	}
}
