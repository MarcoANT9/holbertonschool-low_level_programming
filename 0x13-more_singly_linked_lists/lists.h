#ifndef LISTS_H
#define LISTS_H

/**========================================================================*/
/**-LIBRARIES--------------------------------------------------------------*/
/**========================================================================*/

#include <stdlib.h>

/**========================================================================*/
/**-STRUCTURES-&-DEFINITIONS-----------------------------------------------*/
/**========================================================================*/

/**
 * struct listint_s - singly linked list.
 * @n: integer.
 * @next: points to the next node.
 *
 * Description: singly linked list node structure.
 *              for Holberton project
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;

} listint_t;


typedef unsigned long int size_t;

/**========================================================================*/
/**-FUNCTIONS--------------------------------------------------------------*/
/**========================================================================*/

/** 0. Prints all elements of a linked list */
size_t print_listint(const listint_t *h);

/** 1. Return the number of elements in a linked list */
size_t listint_len(const listint_t *h);

/** 2. Adds a new node at the beginning of a list */
listint_t *add_nodeint(listint_t **head, const int n);

/** 3. Adds a new node at the end of a list */
listint_t *add_nodeint_end(listint_t **head, const int n);

/** 4. Frees a linked list */
void free_listint(listint_t *head);

/** 5. Frees a linked list (sets head to NULL) */
void free_listint2(listint_t **head);

/** 6. Deletes the head node and returns the head node's data */
int pop_listint(listint_t **head);

/** 7. Returns the nth node of a linked list */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/** 8. Returns the sum of all the data of a linked list */
int sum_listint(listint_t *head);

/** 9. Inserts a new node in a given position */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/** 10. Deletes a node at index position */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/** α. Putchar */
int _putchar (char c);

#endif
