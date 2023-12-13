#include "search_algos.h"

/**
 *print_array_range - Prints elements of an array between two indices.
 *@array: Pointer to the array.
 *@left: The left index.
 *@right: The right index.
 */
void print_array_range(int *array, size_t left, size_t right)
{
	size_t i;
	int count = 0;

	i = left;
	while (i <= right)
	{
		if (count == 0 && i == right)
			printf("Searching in array: %d\n", array[i]);
		if (count == 0 && i != right)
			printf("Searching in array: %d, ", array[i]);
		if (count != 0 && i != right)
			printf("%d, ", array[i]);
		count++;
		i++;
	}
	if (left != right)
		printf("%d\n", array[right]);
}

/**
 *finder - Helper function for binary search.
 *@array: a pointer to the array to search in.
 *@left: left index of the search interval.
 *@right: right index of the search interval.
 *@value: value to search for.
 *Return: index of the value in the array, or -1 if not found.
 */
int finder(int *array, int left, int right, int value)
{
	int mid;

	if (left > right)
		return (-1);

	print_array_range(array, left, right);

	mid = (left + right) / 2;

	if (array[mid] == value && array[mid - 1] != value)
		return (mid);

	if (array[mid] < value)
		return (finder(array, mid + 1, right, value));

	return (finder(array, left, mid, value));
}

/**
 *advanced_binary - Searches for a value in a sorted array
 *using advanced binary search.
 *@array: a pointer to the array to search in.
 *@size: size of the array.
 *@value: value to search for.
 *Return: index of the value in the array, or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (finder(array, 0, (int)size - 1, value));
}
