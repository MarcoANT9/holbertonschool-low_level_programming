#include "holberton.h"

/**
 * cap_string - Capitalizes all words of a string
 *
 * @s: String to capitalize
 *
 *
 * Return: The string capitalized
 *
 */

char *cap_string(char *s)
{
	int com[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int j = 0;
	int i = 0;
	int a = *(s + i);

	while (a != '\0')
	{
		j = 0;

		while (j < 13)
		{
			if (*(s + (i - 1)) == com[j])
			{
				if (a >= 97 && a <= 122)
				{
					*(s + i) = *(s + i) - 32;
				}
			}
			j = j + 1;
		}
		i = i + 1;
		a = *(s + i);
	}

	return (s);
}
