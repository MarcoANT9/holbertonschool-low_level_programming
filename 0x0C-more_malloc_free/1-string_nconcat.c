#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: First string to concatenate.
 * @s2: Second string to concatenate.
 * @n: Bytes to copy from s2.
 *
 * Description - This program will take two strings and concatenate eachother
 *               starting from s1 and allocating s2 after it. If either of
 *               the strings is NULL it would be treated as an empty string.
 *
 * Return: A pointer to the new allocated space which contains the contents
 *         of s1 followed by the contents of s2. Null on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	char *s1s2;
	unsigned int k = 0, ij;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{}
	for (j = 0; s2[j] != '\0'; j++)
	{}
	if (j > n)
	{
		j = n;
	}
	ij = i + j;
	s1s2 = malloc((ij + 1)  * sizeof(char));
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
	while (k < ij)
	{
		*(s1s2 + k) = s2[i];
		k++;
		i++;
	}
	s1s2[k] = '\0';
	return (s1s2);
}
