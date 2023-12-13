#include "search_algos.h"
/**
 *jump_list - searches for a value in a sorted linked list of integers
 *using the Jump search algorithm
 *
 *@list: a pointer to the head of the linked list.
 *@size: size of the linked list.
 *@value: the value to search for.
 *Return:  a pointer to the first node where value is located otherwise Null.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{

	size_t step_size = sqrt(size);
	listint_t *prev = list;
	listint_t *jump = prev;
	size_t step = 0;


	if (!list)
		return (NULL);

	while (jump->index < size - 1 && jump->n < value)
	{
		prev = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index  == size - 1)
				break;
		}
		printf("Value checked at index [%lu] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, jump->index);

	while (prev->index < jump->index && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}

	printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

	return (prev->n == value ? prev : NULL);
}
