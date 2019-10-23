#include "function_pointers.h"

/**
 * op_add - Adds two numbers.
 *
 * @a: First number to sum.
 * @b: Second number tu sum.
 *
 * Return: Addition of a to b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substracts a number from another.
 *
 * @a: Minuend.
 * @b: Subthrahend.
 *
 * Return: Difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplies two numbers.
 *
 * @a: First factor.
 * @b: Second factor.
 *
 * Return: Product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides a by b to get quotient.
 *
 * @a: Divident.
 * @b: Divisor.
 *
 * Return: Quotient between a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Divides a by b to get remainder.
 *
 * @a: Divident.
 * @b: Divisor.
 *
 * Return: Remainder between a and b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
