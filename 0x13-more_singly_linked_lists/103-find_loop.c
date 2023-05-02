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
    listint_t *hassan, *boudraa;

    hassan = head;
    boudraa = head;

    while (hassan != NULL && boudraa != NULL && boudraa->next != NULL)
    {
        hassan = hassan->next;
        boudraa = boudraa->next->next;

        if (hassan == boudraa)
        {
            /* A loop is detected */

            /* Move hassan to head */
            hassan = head;

            /* Iterate over linked list */
            while (hassan != boudraa)
            {
                hassan = hassan->next;
                boudraa = boudraa->next;
            }

            /* They meet at the start of the loop */
            return hassan;
        }
    }

    /* No loop */
    return NULL;
}
