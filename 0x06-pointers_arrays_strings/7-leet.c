#include "holberton.h"

/**
 * leet - c0nv3r75 4 57r1n6 1n70 l337 f0rm47.
 *
 * @s: 57r1n6 70 c0nv3r7
 *
 *
 *
 * Return: 57r1n6 (c0nv3r73d)
 *
 */

char *leet(char *s)
{
	int com[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int j;
	int res[5] = {'4', '3', '0', '7', '1'};
	int i = 0;
	int a = *(s + i);

	while (a != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (a == com[j])
			{
				*(s + i) = res[j / 2];
			}
			j = j + 1;
		}
		i = i + 1;
		a = *(s + i);
	}
	return (s);
}
