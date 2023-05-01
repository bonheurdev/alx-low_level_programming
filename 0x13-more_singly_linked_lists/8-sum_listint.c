#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n)
*of a listint_t linked list
* @head: pointer to the head node of the list
*
* Return: the sum of all the data in the list, or 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
int sum = 0;
do {
sum += head->n;
head = head->next;
} while (head != NULL);

return (sum);
}
