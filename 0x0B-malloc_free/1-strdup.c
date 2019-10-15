#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a copy of a string.
 *
 * @str: String to copy.
 *
 * Description - This program returns a pointer to a newly allocated space
 *               in memory which contains a copy of the string in the
 *               parameter of the function. Returns NULL if str equals NULL
 *               or if there is insufficient memory avaliable.
 *
 * Return: → Pointer to new space in memory with copy of the input string.
 *         → NULL if the string is NULL or the program runs out of memory.
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
		{
			i++;
		}
		i++;
		cpy = malloc((sizeof(char) * i) + 1);
		if (cpy == NULL)
		{
			return (NULL);
		}

		while (j <= i)
		{
			*(cpy + j) = *(str + j);
			j++;
		}
		return (cpy);
	}
}
