#include "lists.h"


/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *pre = NULL, *next = NULL;
while (*head)
{
next = (*head)->next;
(*head)->next = pre;
pre = *head;
*head = next;
}

*head = pre;
return (*head);
}
