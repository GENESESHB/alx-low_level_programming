![binary_searsh](https://th.bing.com/th/id/OIP.HXvzEh5q2pa_60GjTimrfAHaEJ?w=2000&h=1121&rs=1&pid=ImgDetMain)
# 0x1E-search_algorithms

# tasks 🦾

# 0️⃣
``
Certainly! This code defines a function called `linear_search` that performs a linear search on an array of integers to find a specific value. Here's an explanation of the code:
``

```c
/**
 * linear_search - a function that searches for a value in an array
 * of integers using the Linear search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: the size of the array.
 * @value: the value to search for.
 * Return: the first index where value is located otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
    int i;

    // Check if the array is NULL (empty array)
    if (!array)
        return (-1);

    // Iterate through the array elements
    for (i = 0; i < (int)size; i++)
    {
        // Print the current element being checked
        printf("Value checked array[%d] = [%d]\n", i, array[i]);

        // Check if the current element is equal to the desired value
        if (array[i] == value)
            return (i); // Return the index where the value is found
    }

    // If the value is not found in the array, return -1
    return (-1);
}
```
``

Explanation:

1. **Function Header**: The function `linear_search` is defined with three parameters - a pointer to an array of integers (`array`), the size of the array (`size`), and the value to search for (`value`). The function returns an integer representing the index where the value is found, or -1 if the value is not present in the array.

2. **NULL Check**: The function begins by checking if the input array is `NULL`. If the array is `NULL`, it means there is nothing to search, and the function returns -1.

3. **Linear Search**: The function then uses a `for` loop to iterate through each element of the array. Inside the loop, it prints the value of the current element being checked using `printf`.

4. **Comparison**: For each element, it checks if the element is equal to the specified `value`. If a match is found, the function returns the index (`i`) where the value is located.

5. **Return -1**: If the loop completes without finding the value, the function returns -1, indicating that the value is not present in the array.

The `printf` statement inside the loop is used for debugging purposes to print the elements being checked during the search.
``

# 1️⃣
``
This code defines a function called `binary_search` that performs binary search on a sorted array of integers to find a specific value. Here's an explanation of the code:
``

```c
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search.
 * @array: a pointer to the array to search in.
 * @size: the size of the array.
 * @value: the value to search for.
 * Return: the index of the value in the array otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left, right, i, mid;

    // Check if the array is NULL (empty array)
    if (!array)
        return (-1);

    left = 0;           // Set the left boundary of the search space
    right = size - 1;   // Set the right boundary of the search space

    // Perform binary search
    while (left <= right)
    {
        // Print the current search range
        printf("Searching in array: ");
        for (i = left; i < right; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        mid = left + (right - left) / 2;  // Calculate the middle index

        // Check if the middle element is the desired value
        if (array[mid] == value)
            return (mid);

        // If the value is greater, ignore the left half
        if (array[mid] < value)
            left = mid + 1;
        else  // If the value is smaller, ignore the right half
            right = mid - 1;
    }

    // If the value is not found in the array, return -1
    return (-1);
}
```
``
Explanation:

1. **Function Header**: The function `binary_search` is defined with three parameters - a pointer to a sorted array of integers (`array`), the size of the array (`size`), and the value to search for (`value`). The function returns an integer representing the index where the value is found, or -1 if the value is not present in the array.

2. **NULL Check**: The function begins by checking if the input array is `NULL`. If the array is `NULL`, it means there is nothing to search, and the function returns -1.

3. **Binary Search**: The function then uses a `while` loop to perform binary search on the array. Inside the loop, it prints the current search range using `printf`.

4. **Middle Index Calculation**: The middle index (`mid`) is calculated as the average of the left and right boundaries to determine the middle element of the current search range.

5. **Comparison and Adjustment**: It compares the middle element to the desired value. If they match, it returns the index. If the middle element is less than the value, it updates the left boundary to narrow down the search to the right half. If the middle element is greater than the value, it updates the right boundary to narrow down the search to the left half.

6. **Return -1**: If the loop completes without finding the value, the function returns -1, indicating that the value is not present in the array.

The `printf` statement inside the loop is used for debugging purposes to print the elements being considered during each iteration of the binary search.
`

### time & space of Complexity :Definitiion
Sure, let me provide definitions for time complexity and space complexity along with examples:

### Time Complexity:

**Definition:**
Time complexity is a measure of the amount of time an algorithm takes to complete as a function of the size of the input. It represents the relationship between the input size and the number of basic operations the algorithm performs.

**Example:**
Consider a simple linear search algorithm that looks for a specific element in an array. If the size of the array is \(n\), the time complexity of this algorithm is \(O(n)\), meaning the time it takes to run increases linearly with the size of the input array.

```c
int linear_search(int *array, size_t size, int value) {
    for (size_t i = 0; i < size; i++) {
        if (array[i] == value) {
            return i;
        }
    }
    return -1;
}
```

### Space Complexity:

**Definition:**
Space complexity is a measure of the amount of memory an algorithm uses as a function of the size of the input. It represents the relationship between the input size and the amount of additional memory required by the algorithm.

**Example:**
Consider an algorithm that creates a 2D array to represent a matrix. If the size of the matrix is \(n \times m\), and the algorithm allocates memory for the entire matrix, the space complexity is \(O(n \times m)\), indicating that the space usage increases with the product of the number of rows and columns.

```c
int **allocate_matrix(int n, int m) {
    int **matrix = malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        matrix[i] = malloc(sizeof(int) * m);
    }
    return matrix;
}
```

In these examples, the big O notation is used to describe the growth rate of time and space complexity in terms of the input size.`
