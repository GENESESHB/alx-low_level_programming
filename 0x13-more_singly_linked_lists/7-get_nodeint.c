#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head node of the list
 * @index: index of the node to be returned
 *
 * Return: pointer to the nth node, or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node = head;
unsigned int i = 0;

while (node)
{
if (i == index)
return (node);
i++;
node = node->next;
}
return (NULL);
}
