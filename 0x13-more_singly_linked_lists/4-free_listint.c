#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: the head od list
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

