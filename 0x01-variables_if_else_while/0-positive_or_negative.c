#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - gives n a random value
 *
 * Description - Gives the var n a random value, then it determines if the
 * value is greather, lower or equal to 0.
 *
 * Return: Always succesfull (0) / prints the sign of the number n.
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
