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
	long int high;
	long int temp;

	i = 2;
	high = 0;

 	while (num != 1)
	{
		if (num % i == 0)
		{
			num = num / i;
			temp = i;

			if (temp > high)
			{
				high = temp;
			}

			i = 2;
		}

		else
		{
			i = i + 1;
		}
	}
	printf("%lu\n", high);


	return (0);

}
