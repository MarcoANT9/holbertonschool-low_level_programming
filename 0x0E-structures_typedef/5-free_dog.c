#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Frees the memory of all dogs :'(
 *
 * @d: Pointer to the structure to free
 *
 * Return: Nothing (void)
 *
 */

void free_dog(dog_t *d)
{

	free(d);

}
