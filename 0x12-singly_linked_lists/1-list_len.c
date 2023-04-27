#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* list_len - Returns the number of elements in a linked list_t list.
*
* @h: Pointer to the head node of the list.
*
* Return: The number of nodes in the list.
*/
size_t list_len(const list_t *h)
{
size_t count = 0; /* Initialize the count to 0 */

/* Traverse the list and count the nodes */
while (h != NULL)
{
count++; /* Increment count for each node */
h = h->next; /* Move to the next node */
}

return (count); /* Return the final count */
}
