#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes the node at index  of a linked list.
 * @head: our list
 * @idx: where to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *del;
	unsigned int i = 1;

	if ((*head) == NULL)
		return (-1);
	temp = *head;
	while (i < index)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
		i++;
	}
	del = temp->next;
	if (index == 0)
	{
		free(temp);
		if (del != NULL)
			del->prev = NULL;
		*head = del;
	}
	else
	{
		temp->next = del->next;
		if ((del->next) != NULL)
			(del->next)->prev = temp;
		free(del);
	}

	return (1);
}
