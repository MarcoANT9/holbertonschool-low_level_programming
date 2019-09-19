#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - gives the las digit of a random value
 *
 * description - Gives the var n a random value, later it gives the last
 * digit, finally determines if the value is greather than 5, equal to 0
 * or between 0 and 6.
 *
 * Return: Always succesfull (0) / prints the sign of the number n.
 *
 */

int main(void)
{

	int n;
	int last;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	last = n % 10;

	if (last > 5)
	{

printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}

	else if (last == 0)
	{

printf("Last digit of %d is %d and is 0\n", n, last);

	}

	else
	{

printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);

	}

	return (0);


}
