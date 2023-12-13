#include "search_algos.h"

/**
 *linear_skip - searches for a value in a sorted skip list of integers.
 *@list: a pointer to the head of the skip list to search in.
 *@value: the value to search for.
 *Return: a pointer to the first node where the value is located
 *otherwise NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr, *prev;

	curr = prev = list;

	if (!list)
		return (NULL);

	while (curr->next && curr->n < value)
	{
		prev = curr;

		if (curr->express)
		{
			curr = curr->express;
			printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
		}
		else
		{
			while (curr->next)
				curr = curr->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, curr->index);

	while (prev->index < curr->index && prev->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}

	printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);

	return (prev->n == value ? prev : NULL);
}
