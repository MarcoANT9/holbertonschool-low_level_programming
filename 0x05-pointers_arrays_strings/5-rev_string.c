#include "holberton.h"

/**
 * rev_string - Reverses a given string
 *
 * @s: String to reverse
 *
 *
 * Return: Nothing (void)
 *
 */

void rev_string(char *s)
{
	int i = 0;
	int j;
	int tmp;
	int a = *(s + i);

	while (a != '\0')
	{
		i += 1;
		a = *(s + i);
	}

	i = i - 1;

	for (j = 0; j <= i; j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i--] = tmp;
	}
}
