#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Pritns a dog.
 *
 * @d: Structure with the information of the dog.
 *
 *
 * Description - This function takes the info from the structure in the
 *               argument and prints it in the standar output.
 *
 * Return: Nothing (void)
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if ((*d).owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);


}
