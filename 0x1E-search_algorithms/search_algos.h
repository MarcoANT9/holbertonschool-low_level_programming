#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

/**========================================================================*/
/**-LIBRARIES--------------------------------------------------------------*/
/**========================================================================*/

#include <stdio.h>

/**========================================================================*/
/**-STRUCTURES & DEFINITIONS-----------------------------------------------*/
/**========================================================================*/

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure for Holberton project
 *              10x1E. C-Search Algorithms task 12.
 */

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 *              for Holberton project 10x1E. C-Search Algorithms task 13.
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/**========================================================================*/
/**-FUNCTIONS--------------------------------------------------------------*/
/**========================================================================*/

/** Task 0. Linear search */
int linear_search(int *array, size_t size, int value);

/** Task 1. Binary search */
int binary_search(int *array, size_t size, int value);

/** Task 7. Jump search */
int jump_search(int *array, size_t size, int value);

/** Task 9. Interpolation search */
int interpolation_search(int *array, size_t size, int value);

/** Task  10. Exponential search */
int exponential_search(int *array, size_t size, int value);

/** Task 11. Advanced binary search */
int advanced_binary(int *array, size_t size, int value);

/** Task 12. Jump search in a singly linked list */
listint_t *jump_list(listint_t *list, size_t size, int value);

/** Task 13. Linear search in a skip list */
skiplist_t *linear_skip(skiplist_t *list, int value);

/**========================================================================*/
/**-SPECIAL NOTES & OTHERS-------------------------------------------------*/
/**========================================================================*/

/**
 * Task 2 → 6, 8, 14 and 15 are text files showing the Big O notations of
 * different searching methods, including the tasks in this project.
 */

/**========================================================================*/
/**-END--------------------------------------------------------------------*/
/**========================================================================*/

#endif
