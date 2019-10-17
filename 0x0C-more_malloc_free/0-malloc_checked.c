#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory with malloc.
 *
 * @b: Size of the allocated memory space.
 *
 *
 * Description - This function takes the size of memory needed for allocation
 *               and returns a pointer to the allocated memory, if malloc
 *               fails, the function cause normal process termination with
 *               status value of 98.
 *
 * Return: → Pointer to allocated space (if successfull).
 *         → Normal process termination with value 98 (if failure).
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);

	if (ar == NULL)
	{
		exit(98);
	}
	return (ar);

}
