#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: the head od list
 * Return:  the head node’s data or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *dele;
	int i;

	if (!head)
		return (0);
	dele = *head;
	temp = dele->next;
	i = dele->n;
	free(dele);
	*head = temp;

	return (i);
}

