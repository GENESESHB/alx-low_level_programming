#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *jdida;
	listint_t *tp = *head;

	jdida = malloc(sizeof(listint_t));
	if (!jdida)
		return (NULL);

	jdida->n = n;
	jdida->next = NULL;

	if (*head == NULL)
	{
		*head = jdida;
		return (jdida);
	}

	while (tp->next)
		tp = tp->next;

	tp->next = jdida;

	return (jdida);
}
