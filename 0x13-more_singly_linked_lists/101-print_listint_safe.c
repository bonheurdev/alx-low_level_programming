#include "lists.h"


/**
* free_the_listp - frees a linked list
* @head: head of a list.
*
*/
void free_the_listp(listp_t **head)
{
listp_t *temp; /* Temporary node pointer */
listp_t *current; /* Current node pointer */

if (head != NULL)
{
current = *head;
while ((temp = current) != NULL)
{
current = current->next;
free(temp); /* Free memory for current node */
}
*head = NULL;
}
}

/**
* print_listint_safe - prints a listint_t linked list
* @head: pointer to the head of the list
*
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
listp_t *list_ptr;
listp_t *new_node;
listp_t *check_node;
/* Initialize list pointer to NULL */
list_ptr = NULL;
while (head != NULL)
{
/* Allocate memory for new node */
new_node = malloc(sizeof(listp_t));

if (new_node == NULL)
{
free_the_listp(&list_ptr);
exit(98);
}
/* Store the address of the current node in new node */
new_node->p = (void *)head;
/* Set next pointer of new node to current list pointer */
new_node->next = list_ptr;
/* Update list pointer to point to the new node */
list_ptr = new_node;
/* Initialize check node pointer to the beginning of the list */
check_node = list_ptr;
while (check_node->next != NULL)
{
check_node = check_node->next;
if (head == check_node->p)
{
printf("-> [%p] %d\n", (void *)head, head->n);
free_the_listp(&list_ptr);
return (count);
}
}
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
count++;
}
free_the_listp(&list_ptr);
return (count); /* Return the number of nodes in the list */
}
