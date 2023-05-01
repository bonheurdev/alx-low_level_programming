#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list.
* @head: pointer to the head of the list.
* @index: index of the node to return, starting at 0.
*
* Return: the nth node of the list or NULL if it doesn't exist.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; head != NULL && i < index; i++)
{
head = head->next;
}

return ((head == NULL || i != index) ? NULL : head);
}
