#include "holberton.h"

/**
 * number_prime - Says if a number is a prime number
 *
 * @n: Input number
 * @i: Counter
 *
 *
 * Return: → if the number is not prime, returns (0)
 *         → if the number is prime, returns (1)
 */

int number_prime(int n, int i)
{
	if (i < n)
	{
		if ((n % i) == 0)
		{
			return (0);
		}
		return (number_prime(n, (i + 1)));
	}

	return (1);

}

/**
 * is_prime_number - Determines if a number is a prime number
 *
 * @n: Input number
 *
 * Return: → If the number is prime, returns (1)
 *         → If the number is not prime, returns (0)
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (number_prime(n, 2));
}
