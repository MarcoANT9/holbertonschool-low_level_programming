#include "holberton.h"
#include <stdio.h>




int main(void)
{


	int i;
	long int base = 1;
	int pow;
	int exp = 5;

	/** Base = 10; Exp = 5 */

 	for (i = 1; i <= 5; i++)
	{

		base = base * 10;

	}

	printf("%ld\n", base);

	return (0);

}
