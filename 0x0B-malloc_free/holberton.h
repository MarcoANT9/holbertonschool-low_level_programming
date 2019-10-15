#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

int _putchar(char c); /**Good ol' putchar*/

char *create_array(unsigned int size, char c); /**Creates an array of chars*/

char *_strdup(char *str); /**Returns a pointer to a new space in memory*/

char *str_concat(char *s1, char *s2); /**Concatenates two strings*/

int **alloc_grid(int width, int height); /**Returns pointer to 2D int array*/

void free_grid(int **grid, int height); /**Frees array created by alloc_grid*/

char *argstostr(int ac, char **av); /**Concatenates all program's arguments*/

char **strtow(char *str); /**Splits string in two*/


#endif /*HOLBERTON_H*/
