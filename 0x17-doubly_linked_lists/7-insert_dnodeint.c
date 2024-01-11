#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @head: our list
 * @idx: where to be inserted
 * @n: what is inserted
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *temp;
	unsigned int i = 0, endflag = 0;

	if ((*h) == NULL && idx != 0)
		return (NULL);
	temp = *h;
	while (i < idx)
	{
		temp = temp->next;
		i++;
		if (i == idx && temp == NULL)
		{
			new = add_dnodeint_end(h, n);
			return (new);
		}
		else if (temp == NULL)
			return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
	}
	else if (endflag)
	{
		new->next = NULL;
		new->prev = temp;
		temp->next = new;
	}
	else
	{
		new->next = temp;
		(temp->prev)->next = new;
		temp->prev = new;
		new->prev = temp->prev;
	}
	return (new);
}
