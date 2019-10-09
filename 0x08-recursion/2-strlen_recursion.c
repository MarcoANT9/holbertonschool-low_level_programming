#include "holberton.h"

/**
 * _strlen_recursion - Says how many characters are in a string
 *
 * @s: String to measure
 *
 *
 * Description - Uses recursivity to measure the length of a string
 *
 * Return: Number of characters in the string (int)
 */

int _strlen_recursion(char *s)
{
	if (s[0])
	{
		return (1 + _strlen_recursion(++s));
	}
}
