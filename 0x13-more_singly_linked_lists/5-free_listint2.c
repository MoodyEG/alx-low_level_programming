#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: the head od list
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *dele;

	if (head)
	{
	dele = *head;
	while (dele)
	{
		temp = dele->next;
		free(dele);
		dele = temp;
	}
	*head = NULL;
	}
}

