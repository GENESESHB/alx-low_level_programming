#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nodeindex of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the nodeindex
 * Return: nodeindex
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int indx)
{
	unsigned int b;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	b = 0;

	while (head != NULL)
	{
		if (b == index)
			break;
		head = head->next;
		b++;
	}

	return (head);
}
