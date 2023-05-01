#include "lists.h"
#include <stdlib.h>


/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the first node of the list.
 *
 * Return: The head node's data (n), or 0 if the list is empty.
 **/
int pop_listint(listint_t **head)
{
int d;
listint_t *tmp;

if (*head == NULL)
return (0);

tmp = *head;
d = tmp->n;
*head = (*head)->next;
free(tmp);

return (d);
}
