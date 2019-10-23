#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H











/** Prints a name */
void print_name(char *name, void (*f)(char *));

/** Executes a function given as a parameter on each element of the array */
void array_iterator(int *array, size_t size, void (*action)(int));

/** Searches for an integer */
int int_index(int *array, int size, int (*cmp)(int));

/** Selects correct function to perform the operation asked by the user */
int (*get_op_func(char *s))(int, int);

/** Putchar */
int _putchar (char *s);


#endif
