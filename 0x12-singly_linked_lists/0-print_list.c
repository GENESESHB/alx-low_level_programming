#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t lists
 * @h: Pointer to the head of the list in the lists
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t coun = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		coun++;
	}

	return (coun);
}
