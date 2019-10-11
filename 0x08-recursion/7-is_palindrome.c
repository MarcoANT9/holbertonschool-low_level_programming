#include "holberton.h"

/**
 * str_len - Determines the length of a string.
 *
 * @s: String to determine the length.
 *
 * Description - This is an intermediate function to the is_palindrome,
 *               which is used to determine the length of the input string.
 *
 * Return: The length of the string (i).
 */

int str_len(char *s)
{
	if (*(s) == '\0')
	{
		return (0);
	}
	return (1 + str_len(s + 1));
}

/**
 * palindrominator - Determines if a word is a palindrome.
 *
 * @s: Strign to review.
 * @i: Index pointing at the end of the string.
 * @j: Index pointing at the begining of the string.
 *
 * Description - This is an intermediate function, it determines if the string
 *               is a palindrome or not, it compares the first and last part
 *               of the string until the indexes overlap eachother, if the
 *               value of the string in the indexes is different, the string
 *               is not a palindrome.
 *
 * Return: → 1 if the word is a palindrome.
 *         → 0 if the word is not a palindrome.
 */

int palindrominator(char *s, int i, int j)
{
	if (i > j)
	{
		if (*(s + j) == *(s + i))
		{
			palindrominator(s, i - 1, j + 1);
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/**
 * is_palindrome - Determines if a word is a palindrome.
 *
 * @s: String to determine if a word is a palindrome.
 *
 * Description - This function takes a pointer to a string and determines if
 *               the word stored is a palindrome, it has two supporting
 *               sub-functions.
 *
 * Return: The result of the "palindrominator" sub-function.
 */

int is_palindrome(char *s)
{
	int i = 0;
	int j = 0;

	i = str_len(s) - 1;
	return (palindrominator(s, i, j));
}
