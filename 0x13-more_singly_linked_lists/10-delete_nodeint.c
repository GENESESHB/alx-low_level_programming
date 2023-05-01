#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t list.
 * @head: Double pointer to the head node of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *cur, *pre;
unsigned int i;

if (*head == NULL)
return (-1);

if (index == 0)
{
cur = *head;
*head = cur->next;
free(cur);
return (1);
}

pre = *head;
cur = pre->next;
for (i = 1; cur != NULL && i <= index; i++)
{
if (i == index)
{
pre->next = cur->next;
free(cur);
return (1);
}
pre = cur;
cur = cur->next;
}

return (-1);
}
