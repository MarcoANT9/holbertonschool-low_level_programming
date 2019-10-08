#include "holberton.h"

/**
 * set_string - Sets the value of a pointer to a char
 *
 * @s: Pointer to a pointer to be changed
 * @to: Pointer to destiny
 *
 * Description - Changes the value of a pointer to that of a char
 *
 * Return: Nothing (void)
 *
 */


void set_string(char **s, char *to)
{
	*(s) = to;

}
