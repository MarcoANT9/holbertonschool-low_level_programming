#include "holberton.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string.
 *
 * @s: Pointer to string to calculate length
 *
 * Description - Takes a pointer to a string, goes throught it and returns
 *               the value of its length. DOES NOT COUNT THE NULL CHAR.
 *
 * Return: Value of the length of the string (int).
 *
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	if (i == 0)
	{
		return (i);
	}
	return (i - 1);
}

/**
 * malloc_create - Allocates memory for a string.
 *
 * @b: size of the allocated space.
 *
 * Description - A copy of the malloc function to save space.
 *
 * Return: → Pointer to the allocated space.
 *         → NULL on failure.
 */
void *malloc_create(unsigned int b)
{
	char *ar;

	ar = malloc(b);
	if (ar == NULL)
		return (NULL);

	return (ar);
}

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: Pointer to first string.
 * @s2: Pointer to second string.
 * @n: Number of bytes to copy.
 *
 *
 * Description - This program takes two strings to concatenate, it appends
 *               n bytes of the second string to the first one, if either of
 *               them is NULL, they will be treated as an empry string.
 *               The function returns a pointer to the new, concatenated
 *               string, or Null on failure.
 *
 * Return: → Pointer to concatenated string.
 *         → NULL on failure.
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat; /** Pointer to return */
	unsigned int size1, size2;
	unsigned int i = 0, j = 0;

	if (s1 == NULL && s2 == NULL)
	{
		concat = malloc_create(sizeof(char));
		concat[0] = '\0';
	}
	else if (s1 == NULL && s2 != NULL)
	{
		size2 = _strlen(s2);
		if (size2 < n)
		{
			concat = malloc_create(sizeof(char) * (n + 1));
			while (i < n)
			{
				concat[i] = s2[i];
				i++;
			}
			concat[i] = '\0';
		}
		else
		{
			concat = malloc_create(sizeof(char) * (size2 + 1));
			while (i < size2)
			{
				concat[i] = s2[i];
				i++;
			}
			concat[i] = '\0';
		}
	}
	else if (s1 != NULL && s2 == NULL)
	{
		size1 = _strlen(s1);
		concat = malloc_create(sizeof(char) * (size1 + 1));
		while (i < size1)
		{
			concat[i] = s1[i];
			i++;
		}
		concat[i] = '\0';

	}
	else
	{
		size1 = _strlen(s1);
		size2 = _strlen(s2);
		concat = malloc_create(sizeof(char) * (size1 + size2));
		for (i = 0; i < size1; i++)
		{
			concat[i] = s1[i];
		}
		concat[i] = ' ';
		i++;
		for (j = 0; j < size2; j++)
		{
			concat[i] = s2[j];
			i++;
		}
		concat[i] = '\0';

	}
	return (concat);
}
