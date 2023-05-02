#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *has, *boud;

	has = head;
	boud = head;

	while (has != NULL && boud != NULL && boud->next != NULL)
	{
		has = has->next;
		boud = boud->next->next;

		if (has == boud)
		{
			has = head;

			while (has != boud)
			{
				has = has->next;
				boud = boud->next;
			}

			return (has);
		}
	}
	return (NULL);
}
