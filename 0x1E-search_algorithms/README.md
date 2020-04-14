# 0x1E. C-SEARCH ALGORITHMS

This project will be about searching algorithms.

## TASKS:

#### Task 0:
A function that searches for a value in an array of integers using the Linear search algorithm.

    Prototype : int linear_search(int *array, size_t size, int value)
    Where array is a pointer to the first element of the array to search in
    size is the number of elements in array
    And value is the value to search for
    The function returns the first index where value is located
    If value is not present in array or if array is NULL, the function returns -1
    Every time a value is compared in the array to the value that is been searched, the value in the array is printed

#### Task 1:
A function that searches for a value in a sorted array of integers using the Binary search algorithm.

    Prototype : int binary_search(int *array, size_t size, int value)
    Where array is a pointer to the first element of the array to search in
    size is the number of elements in array
    And value is the value to search for
    The function returns the index where value is located
    It can be assumed that the array will be sorted in ascending order
    It can be assumed that the value won’t appear more than once in array
    If value is not present in array or if array is NULL, the function returns -1
    The function prints the array being searched every time it changes.

#### Task 2:
What is the time complexity (worst case) of a linear search in an array of size n?

#### Task 3:
What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

#### Task 4:
What is the time complexity (worst case) of a binary search in an array of size n?

#### Task 5:
What is the space complexity (worst case) of a binary search in an array of size n?

#### Task 6:
What is the space complexity of this function / algorithm?

int **allocate_map(int n, int m)

{

     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);

}

#### Task 7. Jump search
A function that searches for a value in a sorted array of integers using the Jump search algorithm

    Prototype : int jump_search(int *array, size_t size, int value);
    Where array is a pointer to the first element of the array to search in
    size is the number of elements in array
    And value is the value to search for
    The function returns the first index where value is located
    It can be assumed that the array will be sorted in ascending order
    If value is not present in array or if array is NULL, the function returns -1
    The square root of the size of the array is used as the jump step.
    The sqrt() function included in <math.h> is used for the previous token.
    Every time there is a comparation with a value in the array to the value it's been searched, its value is printed.

#### Task 8. Big O #5
What is the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?

#### Task 9. Interpolation search
A function that searches for a value in a sorted array of integers using the Interpolation search algorithm

    Prototype : int interpolation_search(int *array, size_t size, int value);
    Where array is a pointer to the first element of the array to search in
    size is the number of elements in array
    And value is the value to search for
    The function returns the first index where value is located
    It can be assumed that the array will be sorted in ascending order
    If value is not present in array or if array is NULL, the function returns -1
    To determine the probe position, this is used : size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low])) <With modified variable names>
    Every time a value is compared in the array to the value it's been searched, its value is printed.

#### Task 10. Exponential search
A function that searches for a value in a sorted array of integers using the Exponential search algorithm

    Prototype : int exponential_search(int *array, size_t size, int value);
    Where array is a pointer to the first element of the array to search in
    size is the number of elements in array
    And value is the value to search for
    The function returns the first index where value is located
    It can be assumed that the array will be sorted in ascending order
    If value is not present in array or if array is NULL, the function returns -1
    The powers of 2 will be used as exponential ranges to search in your array
    Every time a comparation is made, its value will be printed
    When the good range is found, a binary search will be implemented:
        Every time the array is split, the new array will be printed

#### Task 11. Advanced binary search
You may have noticed that the basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array). This function solves this problem.

    Prototype : int advanced_binary(int *array, size_t size, int value);
    Where array is a pointer to the first element of the array to search in
    size is the number of elements in array
    And value is the value to search for
    The function returns the index where value is located
    It can be assumed that array will be sorted in ascending order
    If value is not present in array or if array is NULL, the function returns -1
    Every time the array is split, the new array (or subarray) the function it's searching in is printed
    Recursion is implemented. Only one loop (while, for, do while, etc.) is used in order to print the array

#### Task 12. Jump search in a singly linked list
A function that searches for a value in a sorted list of integers using the Jump search algorithm.

    Prototype : listint_t *jump_list(listint_t *list, size_t size, int value);
    Where list is a pointer to the head of the list to search in
    size is the number of nodes in list
    And value is the value to search for
    The function returns a pointer to the first node where value is located
    It can be assumes that list will be sorted in ascending order
    If value is not present in head or if head is NULL, the function returns NULL
    The square root of the size of the list is used as the jump step.
    The sqrt() function included in <math.h> is used.
    Every time a comparation is made, it will be printed on screen

#### Task 13. Linear search in a skip list
A function that searches for a value in a sorted skip list of integers.

    Prototype : skiplist_t *linear_skip(skiplist_t *list, int value);
    Where list is a pointer to the head of the skip list to search in
    A node of the express lane is placed every index which is a multiple of the square root of the size of the list (see example below)
    And value is the value to search for
    It can be assumed that list will be sorted in ascending order
    The function returns a pointer on the first node where value is located
    If value is not present in list or if head is NULL, the function returns NULL
    Every time a comparation is made, it's printed on screen

#### Task 14. Big O #6
What is the time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)?

#### Task 15. Big O #7
What is the time complexity (average case) of a jump search in a skip list of size n, with an express lane using step = sqrt(n)?