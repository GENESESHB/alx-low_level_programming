#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the head node of the list.
 */
void free_listint(listint_t *head)
{
listint_t *temp_node;

while (head != NULL)
{
temp_node = head;
head = head->next;
free(temp_node);
}
}
