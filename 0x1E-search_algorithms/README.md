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
