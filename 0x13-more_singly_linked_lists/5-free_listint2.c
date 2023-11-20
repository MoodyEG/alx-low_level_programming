#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: the head od list
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *dele;

	dele = *head;
	while (dele)
	{
		temp = dele->next;
		free(dele);
		dele = temp;
	}
	*head = NULL;
}

