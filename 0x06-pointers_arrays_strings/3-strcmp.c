#include "holberton.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1: String 1
 * @s2: String 2
 *
 *
 * Return: Integer (comparation)
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	char a = *(s1 + i);
	int j = 0;
	char b = *(s2 + j);
	int dif;

	while (a != '\0' || b != '\0')
	{
		if (a != '\0')
		{
			i = i + 1;
		}
		if (b != '\0')
		{
			j = j + 1;
		}
		a = *(s1 + i);
		b = *(s2 + j);
	}

	dif = i - j;

	return (dif);
}
