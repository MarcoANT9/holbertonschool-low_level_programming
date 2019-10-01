#include "holberton.h"

/**
 * _strlen - Gives the length of a string
 *
 * @s: String to measure
 *
 *
 * Return: Length of the string
 *
 */

int _strlen(char *s)
{
	int i = 0;
	char a = *s;

	while (a != '\0')
	{
		i = i + 1;
		a = *(s + i);
	}

	return (i);
}
