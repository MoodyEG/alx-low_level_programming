#include "lists.h"

/**
 * list_len - returns the length
 * @h: the head od list
 * Return:  number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h) /*like that's it ?!*/
	{ /*that's the previous tasks with*/
		h = h->next; /* four lines deleted*/
		length++; /*why not make this one the start*/
	} /*why do mentors never help even when they reply*/

	return (length);
}
