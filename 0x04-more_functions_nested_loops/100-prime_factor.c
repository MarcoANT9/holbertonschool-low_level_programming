#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of a number
 *        in this case it will be 612852475143
 *
 * Return: Always 0 (success)
 *
 *
 *
 */

int main(void)
{

	long int i;
	long int num = 612852475143;
	long int prime = 1;


	i = 1;

	while (i < num)
	{
		if (num % i == 0)
		{
			prime = i;
			printf("%ld ", prime);

		}
		i += 1;
	}

	if (prime == 1)
	{
		prime = num;
	}

	printf("%ld\n", prime);


	return (0);

}
