#include "holberton.h"

/**
 * string_toupper - Turns all lowercase letters in a string to uppercase
 *
 * @s: String to convert
 *
 *
 *
 * Return: Character (string converted)
 *
 */

char *string_toupper(char *s)
{
	int i = 0;
	int a = *(s + i);

	while (a != '\0')
	{
		if (a <= 122 && a >= 97)
		{
			*(s + i) = *(s + i) - 32;
		}
		i = i + 1;
		a = *(s + i);
	}

	return (s);

}
