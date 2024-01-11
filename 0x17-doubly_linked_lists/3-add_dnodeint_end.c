#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: our list
 * @n: content of the node to be added
 * Return:  the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;
	if (temp)
	{
		while ((temp)->next)
			temp = temp->next;
		new->prev = temp;
		temp->next = new;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}

	return (new);
}
