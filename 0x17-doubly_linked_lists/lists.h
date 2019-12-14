#ifndef LISTS_H
#define LISTS_H

/**========================================================================*/
/**-LIBRARIES--------------------------------------------------------------*/
/**========================================================================*/

#include <stdlib.h>
#include <stdio.h>

/**========================================================================*/
/**-STRUCTURES-& DEFINITIONS-----------------------------------------------*/
/**========================================================================*/

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;

} dlistint_t;

/**========================================================================*/
/**-FUNCTIONS--------------------------------------------------------------*/
/**========================================================================*/

/** 0.Print List */
size_t print_dlistint(const dlistint_t *h);

/** 1.List Length */
size_t dlistint_len(const dlistint_t *h);

/** 2.Add Node (Beginning) */
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/** 3.Add Node (End) */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/** 4.Free List */
void free_dlistint(dlistint_t *head);

/** 5.Get Node at Index */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/** 6.Sum List */
int sum_dlistint(dlistint_t *head);

/** 7.Insert at Index */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/** 8.Delete at Index */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);


#endif
