#include "lists.h"

/**
 *
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t bb = 0;
	int dm;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		bb = *h - (*h)->next;
		if (dm > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			bb++;
		}
		else
		{
			free(*h);
			*h = NULL;
			bb++;
			break;
		}
	}

	*h = NULL;

	return (bb);
}
