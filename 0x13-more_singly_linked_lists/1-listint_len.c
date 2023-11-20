#include "lists.h"

/**
 * print_listint - frees a list_t list.
 * @h: the head od list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *temp;
	size_t i = 0;

	while (h)
	{
		temp = h->next;
		/*printf("%d\n", h->n);*/
		h = temp;
		i++;
	}

	return (i);
}

