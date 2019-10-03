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
	int j = 0;
	int a = *(s1 + i);
	int b = *(s2 + j);
	int c;

	while (a != '\0' && b != '\0')
	{
		c = a - b;

		if (c != 0)
		{
			return (c);
		}

		i = i + 1;
		j = j + 1;
		a = *(s1 + i);
		b = *(s2 + j);
	}

	return (0);

}
