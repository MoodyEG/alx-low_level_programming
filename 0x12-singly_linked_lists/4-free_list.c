#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: the head od list
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		free(head->str);
		head = temp;
	}
}

