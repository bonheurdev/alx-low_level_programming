#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to pointer to the first node of the list
* @idx: index of the list where the new node should be added, starting from 0
* @n: data to be stored in the new node
*
* Return: the address of the new node or NULL if failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current_node;
unsigned int i;

if (!head)
return (NULL);

if (idx == 0 || !*head)
{
new_node = malloc(sizeof(*new_node));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}

current_node = *head;
for (i = 0; current_node && i < idx - 1; i++)
current_node = current_node->next;

if (!current_node)
return (NULL);

new_node = malloc(sizeof(*new_node));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = current_node->next;
current_node->next = new_node;

return (new_node);
}
