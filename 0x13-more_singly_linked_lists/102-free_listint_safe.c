#include "lists.h"
#include <stdlib.h>

/**
* free_listint_safe - Frees a listint_t linked list.
* @h: A double pointer to the head of the list
*
* Return: The size of the list that was freed
*/
size_t free_listint_safe(listint_t **h)
{
size_t size = 0;
listint_t *current, *next;

if (h == NULL || *h == NULL)
return (size);

current = *h;
while (current != NULL)
{
size++;
next = current->next;

/* Detect loop in the list */
if (current < current->next)
{
free(current);
current = NULL;
break;
}

free(current);
current = next;
}

*h = NULL; /* Set head to NULL */

return (size);
}
