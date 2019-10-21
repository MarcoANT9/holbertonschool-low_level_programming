#include "dog.h"
#include <stdio.h>

/**
 * init_dog - This function initializes a variable of type struct dog.
 *
 * @d: Structure to initialize
 * @name: Name of the doggo.
 * @age: Age of the doggo.
 * @owner: Name of the owner.
 *
 * Description - Initializes a structure name "dog" which contains the
 *               relevant information about a dog.
 *
 * Return: Nothing (Void)
 */
typedef struct dog dog;


void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
