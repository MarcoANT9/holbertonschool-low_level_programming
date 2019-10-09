#include "holberton.h"

/**
 * sqrt_recursive - Returns the square root of a number
 *
 * @n: Number to calculate the square root
 * @i: Counter
 *
 *
 * Return: → The square root of the number (int) if exist.
 *         → -1 if the square root of the number does not exist.
 */

int sqrt_recursive(int n, int i)
{
	if (n > (i * i))
	{
		return (sqrt_recursive(n, (i + 1)));
	}
	else if (n == (i * i))
	{
		return (i);
	}
	return (-1);

}

/**
 * _sqrt_recursion - Main function used to calculate the sqrt of a number.
 *
 * @n: Number to find the square root
 *
 *
 * Return: → -1 if the number is not positive.
 *         → 1 if the number is 1.
 *         → The square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (sqrt_recursive(n, 2));

}
