#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the head od list
 * @str: the string or data to add
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	int i;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->str = strdup(str);
	for (i = 0; str[i]; i++)
		; /*since we aren't allowed to use strlen*/
	new->len = i;
	temp = *head;
	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}

	return (new);
}

