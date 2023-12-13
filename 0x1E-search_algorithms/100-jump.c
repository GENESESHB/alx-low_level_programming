#include "search_algos.h"

/**
 * jump_search - searches for a value in an array using Jump search.
 *
 * @array: pointer to the first element of the array.
 * @size: number of elements in the array.
 * @value: value to search for.
 *
 * Return: index where the value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
	int left, right, jump, step;

	if (!array)
		return (-1);

	jump = sqrt(size);
	left = 0;
	right = (int)size - 1;
	step = jump;

	while (left <= right && array[step] < value)
	{
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		left = step;
		step += jump;
		if (step > right)
			break;
	}
	printf("Value checked array[%d] = [%d]\n", left, array[left]);
	printf("Value found between indexes [%d] and [%d]\n", left, step);
	while (left <= right && array[left] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		if (array[left] == value)
			return (left);
		left++;
	}
	return (-1);
}
