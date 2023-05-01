#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer to a pointer to the head node of the list.
 **/
void free_listint2(listint_t **head)
{
listint_t *tmp;

if (head == NULL)
return;
while (*head != NULL)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}

*head = NULL;
}
