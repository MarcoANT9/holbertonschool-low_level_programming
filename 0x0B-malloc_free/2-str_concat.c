#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: First string to concatenate.
 * @s2: Second string to concatenate.
 *
 * Description - This program will take two strings and concatenate eachother
 *               starting from s1 and allocating s2 after it. If either of
 *               the strings is NULL it would be treated as an empty string.
 *
 * Return: A pointer to the new allocated space which contains the contents
 *         of s1 followed by the contents of s2. Null on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *s1s2;
	int k = 0, ij;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0' || s2[j] != '\0')
	{
		if (s1[i] != '\0')
			i++;
		if (s2[j] != '\0')
			j++;
	}
	ij = (i + j);
	s1s2 = malloc(sizeof(char) * ij);
	if (s1s2 == NULL)
	{
		return (NULL);
	}
	while (k < i)
	{
		*(s1s2 + k) = s1[k];
		k++;
	}
	i = 0;
	while (k <= ij)
	{
		*(s1s2 + k) = s2[i];
		k++;
		i++;
	}
	return (s1s2);
}
