#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>


/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

typedef unsigned long int size_int;

/** Prints all elements of a list */
size_t print_list(const list_t *h);

/** Returns the number of elements in a linked list */
size_t list_len(const list_t *h);

/** Adds a node at the beggining of the list */
list_t *add_node(list_t **head, const char *str);

/** Adds a node at the end of a list */
list_t *add_node_end(list_t **head, const char *str);

/** Frees a list */
void free_list(list_t *head);

/** Putchar */
int _putchar(char c);



#endif
