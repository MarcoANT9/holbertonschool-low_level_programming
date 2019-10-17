#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array.
 *
 * @nmemb: Quantity of members in the array.
 * @size: Size of the elements in the array.
 *
 * Description -
 *
 * Return: → Pointer to the beginning of the array if succcessfull.
 *         → NULL if fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ar;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ar = malloc(nmemb * size);

	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (size * nmemb); i++)
	{
		ar[i] = 0;
	}

	return (ar);

}
