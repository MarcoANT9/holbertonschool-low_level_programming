#include "holberton.h"

/**
 * _pow_recursion - Prints the value of x to the y power
 *
 * @x: Base of the number to power.
 * @y: Value of the power to aplly to the base.
 *
 * Description - To get the power of a number, the base has to be multiplied
 *               by itself the same number of times as the value of the power.
 *
 * Return: The value of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
