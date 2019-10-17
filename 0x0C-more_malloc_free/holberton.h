#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>


int _putchar(char c);

void *malloc_checked(unsigned int b); /** Allocates memory with malloc */

char *string_nconcat(char *s1, char *s2, unsigned int n); /** Concatenates
                                                             strings */

void *_calloc(unsigned int nmemb, unsigned int size); /** Allocates memory
							  for an array */

int *array_range(int min, int max); /** Creates an array of integers */

#endif /*HOLBERTON_H*/
