#include "lists.h"

/**
 * dlistint_len - returns the numbers of elements in double linked list
 *
 * @h:head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int hb;

	hb = 0;

	if (h == NULL)
		return (hb);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		hb++;
		h = h->next;
	}

	return (hb);
}
