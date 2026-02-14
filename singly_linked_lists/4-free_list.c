#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
    list_t *temp;

    while (head)
    {
        temp = head->next;
        free(head->str); /* free the duplicated string */
        free(head);      /* free the node itself */
        head = temp;
    }
}
