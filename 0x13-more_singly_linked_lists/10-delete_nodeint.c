#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: the head od list
 * @index: is the index of the list where the node should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *del;
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
		*head = del;
	}
	else
	{
		temp->next = del->next;
		free(del);
	}

	return (1);
}
