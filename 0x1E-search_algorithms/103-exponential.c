#include "search_algos.h"

/**
 *print_array - Prints elements of an array between two indices.
 *@array: a pointer to the array.
 *@left: the left index.
 *@right: the right index.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	for (i = left; i <= right; i++)
	{
		if (i == left)
		{
			if (left != right)
				printf("Searching in array: %d, ", array[i]);
			else
				printf("Searching in array: %d\n", array[i]);
		}

		if (i != left && i != right)
			printf("%d, ", array[i]);

		if (i == right && right != left)
			printf("%d\n", array[right]);
	}
}

/**
 *exponential_search - Searches for a value in an array using
 *"exponential search algorithm".
 *@array: a pointer to the sorted array to search in.
 *@size: the number of elements in the array.
 *@value: the value to search for.
 *Return: the index where the value is found, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, left, right, mid;

	if (!array)
		return (-1);

	if (array[i] == value)
		return (i);

	i = 1;

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}

	left = i / 2;
	right = (i < size) ? i : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	while (left <= right)
	{
		print_array(array, left, right);

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
