#include <stdio.h>

/**
 * main - Prints all type sizes
 *
 * Description - This program will print the size of various types on this
 * computer.
 *
 *
 * Return: Always 0 (Success)
 *
 *
 *
 */


int main(void)
{

	char cht; /* Character */
	int itg;  /* Integer */
	int litg;  /* Long integer */
	int llitg; /* Long Long integer */
	float flt; /* Float */


	printf("Size of a char: %d byte(s)\n", sizeof(cht));

	printf("Size of an int: %d byre(s)\n", sizeof(itg));

	printf("Size of a long int: %d byte(s)\n", sizeof(litg));

	printf("Size of a long long int: %d byte(s)\n", sizeof(llitg));

	printf("Size of a float: %d byte(s)\n", sizeof(flt));


	return (0);

}
