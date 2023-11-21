#include "lists.h"

/**
 * dreverse_listint - reverses a listint_t linked list.
 * @head: the head od list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	if (!*head || !(*head)->next)
		return (*head);
	while (head)
	{/*used AI help for that*/
		next = *(head)->next;
		*(head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;

	return (*head);
}
