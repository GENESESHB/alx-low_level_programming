#include "search_algos.h"
/**
 *binary_search -searchs for a value in a sorted array using binary search
 *@array: a pointer to the array to search in.
 *@size: the size of the array.
 *@value: the value to search for .
 *Return: the index of the value in the array otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, i, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
