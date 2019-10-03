#include "holberton.h"

/**
 * rot13 - Applies the rot13 algorithm
 *
 * @s: String to code
 *
 * Description - Applies the rot 13 algorithm to a string of characters, codign
 *               only characters of the alphabet.
 *
 * Return: Pointer to the coded string
 */

char *rot13(char *s)
{
char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char alpha13[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;
	int j = 0;
	int a = *(s + i);

	while (a != '\0')
	{
		j = 0;
		while (j < 52)
		{
			if (a == alpha[j])
			{
				*(s + i) = alpha13[j];
			}
			j = j + 1;
		}
		i = i + 1;
		a = *(s + i);
	}
	return (s);
}
