#include "holberton.h"

/**
 * factorial - Calculates the factorial of a number
 *
 * @n: Number to calculate the factorial
 *
 * Description - Function that calculates the factorial of a number different
 *               from 1, if the number is less than 0, the function returns -1.
 *
 * Return: → If the number is less than cero: Error (-1).
 *         → If the number is greater than cero: The factorial of the number.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
