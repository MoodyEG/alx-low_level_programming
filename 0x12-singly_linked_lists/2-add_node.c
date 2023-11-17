#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the head od list
 * @str: the string or data to add
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->next = *head;
	new->str = strdup(str);
	for (i = 0; str[i]; i++)
		; /*since we aren't allowed to use strlen*/
	new->len = i;
	*head = new;

	return (new);
}

