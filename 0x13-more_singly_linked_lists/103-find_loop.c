#include <stdlib.h>
#include "lists.h"

/**
* find_listint_loop - finds the loop in a linked list
* @head: pointer to the head of the linked list
*
* Return: the address of the node where the loop starts, or NULL if no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;

if (head == NULL || head->next == NULL)
return (NULL);

/* Initialize slow and fast pointers */
slow = head->next; /* Slow pointer moves one step at a time */
fast = head->next->next; /* Fast pointer moves two steps at a time */

/* Iterate through the linked list with slow and fast pointers */
while (fast != NULL && fast->next != NULL)
{
if (slow == fast)
{
/* If slow and fast pointers meet, a loop is found */

/* Reset slow pointer to head of the list */
slow = head;

/* Move slow and fast pointers one step at a time until they meet */
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}

/* Return the address of the node where the loop starts */
return (slow);
}

/* Move slow pointer one step and fast pointer two steps */
slow = slow->next;
fast = fast->next->next;
}

/* If no loop is found, return NULL */
return (NULL);
}
