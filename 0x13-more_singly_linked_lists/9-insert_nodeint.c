#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer to the head of the list.
 * @idx: index of the list where the new node should be added.
 * @n: value of the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *prev_node = NULL, *cur_node = *head;
unsigned int i = 0;

if (!head)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = n;

while (cur_node && i < idx)
{
prev_node = cur_node;
cur_node = cur_node->next;
i++;
}

if (i < idx)
{
free(new_node);
return (NULL);
}

if (prev_node)
prev_node->next = new_node;
else
*head = new_node;

new_node->next = cur_node;

return (new_node);
}
