#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the head od list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		length++;
	}

	return (length);
}
